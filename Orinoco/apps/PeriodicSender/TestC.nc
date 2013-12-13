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
#include "MulticastCommands.h"

#include "OrinocoDebugReportingMsg.h"

#define MSG_BURST_LEN      1    // number of packets per period (#)
#define DATA_PERIOD    122880UL  // data creation period (ms)
//#define DATA_PERIOD    61440UL  // data creation period (ms)
//#define DATA_PERIOD    5120UL  // data creation period (ms)
#define QUEUE_LIMIT        1    // aggregation degree (#)
#define WAKEUP_INTVL     768    // wake-up period (ms)

#define AM_PERIODIC_PACKET  33  // packet type

module TestC {
  uses {
    interface Boot;
    interface Timer<TMilli>;
    interface SplitControl as RadioControl;
    interface StdControl as ForwardingControl;
    interface RootControl;
    interface OrinocoConfig;
    interface OrinocoRoutingClient as OrinocoRouting;
    interface Packet;
    interface QueueSend as Send[collection_id_t];
    interface Leds;
    
    interface LocalTime<TMilli>;
    interface Random;
    
    // Orinoco Stats
    interface Receive as OrinocoStatsReporting;
    
    #ifdef ORINOCO_DEBUG_STATISTICS
    interface Receive as OrinocoDebugReporting;
    #endif
  }
}
implementation {
  message_t  myMsg;
  uint16_t   cnt = 0;
  bool       active = FALSE;
  uint32_t   delay = DATA_PERIOD;
  
  event void Boot.booted() {
    // we're no root, just make sure
    call RootControl.unsetRoot();

    // switch on radio and enable routing
    call RadioControl.start();
    call ForwardingControl.start();
    
    call OrinocoConfig.setWakeUpInterval(WAKEUP_INTVL);  
    call OrinocoConfig.setMinQueueSize(1);

    // start our packet timer
    call Timer.startOneShot(1 + (call Random.rand32() % delay));
  }

  event void Timer.fired() {
    uint8_t  msgCnt;
    error_t  result;
    
    for (msgCnt = 0; msgCnt < MSG_BURST_LEN; msgCnt++) {
      nx_uint16_t *d = call Packet.getPayload(&myMsg, sizeof(*d));
      call Packet.clear(&myMsg);
      *d = cnt++;
      result = call Send.send[AM_PERIODIC_PACKET](&myMsg, sizeof(*d));
      #ifdef PRINTF_H
      if (SUCCESS == result) {
        printf("%lu: %u data-tx %u\n", call LocalTime.get(), TOS_NODE_ID, *d);
        printfflush();
      } else {
        printf("%lu: %u data-fail %u\n", call LocalTime.get(), TOS_NODE_ID, *d);
        printfflush();
      }
      #endif
    }
    
    call Timer.startOneShot(delay);
  }

  void restartTimer(uint32_t value) {
    call Timer.startOneShot(value);
    delay = value;
  }

  event void OrinocoRouting.newCommandNotification(uint8_t cmd, uint16_t identifier) {
    error_t returnCode;
    
    #ifdef PRINTF_H
      printf("%lu: %u cmd-rx %u\n", call LocalTime.get(), TOS_NODE_ID, identifier);
      printfflush();
    #endif
    
    switch (cmd) {
    case ORINOCO_MULTICAST_COMMAND_SAMPLE_FAST:
      restartTimer(DATA_PERIOD/10);
      returnCode = SUCCESS;
      break;
    case ORINOCO_MULTICAST_COMMAND_SAMPLE_NORM:
      restartTimer(DATA_PERIOD);
      returnCode = SUCCESS;
      break;
    case ORINOCO_MULTICAST_COMMAND_SAMPLE_SLOW:
      restartTimer(DATA_PERIOD*3);
      returnCode = SUCCESS;
      break;
    case ORINOCO_MULTICAST_COMMAND_LED1:
      /* LED1 not available because it is used for Orinoco */
      call Leds.led1Off(); call Leds.led2Off();
      returnCode = SUCCESS;
      break;
    case ORINOCO_MULTICAST_COMMAND_LED2:
      call Leds.led1On(); call Leds.led2Off();
      returnCode = SUCCESS;
      break;
    case ORINOCO_MULTICAST_COMMAND_LED3:
      call Leds.led2On(); call Leds.led1Off();
      returnCode = SUCCESS;
      break;
    /* NOT YET IMPLEMENTED:
    case ORINOCO_MULTICAST_COMMAND_POLLCMD:
      returnCode = SUCCESS;
      break;*/
    default: returnCode = FAIL;
    }

    // call this if you want the node to acknowledge the execution of the command
    // TODO do we need output here?
    call OrinocoRouting.confirmCommandExecution(cmd, identifier, returnCode);
  }

  event void OrinocoRouting.noMorePacketNotification() { 
    /* This one is called when we have been removed from the multicast group */ 
  }
  
  event void RadioControl.startDone(error_t error) { }

  event void RadioControl.stopDone(error_t error) { }
  

  /* ************************* ORINOCO STATS ************************* */
  event message_t * OrinocoStatsReporting.receive(message_t *msg, void *payload, uint8_t len) {
    //call Send.send[CID_ORINOCO_STATS_REPORT](msg, len);  // packet is copied or rejected
    return msg;
  }

  #ifdef ORINOCO_DEBUG_STATISTICS
  event message_t * OrinocoDebugReporting.receive(message_t * msg, void * payload, uint8_t len) {
    //call Send.send[CID_ORINOCO_DEBUG_REPORT](msg, len);  // packet is copied or rejected
    
    #ifdef PRINTF_H
    OrinocoDebugReportingMsg * m = (OrinocoDebugReportingMsg *)payload;
    printf("%lu: %u dbg %u %u %u %lu %lu %u %lu %lu %lu %u %lu %u %u\n",
      call LocalTime.get(),
      TOS_NODE_ID,
      m->seqno,
      m->qs.numPacketsDropped,
      m->qs.numDuplicates,
      m->ps.numTxBeacons,
      m->ps.numTxAckBeacons,
      m->ps.numTxBeaconsFail,
      m->ps.numRxBeacons,
      m->ps.numIgnoredBeacons,
      m->ps.numTxPackets,
      m->ps.numTxPacketsFail,
      m->ps.numRxPackets,
      m->ps.numTxTimeouts,
      m->ps.numMetricResets);
    printfflush();
    #endif 
    
    return msg;
  }
  #endif
}
