/* $Id: $ */
/*
 * Copyright (c) 2011 Hamburg University of Technology (TUHH).
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
 * - Neither the name of the Hamburg University of Technology nor
 *   the names of its contributors may be used to endorse or promote
 *   products derived from this software without specific prior written
 *   permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE
 * HAMBURG UNIVERSITY OF TECHNOLOGY OR ITS CONTRIBUTORS BE LIABLE
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
 * @author Christian Renner
 * @date December 14 2011
 */

#include "Orinoco.h"

configuration OrinocoRadioC {
  provides {
    interface SplitControl;

    interface Packet;
    interface Send;
    interface Receive;

    interface OrinocoRoutingRoot;
    interface OrinocoRoutingClient;
    
// TODO multi
//    // packet time stamping and delay calculation
//    interface LocalTime<TRadio> as LocalTimeRadio;
//    interface PacketField<uint8_t> as PacketTimeSyncOffset;
//    interface PacketTimeStamp<TRadio, uint32_t> as PacketTimeStampRadio;
    interface PacketDelay<TMilli> as PacketDelayMilli;
  }
  uses {
    interface QueueStatus;
    interface OrinocoPathCost;
    interface OrinocoTrafficUpdates as TrafficUpdates;
    interface OrinocoTrafficStatistics as TrafficStatistics;
    interface OrinocoRoutingStateInternal as RoutingState;
  }
}
implementation {
  components OrinocoRadioP as Mac;

  SplitControl      = Mac;
  Packet            = Mac;
  Send              = Mac;
  Receive           = Mac;
  QueueStatus       = Mac;
  OrinocoPathCost   = Mac;
  TrafficUpdates    = Mac;
  TrafficStatistics = Mac;
  RoutingState      = Mac;
  
  // why do we use active messages at all?
  components ActiveMessageC as AM;
  Mac.SubControl       -> AM;
  Mac.SubPacket        -> OrinocoPacketDelayLayerC; // AM;
  Mac.SubAMPacket      -> AM;
  Mac.BeaconSubReceive -> AM.Receive[ORINOCO_AM_BEACON];  // get all beacons (wire twice!)
  Mac.BeaconSubReceive -> AM.Snoop[ORINOCO_AM_BEACON];
  Mac.DataSubReceive   -> OrinocoPacketDelayLayerC; // AM.Receive[ORINOCO_AM_DATA];
  Mac.DataSubSnoop     -> AM.Snoop[ORINOCO_AM_DATA];
  Mac.BeaconSubSend    -> AM.AMSend[ORINOCO_AM_BEACON];
  Mac.DataSubSend      -> OrinocoForwardLayerC; // AM.AMSend[ORINOCO_AM_DATA];

  // TODO Temporary solution, should be moved in sep. module
  Mac.LinkPacketMetadata -> AM;
  //Mac.PacketRSSI         -> AM.PacketRSSI;

//  PacketTimeStampRadio  = AM;

  components OrinocoForwardLayerC;
  OrinocoForwardLayerC.SubSendData -> OrinocoPacketDelayLayerC; // AM.AMSend[ORINOCO_AM_DATA];
  OrinocoForwardLayerC.Config      -> Mac;

  components OrinocoPacketDelayLayerC;
  PacketDelayMilli = OrinocoPacketDelayLayerC;
  OrinocoPacketDelayLayerC.AMSubSend  -> AM.AMSend[ORINOCO_AM_DATA];
  OrinocoPacketDelayLayerC.SubReceive -> AM.Receive[ORINOCO_AM_DATA];
  OrinocoPacketDelayLayerC.SubPacket  -> AM;

  #ifdef PRINTF_H
  components LocalTimeMilliC as Clock;
  Mac.LocalTime -> Clock;
  #endif

  components new TimerMilliC() as Timer;
  Mac.Timer -> Timer;

  components OrinocoConfigC;
  Mac.Config -> OrinocoConfigC;

  // Bloom filter-based routing
  components OrinocoRoutingC;
  OrinocoRoutingRoot   = OrinocoRoutingC; // interface OrinocoRoutingRoot
  OrinocoRoutingClient = OrinocoRoutingC; // interface OrinocoRoutingClient
  Mac.Routing -> OrinocoRoutingC;         // interface OrinocoRoutingInternal
  
  components RandomC;
  Mac.Random -> RandomC;

  components LedsC;
  //components NoLedsC as LedsC;
  Mac.Leds -> LedsC;

  // dirty hack to enable platform specific setup
  components OrinocoPlatformModificationsC;
}

