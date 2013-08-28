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
 
#include "Reporting.h"
#include "Orinoco.h"

#define MSG_BURST_LEN      1    // number of packets per period (#)
#define DATA_PERIOD    30720UL  // data creation period (ms)
#define QUEUE_LIMIT        1    // aggregattion degree (#)
#define WAKEUP_INTVL    1024    // wake-up period (ms)

#define AM_PERIODIC_PACKET  33  // packet type

module TestC {
  uses {
    interface Boot;
    interface Timer<TMilli>;
    interface SplitControl as RadioControl;
    interface StdControl as ForwardingControl;
    interface RootControl;
    interface OrinocoConfig;
    interface Packet;
    interface QueueSend as Send[collection_id_t];
        
    // Orinoco Stats
    interface Receive as OrinocoStatsReportingMsg;
    interface Receive as OrinocoDebugReportingMsg;
  }
}
implementation {
  message_t  myMsg;
  uint16_t  cnt = 0;

  event void Boot.booted() {
    // we're no root, just make sure
    call RootControl.unsetRoot();  // make this node a root

    // switch on radio and enable routing
    call RadioControl.start();
    call ForwardingControl.start();
    
    call OrinocoConfig.setWakeUpInterval(WAKEUP_INTVL);  
    call OrinocoConfig.setMinQueueSize(1);

    // start our packet timer
    call Timer.startPeriodic(DATA_PERIOD);
  }

  event void Timer.fired() {
    uint8_t  msgCnt;

    for (msgCnt = 0; msgCnt < MSG_BURST_LEN; msgCnt++) {
      nx_uint16_t * d;

      // prepare message
      call Packet.clear(&myMsg);
      
      d = call Packet.getPayload(&myMsg, sizeof(cnt));
      *d = cnt++;

      // and send it
      call Send.send[AM_PERIODIC_PACKET](&myMsg, sizeof(cnt));
    }
  }

  event void RadioControl.startDone(error_t error) {
    // nothing
  }

  event void RadioControl.stopDone(error_t error) {
    // nothing
  }
  
  
  /* ************************* ORINOCO STATS ************************* */
  event message_t * OrinocoStatsReportingMsg.receive(message_t * msg, void * payload, uint8_t len) {
    call Send.send[CID_ORINOCO_STATS_REPORT](msg, len);  // packet is copied or rejected
    return msg;
  }

  event message_t * OrinocoDebugReportingMsg.receive(message_t * msg, void * payload, uint8_t len) {
    call Send.send[CID_ORINOCO_DEBUG_REPORT](msg, len);  // packet is copied or rejected
    return msg;
  }
}
