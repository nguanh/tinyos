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
 * implementation of Orinoco Configuration
 *
 * @author Christian Renner
 * @date December 14 2011
 */

module OrinocoConfigP {
  provides {
    interface Init;
    interface OrinocoConfig;
  }
}
implementation {
  uint16_t  Ts_;
  uint16_t  Tsdev_;
  uint8_t   alpha_, Tdmin_, Tdmax_;
  uint8_t   waitIntvl_;
  uint8_t   qmLvl_;

  void updateAbsDeviation() {
    Tsdev_ = (uint16_t)(((uint32_t)Ts_ * alpha_) / 100);
  }

  command error_t Init.init() {
    Ts_    = ORINOCO_DFLT_WAKEUP_INTERVAL;
    alpha_ = ORINOCO_DFLT_WAKEUP_DEVIATION;  
    Tdmin_ = ORINOCO_DFLT_CONGESTION_WIN_MIN;
    Tdmax_ = ORINOCO_DFLT_CONGESTION_WIN_MAX;
    waitIntvl_ = ORINOCO_DFLT_NUM_WAITING_INTVL;
    qmLvl_     = ORINOCO_DFLT_MIN_QUEUE_LEVEL;
    updateAbsDeviation();
    return SUCCESS;
  }

  command void OrinocoConfig.setWakeUpInterval(uint16_t Ts) {
    Ts_ = Ts;
    updateAbsDeviation();
  }
  
  command uint16_t OrinocoConfig.getWakeUpInterval() {
    return Ts_;
  }

  command void OrinocoConfig.setWakeUpDeviation(uint8_t alpha) {
    alpha_ = alpha;
    updateAbsDeviation();
  }

  command uint8_t OrinocoConfig.getWakeUpDeviation() {
    return alpha_;
  }

  command uint16_t OrinocoConfig.getAbsWakeUpDeviation() {
    return Tsdev_;
  }
   
  command void OrinocoConfig.setMinDwellTime(uint8_t Td) {
    Tdmin_ = Td;
  }
  
  command uint8_t OrinocoConfig.getMinDwellTime() {
    return Tdmin_;
  }

  command void OrinocoConfig.setMaxDwellTime(uint8_t Td) {
    Tdmax_ = Td;
  }
  
  command uint8_t OrinocoConfig.getMaxDwellTime() {
    return Tdmax_;
  }

  command void OrinocoConfig.setNumWaitingIntervals(uint8_t n) {
    waitIntvl_ = n;
  }

  command uint8_t OrinocoConfig.getNumWaitingIntervals() {
    return waitIntvl_;
  }

  command void OrinocoConfig.setMinQueueSize(uint8_t m) {
    // can neither be zero nor should it be too large (to avoid queue overflows)
    // half the overall queue size should be fine
    if (m > 0 && m <= ORINOCO_QUEUE_SIZE / 2) {
      qmLvl_ = m;
    }
  }
  
  command uint8_t OrinocoConfig.getMinQueueSize() {
    return qmLvl_;
  }
}

