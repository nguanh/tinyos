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

#include "AM.h"
#include "Reporting.h"
#include "printf.h"


module SinkP @safe() {
  uses {
    interface Boot;
    interface SplitControl as RadioControl;
    interface StdControl as RoutingControl;
    interface RootControl;

    interface OrinocoConfig;

    // radio
    interface Packet as RadioPacket;
    interface CollectionPacket;
    interface Receive as RadioReceive[collection_id_t];
    interface QueueSend as RadioSend[collection_id_t];

    interface PacketDelay<TMilli> as PacketDelayMilli;

    interface Receive as OrinocoStatsReportingMsg;
    interface Receive as OrinocoDebugReportingMsg;

    interface Leds;
  }
}

implementation
{
  event void Boot.booted() {

    // set static wake-up interval for orinoco
    call OrinocoConfig.setWakeUpInterval(256); // ms

    call RootControl.setRoot();
    call RoutingControl.start();
    call RadioControl.start();
  }

  event message_t * OrinocoStatsReportingMsg.receive(message_t * msg, void * payload, uint8_t len) {
    //call RadioSend.send[CID_ORINOCO_STATS_REPORT](msg, len);  // packet is copied or rejected
    return msg;
  }

  event message_t * OrinocoDebugReportingMsg.receive(message_t * msg, void * payload, uint8_t len) {
    //call RadioSend.send[CID_ORINOCO_DEBUG_REPORT](msg, len);  // packet is copied or rejected
    return msg;
  }

  event void RadioControl.startDone(error_t error) {}

  event void RadioControl.stopDone(error_t error) {}



  event message_t *
  RadioReceive.receive[collection_id_t](message_t * msg, void * payload, uint8_t len) {
    printf("%u app rx %u %u\n", TOS_NODE_ID, call CollectionPacket.getOrigin(msg), (uint16_t)(*(nx_uint16_t*)payload));
    printfflush();
    return msg;
  }
}
