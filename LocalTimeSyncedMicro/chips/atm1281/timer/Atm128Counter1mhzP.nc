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

#include <Atm128Timer.h>


module Atm128Counter1mhzP {
  provides {
    interface Init;
    interface Counter<TMicro, uint32_t> as Counter;
  }
  uses {
    interface HplAtm128Timer<uint16_t>   as Timer;
    interface HplAtm128TimerCtrl16       as TimerCtrl;
    interface HplAtm128Capture<uint16_t> as Capture;
  }
}
implementation {
  norace uint16_t wakeupDelay_ = 0;  // wakeup-delay between capture and IRQ


  /*** INIT **************************************************************/
  command error_t Init.init() {
    call Timer.setScale(ATM128_CLK16_DIVIDE_64);  // 7.3728 or 8Mhz clock -> 1/8mhz cnt.
    call Capture.setEdge(TRUE);                   // capture on rising edges

    return SUCCESS;
  }


  /*** Counter ***********************************************************/
  async command uint32_t Counter.get() {
    uint16_t  delta;
    atomic { 
      delta = call Timer.get() - call Capture.get();
    }
    // convert ticks to microseconds
    // if clock = 8 Mhz
    //   8/64 Mhz decimal -> Mhz binary
    //   1e6 / 8 * v = 2^20  =>  v = 8.3886 = 1000.01100011 bin
    return ((uint32_t)delta << 3) + ((delta >> 2) + (delta >> 3));
    // if clock = 7.3728 Mhz
    //   7.3728/64 Mhz decimal -> Mhz binary
    //   7.3728e6 / 64 * v = 2^20  =>  v = 9.1022 = 1001.00011010 bin
//    return (((uint32_t)delta << 3) + (delta)) + ((delta >> 4) + (delta >> 5));
  }

  async command bool Counter.isOverflowPending() {
    return call Timer.test();
  }

  async command void Counter.clearOverflow() {
    call Timer.reset();
  }

  async event void Timer.overflow() {
    signal Counter.overflow();
  }

  /*** Capture ***********************************************************/
  async event void Capture.captured(uint16_t time) {
    // nothing
  }
}
