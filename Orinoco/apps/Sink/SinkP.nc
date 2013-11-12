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
#include "Serial.h"
#include <UserButton.h>
#include "Reporting.h"
#include "MulticastCommands.h"

#include "OrinocoDebugReportingMsg.h"

#define BLOOM_ADDR_MAX 100


module SinkP @safe() {
  uses {
    interface Boot;
    interface SplitControl as SerialControl;
    interface SplitControl as RadioControl;
    interface StdControl as RoutingControl;
    interface OrinocoRoutingRoot;
    
    interface RootControl;

    interface OrinocoConfig;

    interface Timer<TMilli> as AliveTimer;

    // Uart
    interface AMSend as UartSend[am_id_t id];
    //interface Receive as UartReceive[am_id_t id];
    interface Packet as UartPacket;
    interface AMPacket as UartAMPacket;

    // radio
    interface Packet as RadioPacket;
    interface CollectionPacket;
    interface Receive as RadioReceive[collection_id_t];
    interface QueueSend as RadioSend[collection_id_t];

    interface PacketDelay<TMilli> as PacketDelayMilli;

/*    
    interface AMSend as RadioSend[am_id_t id];
    interface Receive as RadioReceive[am_id_t id];
    interface Receive as RadioSnoop[am_id_t id];
    interface Packet as RadioPacket;
    interface AMPacket as RadioAMPacket;
*/

    interface Receive as OrinocoStatsReporting;
    interface Receive as OrinocoDebugReporting;

    interface Notify<button_state_t>;
    interface Leds;

    interface LocalTime<TMilli>;  
  }
}


#ifndef SLEEP_DURATION
#  define SLEEP_DURATION 1024
#endif
#ifndef BLOOM_ADD_NODE_INTVL
#  define BLOOM_ADD_NODE_INTVL 307200UL
#endif
//#pragma message "WAKEUP_INTVL =" WAKEUP_INTVL
  

