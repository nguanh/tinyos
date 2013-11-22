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
 
#include "OrinocoBeaconMsg.h"

module OrinocoRoutingP {
  uses {
    interface Boot;
    
    interface ActiveMessageAddress as AMA;
    interface LocalTime<TMilli> as Clock;
    // allow us to autonomously confirm Bloom Filter commands
    interface QueueSend as Send[collection_id_t];
    interface Packet;
    interface Random;
  }
  provides {
    interface Init;

    interface OrinocoRoutingRoot;
    interface OrinocoRoutingClient;
    interface OrinocoRoutingInternal;
  }
}

implementation {
  message_t  myMsg; // see above
  
  enum {
    BEACON_FORCE_NONE  = 0x00,
    BEACON_FORCE_SHORT = 0x01,
    BEACON_FORCE_LONG  = 0x02,
  };
  
  bool                      packetWaiting_ = FALSE;
  am_addr_t                 lastBeaconDestination_;
  am_addr_t                 lastBeaconSource_;
  
  orinoco_routing_t         curRouting_;
  orinoco_bloom_pointers_t  bp_;       // bf hashes
  am_addr_t                 localId_;

  // beacon type control
  uint8_t   rxOldBeaconsInLastCycle_ = 0; // number of outdated beacons in last cycle
  uint8_t   rxBeaconsInLastCycle_ = 0;    // total number of beacons in last cycle
  uint8_t   beaconOverride_ = BEACON_FORCE_NONE; // force a particular beacon type
  uint16_t  txLongBeaconProb_  = 256;       // probability to send a long beacon (0-256 (!))
  // FIXME ^^^^^^^^^^^^^^^^^^^^^^^^^
  // this is a mess and a dirty hack to make a sink always send long beacons
  // DO NOT CHANGE!
  
  // statistics
  uint32_t  shortBcnTxCount_ = 0, longBcnTxCount_ = 0;
  
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
    uint8_t i;
    
    localId_ = call AMA.amAddress();
    for (i = 0; i < BLOOM_HASHES; i++) {
      bp_.hashes[i] = calcHash(localId_, i);
    }
        
    #ifdef PRINTF_H
    printf("%lu: %u bf-hashes", call Clock.get(), localId_);
    for (i = 0; i < BLOOM_HASHES; i++) printf(" %d", bp_.hashes[i]);
    printf("\n");
    printfflush();
    #endif
  }
  
  // check if the node's local address is stored in the newly received filter
  bool checkForPresenceInFilter() {
    uint8_t  i, offsetByte, offsetBit;
    for (i = 0; i < BLOOM_HASHES; i++) {
      offsetByte = bp_.hashes[i] >> 0x03;
      offsetBit = 0x80 >> (bp_.hashes[i] & 0x07);
      if ((curRouting_.bloom[offsetByte] & offsetBit) == 0) {
        return FALSE;
      }
    }
    return TRUE;
  }
  
  void sendConfirmation(uint8_t cmd, uint16_t version, error_t status) {
    OrinocoCommandAckMsg* payload = (OrinocoCommandAckMsg*) call Packet.getPayload(&myMsg, sizeof(OrinocoCommandAckMsg));
    payload->cmd = cmd;
    payload->version = version;
    payload->result = status;

    #ifdef PRINTF_H
    printf("%lu: %u bf-tx-conf (%u, %u, %u)\n", call Clock.get(), localId_, cmd, version, status);
    printfflush();
    #endif

    call Send.send[ORINOCO_AM_CMDCFRM](&myMsg, sizeof(OrinocoCommandAckMsg));
    // TBD: Do we need to care about return status (worst case: cmd is resent in next BF)
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
  void clearBloomFilter() {
    uint8_t  i;
    for (i = 0; i < BLOOM_BYTES; i++) {
      curRouting_.bloom[i] = 0x00;
    }
  }
  
  // add node ID to Bloom filter
  void addToBloomFilter(am_addr_t address) {
    uint8_t  i;
    for (i = 0; i < BLOOM_HASHES; i++) {
      // TODO What to do upon hash collisions (hashes for ID 0 are 30, 30, 39)??
      setBitInFilter(calcHash(address, i));
    }
  }
  
  // after each modification of the Bloom filter, its version should be increased
  // and full transmissions of the Bloom filter triggered to update the neighbors
  void increaseRoutingVersion() {
    uint16_t  curVersion_ = curRouting_.version & ~SHORT_BEACON;
    if (curVersion_ >= BLOOM_VERSION_MAX) {
      curRouting_.version = 0;
    } else {
      curRouting_.version = curVersion_ + 1;
    }
    lastBeaconDestination_ = localId_;

    #ifdef PRINTF_H
    printf("%lu: %u bf-inc %u\n", call Clock.get(), TOS_NODE_ID, curRouting_.version);
    printfflush();
    #endif
  }
  
  
  /*** Init **************************************************************/
  command error_t Init.init() {
    // bf data
    curRouting_.version = 0;
    //curRouting_.cmd     = 0;    // FIXME
    clearBloomFilter();
    
    // beacon status
    packetWaiting_         = FALSE;
    lastBeaconDestination_ = localId_;
    lastBeaconSource_      = localId_;  // FIXME?
  
    // hashes will be initialized after booting
    
    return SUCCESS;
  }
  
  
  /*** OrinocoRoutingClient **********************************************/
  command void OrinocoRoutingClient.confirmCommandExecution(uint8_t cmd, uint16_t version, error_t status) {
    sendConfirmation(cmd, version, status);
  }

  /* BEACON RECEIVED ****************************************************************/
  
  void displayBloomFilter() {
    #ifdef PRINTF_H
    uint8_t  i;
    char dump[BLOOM_BYTES*8];
    for (i=0;i<BLOOM_BYTES;i++) {
      uint8_t j;
      for (j=0;j<8;j++) {
        dump[i*8+j] = (((curRouting_.bloom[i])&(0x80>>j))>0)?'1':'0';
      }
    }
    #endif
  }
  
  command void OrinocoRoutingInternal.updateBloomFilter(const orinoco_routing_t * route, am_addr_t source)
  {
    uint8_t   i;
    uint16_t  rxVersion = route->version      & ~SHORT_BEACON;
    uint16_t  myVersion = curRouting_.version & ~SHORT_BEACON;
    rxBeaconsInLastCycle_++; // count number of received beacons in wakeup phase
    
    #ifdef PRINTF_H
      printf("%lu: %u bf-rx %u (%u, %u, %u)\n", call Clock.get(), localId_, source, myVersion, rxVersion, (route->version & SHORT_BEACON) ? 1 : 0);
      printfflush();
    #endif
    
    if (rxVersion == myVersion) return; // no update

    // If we get here, there is either:
    // (1) a newer version of the Bloom filter in the network or 
    // (2) someone has sent a beacon indicating an old version

    // TBD: Do we need to clear packet notification flags here when it is unsure whether
    //      the current (=a newer) filter still has this node in its destination set?

    // version number must be higher UNLESS a wraparound occurred...
    if ((rxVersion > myVersion) || ((myVersion - rxVersion) >= (BLOOM_VERSION_MAX/2))) {
       // above wraparound workaround ensures that nodes can be disconnected for 
       // about one hour before they will ignore beacons for another hour...
       // half of 32767 possible beacons "divided by" 4 beacons/sec = 4096 seconds

      // So again, if we get here, then a neighbor has a newer version...
      if (route->version & SHORT_BEACON) {
        // ...but hasn't sent it along with this beacon. This means we should certainly 
        // stop sending our (outdated) filter within the (long) beacons to our neighbors.
        beaconOverride_ = BEACON_FORCE_SHORT;
        return; 
        
      } else {
        // ...and we have received it! In order to bring our neighbors up-to-date, let us
        // send mostly long beacons next to disseminate it quickly.
        beaconOverride_ = BEACON_FORCE_LONG;
      }
      
      #ifdef PRINTF_H
      printf("%lu: %u bf-up %u (%u, %u)\n", call Clock.get(), localId_, source, myVersion, rxVersion);
      printfflush();  
      #endif

      // curRouting_ = *route; /* this pointer operation does not work... */
	  // TODO Check if we can still use pointers here...
      // maybe memcpy is an alternative...
      curRouting_.version = rxVersion;
      curRouting_.cmd     = route->cmd;
      for (i = 0; i < BLOOM_BYTES; i++) {
        curRouting_.bloom[i] = route->bloom[i];
      }

      lastBeaconSource_      = source;
      lastBeaconDestination_ = localId_;
      
      //displayBloomFilter();    
      
      packetWaiting_ = checkForPresenceInFilter(); // send notification events
      if (packetWaiting_) {
        signal OrinocoRoutingClient.newCommandNotification(curRouting_.cmd, curRouting_.version);
      } else {
        signal OrinocoRoutingClient.noMorePacketNotification();
      }
    } else {
      rxOldBeaconsInLastCycle_++; // received an outdated routing version
    }
  }
  
  command void OrinocoRoutingInternal.wakeUpCycleFinished(void) {
    if (beaconOverride_ == BEACON_FORCE_SHORT) {
      txLongBeaconProb_ = 0;
      #ifdef PRINTF_H
        printf("%lu: %u bf-force-short\n", call Clock.get(), TOS_NODE_ID);
        printfflush();
      #endif
    } else if (beaconOverride_ == BEACON_FORCE_LONG) {
      txLongBeaconProb_ = 256;    
      #ifdef PRINTF_H
        printf("%lu: %u bf-force-long\n", call Clock.get(), TOS_NODE_ID);
        printfflush();
      #endif
    } else {
      if (rxBeaconsInLastCycle_ == 0) return; // did not receive snapshot of neighbor status
      txLongBeaconProb_ = ((uint16_t)rxOldBeaconsInLastCycle_ * 256) / rxBeaconsInLastCycle_;

      #ifdef PRINTF_H
        printf("%lu: %u bf-lbprob (%u, %u, %u)\n", call Clock.get(), TOS_NODE_ID, rxBeaconsInLastCycle_, rxOldBeaconsInLastCycle_, txLongBeaconProb_);
        printfflush();
      #endif
    }      
    
    rxBeaconsInLastCycle_ = 0; 
    rxOldBeaconsInLastCycle_ = 0;
    beaconOverride_ = BEACON_FORCE_NONE;
  }
  
  
  command const orinoco_routing_t* OrinocoRoutingInternal.getCurrentBloomFilter(am_addr_t dest) {  
    // Start the short beacon magic...
    // NOTE only works correctly for txLongBeaconProb_ in [0,256] (!)
    bool sendShort = (uint8_t)(call Random.rand16() & 0x00FF) >= txLongBeaconProb_;
    
    // We learned our latest filter from this node or sent our filter to this node before
    if (dest==lastBeaconSource_ || dest==lastBeaconDestination_ || sendShort) {
      curRouting_.version |= SHORT_BEACON;  // set short beacon flag
      shortBcnTxCount_++; 
    } else {
      curRouting_.version &= ~SHORT_BEACON;  // clear short beacon flag
      if (dest != AM_BROADCAST_ADDR) {
        lastBeaconDestination_ = dest;      // memorize: this one has received full filter
      }
      longBcnTxCount_++;
    }
    
    #ifdef PRINTF_H
    if ((shortBcnTxCount_ + longBcnTxCount_) % 100 == 0) {
      printf("%lu: %u beac-stat (%lu, %lu)\n", call Clock.get(), localId_, shortBcnTxCount_,longBcnTxCount_);
      printfflush();  
    }
    #endif
    
    return &curRouting_;
  }
  
  // legacy (non event-based) interface to poll whether data is available for us
  command bool OrinocoRoutingInternal.packetAvailableForUs(void) {
    return packetWaiting_;
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
    curRouting_.cmd = cmd;
    increaseRoutingVersion();
  }
  
  /****************************************************************************/

  // notification that node ID has changed   
  async event void AMA.changed() {
    updateHashes();
  }
  
  // calculate hashes on bootup
  event void Boot.booted() {
    updateHashes();
  }
  
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

