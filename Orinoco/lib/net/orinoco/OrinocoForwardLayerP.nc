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

module OrinocoForwardLayerP {
  provides {
    interface AMSend;
  }
  uses {
    interface AMSend as SubAMSend;
    interface OrinocoBackoffConfig;
    interface Random;
    interface Timer<TMilli> as Timer;
  }
}
implementation {
  enum {
    STATE_READY,
    STATE_BACKOFF,
    STATE_SEND
  };
  uint8_t state_ = STATE_READY;

  // FIXME a crappy lot of overhead
  message_t * txBuf_   = NULL;
  error_t     txError_ = FAIL;
  am_addr_t   txDst_;
  uint8_t     txLen_;

  inline uint16_t getBackoff() {
    return call Random.rand16() % (1 + call OrinocoBackoffConfig.getMaximumBackoff());
  }


  task void doneTask() {
    state_ = STATE_READY;
    signal AMSend.sendDone(txBuf_, txError_);
  }


  /*** AMSend.send *******************************************************/
  command error_t AMSend.send(am_addr_t dst, message_t * msg, uint8_t len) {
    if (state_ != STATE_READY) {
      return EBUSY;
    }
    state_   = STATE_BACKOFF;
    txDst_   = dst;
    txBuf_   = msg;
    txLen_   = len;
    txError_ = SUCCESS;
    call Timer.startOneShot(getBackoff());

    return SUCCESS;
  }

  command error_t AMSend.cancel(message_t * msg) {
    // we don't have that packet
    if (state_ == STATE_READY || msg != txBuf_) {
      return FAIL;

    // back-offing only, packet not in lower layer, cancel
    } else if (state_ == STATE_BACKOFF) {
      call Timer.stop();
      txError_ = ECANCEL;
      post doneTask();
      return SUCCESS;

    // packet is in lower layer, so delegate
    } else if (state_ == STATE_SEND) {
      return call SubAMSend.cancel(msg);

    // this must not happen
    } else {
      //RADIO_ASSERT(FALSE);
    }

    return FAIL;
  }

  command void * AMSend.getPayload(message_t * msg, uint8_t len) {
    return call SubAMSend.getPayload(msg, len);
  }

  command uint8_t AMSend.maxPayloadLength() {
    return call SubAMSend.maxPayloadLength();
  }

  
  /*** SubAMSend *********************************************************/
  event void SubAMSend.sendDone(message_t * msg, error_t error) {
    //RADIO_ASSERT(msg == txBuf_);
    // we cannot afford any delay here
    state_ = STATE_READY;
    signal AMSend.sendDone(txBuf_, error);
  }
 
 
  /*** Timer *************************************************************/
  event void Timer.fired() {
    error_t error;

    //RADIO_ASSERT(state_ == STATE_BACKOFF);

    error = call SubAMSend.send(txDst_, txBuf_, txLen_);
    if (error == SUCCESS) {
      state_ = STATE_SEND;
    } else {
      txError_ = error;
      post doneTask();
    }
  }
}
