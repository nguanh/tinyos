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
 * MASSACHUSETTS INSITIUTE OF TECHNOLOGY OR ITS CONTRIBUTORS BE LIABLE
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

// TODO FIXME
// check whether these are IRIS specific or valid for other platforms as well!
// compatibility check
#ifdef PACKET_LINK
#	error Please deactivate PACKET_LINK
#endif

#ifdef LOW_POWER_LISTENING
#	error Please deactivate LOW_POWER_LISTENING
#endif

configuration OrinocoP {
  provides {
    // control
    interface RootControl;
    interface StdControl as ForwardingControl;  // enable forwarding (sending)
    interface SplitControl as RadioControl;     // enable radio

    // send and receive
    interface QueueSend as Send[collection_id_t id];
    interface Receive[collection_id_t id];
    interface Receive as Snoop[collection_id_t id];
    interface Intercept[collection_id_t id];

    // packet
    interface Packet;
    interface CollectionPacket;
    interface PacketDelay<TMilli> as PacketDelayMilli;

    // make config and traffic statistics available
    interface OrinocoConfig;
    interface OrinocoTrafficStatistics;
  }
}
implementation {
  components MainC;

  components OrinocoQueueP as Queue;
  RootControl           = Queue;
  ForwardingControl     = Queue;
  Packet                = Queue;
  CollectionPacket      = Queue;
  Send                  = Queue;
  Receive               = Queue.Receive;
  Snoop                 = Queue.Snoop;
  Intercept             = Queue;
  MainC                -> Queue.Init;

  components OrinocoRadioC;
  PacketDelayMilli  = OrinocoRadioC;
  RadioControl      = OrinocoRadioC;
  Queue.SubPacket  -> OrinocoRadioC;
  Queue.SubReceive -> OrinocoRadioC.Receive;
  Queue.SubSend    -> OrinocoRadioC;
  Queue.PacketDelayMilli -> OrinocoRadioC;

  // config
  components OrinocoConfigC;
  OrinocoConfig = OrinocoConfigC;
  Queue.Config -> OrinocoConfigC;

  components OrinocoPathCostHopCountC as PathCost;
  PathCost.RootControl -> Queue;
  OrinocoRadioC.OrinocoPathCost  ->  PathCost;

  components new QueueC(mq_entry_t, ORINOCO_QUEUE_SIZE) as SendQueue;
  Queue.SendQueue  -> SendQueue;

  components new PoolC(message_t, ORINOCO_QUEUE_SIZE) as MsgPool;
  Queue.MsgPool    -> MsgPool;

  components new OrinocoCacheC(mc_entry_t, ORINOCO_PACKETHISTORY_SIZE) as PacketHistory;
  Queue.PacketHistory    -> PacketHistory;
  PacketHistory.CacheCompare -> Queue;

  components OrinocoTrafficStatisticsC;
  OrinocoTrafficStatistics         = OrinocoTrafficStatisticsC;
  Queue.TrafficUpdates            -> OrinocoTrafficStatisticsC;
  OrinocoRadioC.TrafficUpdates    -> OrinocoTrafficStatisticsC;
  OrinocoRadioC.TrafficStatistics -> OrinocoTrafficStatisticsC;
}
