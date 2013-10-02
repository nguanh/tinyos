/* $Id: $ */
/*
 * Copyright (c) 2013 The University of New South Wales (UNSW)
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of the University of New South Wales
 *   the names of its contributors may be used to endorse or promote
 *   products derived from this software without specific prior written
 *   permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE
 * UNIVERSITY OF NEW SOUTH WALES OR ITS CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
 * OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
 * USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 */

/**
 * Bidirectional routing abstraction.
 *
 * @author Andreas Reinhardt
 * @date August 28, 2013
 */

module OrinocoRoutingP {
  uses {
    interface ActiveMessageAddress as AMA;
    interface LocalTime<TMilli> as Clock;
    // allow us to autonomously confirm Bloom Filter commands
    interface QueueSend as Send[collection_id_t];
    interface Packet;
  }
  provides {
    interface OrinocoRoutingRoot;
    interface OrinocoRoutingClient;
    interface OrinocoRoutingInternal;
    interface SplitControl;
  }
}

implementation {
  uint8_t    i;     // the classic, everybody should have one just in case
  message_t  myMsg; // see above

  bool                     packetWaiting_    = FALSE;
  bool                     mustTxFullFilter_ = TRUE;
  orinoco_routing_t        curRouting_;
  am_addr_t                localId_;
  orinoco_bloom_pointers_t bp_;

  #ifdef ORINOCO_DEBUG_STATISTICS
  uint32_t shortBcnTxCount_ = 0, longBcnTxCount_ = 0;
  #endif
  
  /* HASH FUNCTION ******************************************************************/
  
  // calculate the has for the specified address,
  uint8_t calcHash(am_addr_t address, uint8_t salt) {
    uint32_t data = salt;
    data <<= 8; 
    data |= salt; 
    data <<= 16; 
    data |= (uint16_t) address;

    // hash function borrowed from http://burtleburtle.net/bob/hash/integer.html
    data = (data+0x7ed55d16) + (data<<12);
    data = (data^0xc761c23c) ^ (data>>19);
    data = (data+0x165667b1) + (data<<5);
    data = (data+0xd3a2646c) ^ (data<<9);
    data = (data+0xfd7046c5) + (data<<3);
    data = (data^0xb55a4f09) ^ (data>>16);

    return data % (BLOOM_BYTES*8);
  }

  // calculate offsets in Bloom Filter after change of local node address
  void updateHashes(void) {
    localId_ = call AMA.amAddress();
    for (i=0; i<BLOOM_HASHES; i++) {
      bp_.hashes[i] = calcHash(localId_, i);
    }
        
    #ifdef PRINTF_H
    printf("%lu: Bloom filter hashes for address %d are: ", call Clock.get(), localId_);
    for (i=0; i<BLOOM_HASHES; i++) printf("%d ", bp_.hashes[i]);
    printf("\n");
    printfflush();
    #endif
  }
  
  // check if the node's local address is stored in the newly received filter
  bool checkForPresenceInFilter() {
    uint8_t offsetByte, offsetBit;    
    for (i=0;i<BLOOM_HASHES;i++) {
      offsetByte = bp_.hashes[i] >> 0x03;
      offsetBit = 0x80 >> (bp_.hashes[i] & 0x07);
      if ((curRouting_.bloom[offsetByte] & offsetBit) == 0) {
        signal OrinocoRoutingClient.noMorePacketNotification();
        return FALSE;
      }
    }    

    signal OrinocoRoutingClient.newCommandNotification(curRouting_.cmd, curRouting_.version);
    return TRUE;
  }
  
  void sendConfirmation(uint8_t cmd, uint16_t version, error_t status) {
    OrinocoCommandAckMsg* payload = (OrinocoCommandAckMsg*) call Packet.getPayload(&myMsg, sizeof(OrinocoCommandAckMsg));
    payload->cmd = cmd;
    payload->version = version;
    payload->result = status;

    #ifdef PRINTF_H
    printf("%lu: %u confirm execution of command %u (version %u): %u\n", call Clock.get(), TOS_NODE_ID, cmd, version, status);
    printfflush();
    #endif

    call Send.send[ORINOCO_AM_CMDCFRM](&myMsg, sizeof(OrinocoCommandAckMsg));
    // TBD: Do we need to care about return status (worst case: cmd is resent in next BF)
  }
  
  command void OrinocoRoutingClient.confirmCommandExecution(uint8_t cmd, uint16_t version, error_t status) {
    sendConfirmation(cmd, version, status);
  }

  /* BEACON RECEIVED ****************************************************************/
  
  void displayBloomFilter(void) {
    #ifdef PRINTF_H
    char dump[BLOOM_BYTES*8];
    for (i=0;i<BLOOM_BYTES;i++) {
      uint8_t j;
      for (j=0;j<8;j++) {
        dump[i*8+j] = (((curRouting_.bloom[i])&(0x80>>j))>0)?'1':'0';
      }
    }
    printf("%lu: RX'ed BF (v%u): %s\n", call Clock.get(), curRouting_.version, dump);
    #endif
  }
  
  command void OrinocoRoutingInternal.updateBloomFilter(const orinoco_routing_t * route) {
    if (route->version == curRouting_.version) return; // No change

    // TODO: Do we need to clear flags here when it is unsure whether the current filter
    //       still has this node in its destination set?
      
    // We have either (1) received a newer version and need to re-broadcast it or
    // (2) someone has sent an old beacon and we need to bring him up-to-date.
    mustTxFullFilter_ = TRUE; 

    if (route->cmd & SHORT_BEACON) return; // short beacons contain no routing data
    
    // we need to check if the version number is higher UNLESS a wraparound occurred...
    if ((                      route->version  >  curRouting_.version)    ||
       ((curRouting_.version - route->version) >= (BLOOM_VERSION_MAX/2)))  {
       // above wraparound workaround ensures that nodes can be disconnected for 
       // about 2 hours before they will ignore beacons for another two hours...
       // half of 65536 possible beacons "divided by" 4 beacons/sec = 8192 seconds
      
      #ifdef PRINTF_H
      printf("%lu: %u update to routing version %u->%u\n", call Clock.get(), TOS_NODE_ID, curRouting_.version, route->version);
        /* 
        #ifdef ORINOCO_DEBUG_STATISTICS
        printf("TX'ed short beacons: %lu, TX'ed long beacons: %lu\n",
               shortBcnTxCount_,longBcnTxCount_); 
        #endif
        */
      printfflush();  
      #endif
      
      // CR: deep copy anyway (array inside struct)
      curRouting_ = *route;
      // CR TODO maybe add a note that we want to keep the SHORT_flag unset?
      /*
      curRouting_.cmd     = route.cmd;     // multicast group command
      curRouting_.version = route.version; // maybe memcpy is an alternative...
      for (i=0;i<BLOOM_BYTES;i++) curRouting_.bloom[i] = route.bloom[i];
      */

      //displayBloomFilter();
    
      packetWaiting_ = checkForPresenceInFilter();
    }
  }
  
  command const orinoco_routing_t* OrinocoRoutingInternal.getCurrentBloomFilter(void) {
    // Set bit 0x80 to indicate short beacon without Bloom filter attached
    if (mustTxFullFilter_) {
      curRouting_.cmd &= ~SHORT_BEACON; // clear short beacon flag
      #ifdef ORINOCO_DEBUG_STATISTICS
      longBcnTxCount_++;
    } else {
      // CR: previous version never set the short beacon flag ...
      curRouting_.cmd |= SHORT_BEACON; // set short beacon flag
      shortBcnTxCount_++; 
      #endif
    }
    mustTxFullFilter_ = FALSE;
    return &curRouting_;
  }
  
  // legacy (non event-based) interface to poll whether data is available for us
  command bool OrinocoRoutingInternal.packetAvailableForUs(void) {
    return packetWaiting_;
  }

  /* BLOOM FILTER ADDITION/REMOVAL **************************************************/
  
  // set bit in Bloom filter, return if it was already set before (not currently used)
  bool setBitInFilter(uint16_t offset) {
    bool result = FALSE;
    uint8_t offsetByte, offsetBit;
    offsetByte = offset >> 0x03;
    offsetBit = 0x80 >> (offset & 0x07);
    if ((curRouting_.bloom[offsetByte] & offsetBit) != 0) result = TRUE;
    curRouting_.bloom[offsetByte] |= offsetBit;
    return result;
  }
    
  // clear Bloom filter
  void clearBloomFilter(void) {
    for (i=0; i<BLOOM_BYTES; i++) curRouting_.bloom[i] = 0;
  }
  
  // add node ID to Bloom filter
  void addToBloomFilter(am_addr_t address) {
    for (i=0; i<BLOOM_HASHES; i++) {
      // TODO What to do upon hash collisions (hashes for ID 0 are 30, 30, 39)??
      setBitInFilter(calcHash(address, i));
    }
  }
  
  // after each modification of the Bloom filter, its version should be increased
  void increaseRoutingVersion() {
    if (curRouting_.version >= BLOOM_VERSION_MAX) {
      curRouting_.version = 0;
    } else curRouting_.version++;
  }

  command void OrinocoRoutingRoot.resetBloomFilter() {
    clearBloomFilter();  
    increaseRoutingVersion();
  }
  
  command void OrinocoRoutingRoot.addDestination(am_addr_t address) {
    addToBloomFilter(address);
    increaseRoutingVersion();
  }
  
  command void OrinocoRoutingRoot.resetAndAddDestination(am_addr_t address) {
    clearBloomFilter();
    addToBloomFilter(address);
    increaseRoutingVersion();
  }

  command void OrinocoRoutingRoot.setCommand(uint8_t cmd) {
    // CR why not set mustTxFullFilter_ = TRUE?
    curRouting_.cmd = cmd & ~SHORT_BEACON; // strip MSB to avoid accidental interpretation as data
    increaseRoutingVersion();
  }
  
  /****************************************************************************/

  // notification that node ID has changed   
  async event void AMA.changed() {
    updateHashes();
  }
  
  // calculate hashes on bootup
  command error_t SplitControl.start() {
    updateHashes();
    return SUCCESS;
  }
  
  // nothing can stop us now...
  command error_t SplitControl.stop() { return SUCCESS; }
  
  // ahm, this is weird...
  // OrinocoRoutingClient is used, but no one wants new command notifications?!
  // CR: we don't have to provide a default implementation (though this would break backward compatibility .. ;-)
  default event void OrinocoRoutingClient.newCommandNotification(uint8_t cmd, uint16_t version) {
    // We could confirm that we cannot execute this command. Or just leave the
    // interpretation of our missing response to the sink? 
    // sendConfirmation(cmd, version, FAIL);
  }
  
  // CR what excatly is this?
  default event void OrinocoRoutingClient.noMorePacketNotification() {}
}

