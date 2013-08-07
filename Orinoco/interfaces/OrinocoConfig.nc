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
 * Orinoco Configuration
 *
 * @author Christian Renner
 * @date December 13 2011
 */

interface OrinocoConfig {
  // set mean wake-up interval (in ms)
  command void setWakeUpInterval(uint16_t Ts);
  
  // return the current mean wake-up interval (in ms)
  command uint16_t getWakeUpInterval();

  // set minimum/maximum relative deviation of wake-up interval (in percent)
  // the actual wake-up interval will be (randomly) drawn from
  // [Ts - alpha / 100; Ts + alpha / 100]
  // the implementation must enforce 0 <= alpha < 100
  command void setWakeUpDeviation(uint8_t alpha);

  // return the current wake-up deviation
  command uint8_t getWakeUpDeviation();

  // return the absolute wake-up deviation instead of the relative value, i.e.,
  // @see setWakeUpDeviation
  command uint16_t getAbsWakeUpDeviation();
   
  // set minimum dwelling time (in ms)
  command void setMinDwellTime(uint8_t Td);
  
  // return current minimum dwelling time
  command uint8_t getMinDwellTime();

  // set maximum dwelling time (in ms)
  command void setMaxDwellTime(uint8_t Td);
  
  // return current maximum dwelling time
  command uint8_t getMaxDwellTime();

  // set number of desired waiting intervals for forwarding
  command void setNumWaitingIntervals(uint8_t n);

  // return the current number of desired waiting intervals for forwarding
  command uint8_t getNumWaitingIntervals();

  // set queue level minimum before forwarding
  command void setMinQueueSize(uint8_t m);
  
  // get queue level minimum before forwarding
  command uint8_t getMinQueueSize();
}

