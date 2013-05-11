/*
 * Copyright (c) 2013 The University of New South Wales, Sydney, Australia.
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
 * COPYRIGHT HOLDER OR ITS CONTRIBUTORS BE LIABLE
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
 * @author Andreas Reinhardt
 * @author Christian Renner
 * @date 18 April 2013
 */

#include "Reporting.h"
#include "Orinoco.h"
#include "Sender.h"

module SenderC {
  uses {
    interface Boot;
    interface Timer<TMilli> as PollTimer;
    interface Timer<TMilli> as SendTimer;
    interface SplitControl as RadioControl;
    interface StdControl as ForwardingControl;
    interface RootControl;
    interface Packet;
    interface Leds;
    interface QueueSend as Send[collection_id_t];
    interface Read<uint16_t>[uint8_t id];
    interface ReadStream<uint16_t> as MotionDetector;
    
    // Orinoco Stats
    interface Receive as OrinocoStatsReportingMsg;
    interface Receive as OrinocoDebugReportingMsg;

  }
}
implementation {
  message_t	myMsg;
  uint16_t	cnt = 0;
  uint8_t	sensor_no;
  Entry 	entry;
  
  /* ************************* INIT ************************* */
  
  // Initialization  
  event void Boot.booted() {
    call RootControl.unsetRoot();	// we're no root, just make sure
    call RadioControl.start();		// switch on radio
    call ForwardingControl.start();	// enable routing

    entry.counter = 0;				// Start sampling with sequence number 0
    entry.flags = 0x23;				// Hash symbol
        
    call PollTimer.startPeriodic(SENSOR_POLL_INTV);	// start our polling timer
    call SendTimer.startPeriodic(SENSOR_SEND_INTV);	// start our sending timer
  }

  // Stop the application when something really messy happened
  void signalErrorAndHalt() {
    call PollTimer.stop(); call SendTimer.stop();
    while (1) {	// Show that something has gone really wrong
      call Leds.led0Toggle(); call Leds.led1Toggle(); call Leds.led2Toggle();
      usleep(60000l); // Avoid use of timers here.
    }
  }

  /* ************************* SENSOR POLLING ************************* */
  
  task void sample() {
    if (sensor_no < uniqueCount(UNIQUEID)) {
      if (call Read.read[sensor_no]() != SUCCESS) {
        entry.values[sensor_no] = INVALID_SAMPLE_VALUE;
        sensor_no++;
        post sample();   // Samples the next sensor
      } else {
        /* Read is asynchronous - let's wait for readDone to be called */
      }
    } else {
      call Leds.led1Off();
      /* Reading done - as TX is asynchronous, we just sit and wait now */
    }
  }

  // Store collected sensor data  
  event void Read.readDone[uint8_t id](error_t error, uint16_t val) {
    entry.values[sensor_no] = (error == SUCCESS) ? val : INVALID_SAMPLE_VALUE;
    sensor_no++;
    post sample();   // Sample the next sensor
  }

  event void PollTimer.fired() {
    sensor_no = 0;
    entry.counter++;
    call Leds.led1On();
    post sample();
  }
  
  /* ************************* TIMERS ************************* */
  
  event void SendTimer.fired() {
    nx_uint16_t* payload;

    // Prepare packet payload
    call Packet.clear(&myMsg);
    payload = call Packet.getPayload(&myMsg, ENTRY_SIZE);
    
    // We must copy the data because both tasks run in an asynchroneous fashion
    atomic {
      memcpy(payload, &entry, ENTRY_SIZE);
    }
    
    // and send it
    call Send.send[22](&myMsg, ENTRY_SIZE);
  }

  /* ************************* DEFAULT HANDLERS ************************* */
  
  event void RadioControl.startDone(error_t error) {
    /* Orinoco should take care of all submodules booting up */
    if (error != SUCCESS) signalErrorAndHalt();
  }

  event void RadioControl.stopDone(error_t error) {
    /* should never be called! */
    signalErrorAndHalt();
  }
  
  default command error_t Read.read[uint8_t id]() { 
    /* Access to unconnected sensor. Let's raise this for now! */
    signalErrorAndHalt();
    return FAIL; 
  }
  
  event void MotionDetector.bufferDone(error_t result, uint16_t* buf, uint16_t count) {
    // Placeholder if we want to collect data streams later
  }
  
  event void MotionDetector.readDone(error_t result, uint32_t usActualPeriod) {
    // Placeholder if we want to collect data streams later
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
