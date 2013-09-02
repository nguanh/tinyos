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

#include "Routing.h"

module OrinocoRoutingP {
  uses {
    interface ActiveMessageAddress as AMA;
  }
  provides {
    interface OrinocoRouting;
    interface SplitControl;
  }
}

implementation {
  uint8_t i; // the classic
  
  // routing information
  bool                     packetWaiting_ = FALSE;
  orinoco_routing_t        curRouting_;
  orinoco_bloom_pointers_t bp_;

  
  uint8_t calcHash(am_addr_t address, uint8_t seed) {
    uint32_t data = seed; 
    data <<= 8; 
    data |= seed; 
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

  // calculate offsets in Bloom Filter after every address change
  void updateHashes(void) {
    am_addr_t local = call AMA.amAddress();
    dbg("Calculating hashes for local id %d\n", local);
    for (i=0; i<BLOOM_HASHES; i++) {
      bp_.hashes[i] = calcHash(local, i);
      dbg("Hash %d is %d\n", i, bp_.hashes[i]);
    }
  }
  
  bool checkForPresenceInFilter() {
    uint8_t offsetByte, offsetBit;
    
    for (i=0;i<BLOOM_HASHES;i++) {
      offsetByte = bp_.hashes[i] >> 0x03;
      offsetBit = 0x80 >> (bp_.hashes[i] & 0x07);
      if ((curRouting_.bloom[offsetByte] && offsetBit) == 0) return FALSE;
    }
    
    return TRUE;
  }
  
  command void OrinocoRouting.updateBloomFilter(orinoco_routing_t route) {
    if (route.version > curRouting_.version || 
      ((curRouting_.version == 0xFFFF) && (route.version == 0))) {
      
      dbg("update to routing version %u->%u\n",curRouting_.version,route.version);
          
      // TODO check if this really needs to be copied or if we can use the pointer 
      curRouting_.version = route.version; // maybe memcpy is an alternative...
      for (i=0;i<BLOOM_BYTES;i++) curRouting_.bloom[i] = route.bloom[i];

      packetWaiting_ = checkForPresenceInFilter();
    } else {
      dbg("received same routing filter again - ignoring...\n");
    }
  }
  
  command orinoco_routing_t* OrinocoRouting.getCurrentBloomFilter(void) {
    return &curRouting_;
  }
  
  command bool OrinocoRouting.packetWaitingForMe(void) {
    return packetWaiting_;
  }  
  
  async event void AMA.changed() {
    updateHashes();
  }
  
  command error_t SplitControl.start() {
    updateHashes();
    return SUCCESS;
  }
  
  command error_t SplitControl.stop() { return SUCCESS; }
}