implementation
{
  enum {
    UART_QUEUE_LEN = 40,
  };

  message_t  uartQueueBufs[UART_QUEUE_LEN];
  message_t  * ONE_NOK uartQueue[UART_QUEUE_LEN];
  uint8_t    uartIn, uartOut;
  bool       uartBusy, uartFull;

  uint8_t numDrop = 0, numFail = 0;

  void successBlink() { }
  void dropBlink() { numDrop++; call Leds.led1Toggle(); }
  void failBlink() { numFail++; call Leds.led2Toggle(); }
  task void uartSendTask();
  
  message_t* qInsert(message_t * msg) {
    message_t* ret = msg;

    atomic {
      if (!uartFull) {
        ret = uartQueue[uartIn];
        uartQueue[uartIn] = msg;
        uartIn = (uartIn + 1) % UART_QUEUE_LEN;

        if (uartIn == uartOut) uartFull = TRUE;
        if (!uartBusy) {
          post uartSendTask();
          uartBusy = TRUE;
        }
      } else {
        //post uartSendTask();  // ADDED make sure that uart is sending
        dropBlink();
      }
    }
    return ret;
  }


  event void Boot.booted() {
    uint8_t i;

    atomic {
      for (i = 0; i < UART_QUEUE_LEN; i++)
        uartQueue[i] = &uartQueueBufs[i];
      uartIn = uartOut = 0;
      uartBusy = FALSE;
      uartFull = TRUE;
    }

    // set static wake-up interval for orinoco
    call OrinocoConfig.setWakeUpInterval(SLEEP_DURATION); // ms

    // bring the components up
    call RootControl.setRoot();
    call RoutingControl.start();
    call RadioControl.start();
    call SerialControl.start();

    // demo function
    call Notify.enable();
    call AliveTimer.startPeriodic(BLOOM_ADD_NODE_INTVL);
  }

  // DEBUG: This is a current test implementation to see if recipients 
  //        find themselves in the Bloom filter
  am_addr_t addr = 1;
  event void AliveTimer.fired() {
    call OrinocoRoutingRoot.addDestination(addr);
    #ifdef PRINTF_H
    printf("%lu: %u bfadd 0x%04x\n", call LocalTime.get(), TOS_NODE_ID, addr);
    printfflush();
    #endif
    addr++;
    if (addr == BLOOM_ADDR_MAX) {
      addr = 1;
    }
  }

  // Cycle through currently supported commands by means of user button...
  uint8_t n, cmd;
  event void Notify.notify(button_state_t state) {
    if (state == BUTTON_PRESSED) {
      call Leds.led2On();
    } else if (state == BUTTON_RELEASED) {
      n++;
      if (n>=7) { cmd = 0x60; n = 0; }
      else cmd = 1<<n;
      call OrinocoRoutingRoot.setCommand(cmd);
      #ifdef PRINTF_H
      printf("Change remote command to %u (%s)\n",cmd,getFunctionName(cmd));
      printfflush();
      #endif
      call Leds.led2Off();
    }
  }

  event message_t * OrinocoStatsReporting.receive(message_t * msg, void * payload, uint8_t len) {
    //call RadioSend.send[CID_ORINOCO_STATS_REPORT](msg, len);  // packet is copied or rejected
    return msg;
  }

  event message_t * OrinocoDebugReporting.receive(message_t * msg, void * payload, uint8_t len) {
    //call RadioSend.send[CID_ORINOCO_DEBUG_REPORT](msg, len);  // packet is copied or rejected
    
    OrinocoDebugReportingMsg * m = (OrinocoDebugReportingMsg *)payload;
    printf("%lu: %u debug %u %u %u %lu %lu %u %lu %lu %lu %u %lu %u %u\n",
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
    
    return msg;
  }

  event void SerialControl.startDone(error_t error) {
    if (error == SUCCESS) {
      uartFull = FALSE;
      uartBusy = FALSE;
    }
  }

  event void SerialControl.stopDone(error_t error) {
    call SerialControl.start();  // restart
  }


  event void RadioControl.startDone(error_t error) {}

  event void RadioControl.stopDone(error_t error) {}



  event message_t *
  RadioReceive.receive[collection_id_t](message_t * msg, void * payload, uint8_t len) {
    return qInsert(msg);
  }

  task void uartSendTask() {
    uint8_t      len;
    am_id_t      id;
    am_addr_t    src;
    message_t  * msg;
    atomic {
      if (uartIn == uartOut && ! uartFull) {
        uartBusy = FALSE;
        return;
      }
    }

    msg = uartQueue[uartOut];
    //len = call RadioPacket.payloadLength(msg) + sizeof(orinoco_data_header_t) + sizeof(uint32_t);  // TODO for debugging only
    len = call RadioPacket.payloadLength(msg) + sizeof(orinoco_data_header_t) + 2*sizeof(uint32_t);  // TODO for debugging only
    id  = call CollectionPacket.getType(msg);
    src = call CollectionPacket.getOrigin(msg);
    call UartPacket.clear(msg);
    call UartAMPacket.setSource(msg, src);
    call UartAMPacket.setDestination(msg, TOS_NODE_ID);
    //call UartAMPacket.setDestination(msg, (numFail << 8) + numDrop);

    // NOTE must be in this order!
//    *((nx_uint32_t *)(call RadioPacket.getPayload(msg, len) + len - sizeof(uint32_t))) = call PacketDelayMilli.delay(msg);  // TODO for debugging only
//    *((nx_uint32_t *)(call RadioPacket.getPayload(msg, len) + len - 2*sizeof(uint32_t))) = call PacketDelayMilli.creationTime(msg);  // TODO for debugging only
    *((nx_uint32_t *)(call RadioPacket.getPayload(msg, len) + len - sizeof(uint32_t))) = call PacketDelayMilli.delay(msg);  // TODO for debugging only

    if (call UartSend.send[id](AM_BROADCAST_ADDR, uartQueue[uartOut], len) == SUCCESS) {
      successBlink();
    } else {
      failBlink();
      post uartSendTask();
    }
  }

  event void UartSend.sendDone[am_id_t id](message_t* msg, error_t error) {
    if (error != SUCCESS) {
      failBlink();
    } else {
      atomic {
	if (msg == uartQueue[uartOut]) {
          if (++uartOut >= UART_QUEUE_LEN) {
            uartOut = 0;
          }
          if (uartFull) {
            uartFull = FALSE;
          }
        }
      }
    }
    post uartSendTask();
  }

/*
  event message_t *UartReceive.receive[am_id_t id](message_t *msg,
						   void *payload,
						   uint8_t len) {
    message_t *ret = msg;
    bool reflectToken = FALSE;

    atomic
      if (!radioFull)
	{
	  reflectToken = TRUE;
	  ret = radioQueue[radioIn];
	  radioQueue[radioIn] = msg;
	  if (++radioIn >= RADIO_QUEUE_LEN)
	    radioIn = 0;
	  if (radioIn == radioOut)
	    radioFull = TRUE;

	  if (!radioBusy)
	    {
	      post radioSendTask();
	      radioBusy = TRUE;
	    }
	}
      else
	dropBlink();

    if (reflectToken) {
      //call UartTokenReceive.ReflectToken(Token);
    }
    
    return ret;
  }

  task void radioSendTask() {
    uint8_t len;
    am_id_t id;
    am_addr_t addr,source;
    message_t* msg;
    
    atomic
      if (radioIn == radioOut && !radioFull)
	{
	  radioBusy = FALSE;
	  return;
	}

    msg = radioQueue[radioOut];
    len = call UartPacket.payloadLength(msg);
    addr = call UartAMPacket.destination(msg);
    source = call UartAMPacket.source(msg);
    id = call UartAMPacket.type(msg);

    call RadioPacket.clear(msg);
    call RadioAMPacket.setSource(msg, source);
    
    if (call RadioSend.send[id](addr, msg, len) == SUCCESS)
      call Leds.led0Toggle();
    else
      {
	failBlink();
	post radioSendTask();
      }
  }

  event void RadioSend.sendDone[am_id_t id](message_t* msg, error_t error) {
    if (error != SUCCESS)
      failBlink();
    else
      atomic
	if (msg == radioQueue[radioOut])
	  {
	    if (++radioOut >= RADIO_QUEUE_LEN)
	      radioOut = 0;
	    if (radioFull)
	      radioFull = FALSE;
	  }
    
    post radioSendTask();
  }
*/
}  
