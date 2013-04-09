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

module TestC {
  uses {
    interface Boot;
    interface Timer<TMilli>;
    interface SplitControl as RadioControl;
    interface StdControl as ForwardingControl;
    interface RootControl;
    interface Packet;
    interface QueueSend as Send;
  }
}
implementation {
  #define MSG_BURST_LEN  3
  message_t  myMsg;
  uint16_t  cnt = 0;

  event void Boot.booted() {
    // we're no root, just make sure
    call RootControl.unsetRoot();  // make this node a root

    // switch on radio and enable routing
    call RadioControl.start();
    call ForwardingControl.start();

    // start our packet timer
    call Timer.startPeriodic(30720);
  }

  event void Timer.fired() {
    uint8_t  msgCnt;

    for (msgCnt = 0; msgCnt < MSG_BURST_LEN; msgCnt++) {
      nx_uint16_t * d;

      // prepare message
      call Packet.clear(&myMsg);
      
      d = call Packet.getPayload(&myMsg, 2);
      *d = cnt++;

      // and send it
      call Send.send(&myMsg, 2);
    }
  }

  event void RadioControl.startDone(error_t error) {
    // nothing
  }

  event void RadioControl.stopDone(error_t error) {
    // nothing
  }
}
