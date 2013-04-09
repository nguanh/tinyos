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
 * Orinoco Traffic Statistics implementation
 *
 * @author Christian Renner
 * @date January 20th 2012
 */

#include "Orinoco.h"


module OrinocoTrafficStatisticsP {
  provides {
    interface OrinocoTrafficStatistics as Stats;
    interface OrinocoTrafficUpdates    as Updates;
    interface EAPeriodicJobConfig      as PktRateJobConfig;
  }
  uses {
    interface LocalTime<TMilli>;
    interface EAJob as PktRateJob;
  }
}
implementation {
  // TODO howto initial this beast?
  // FIXME correct?
  orinoco_traffic_statistics_t ts_ = { 0, 0, ORINOCO_DFLT_WAKEUP_INTERVAL/2, 256, 256};
  //uint32_t  avgCreationRate;      ///> mean number of packets per inspected period
  //uint32_t  avgReceptionRate;     ///> mean number of packets per inspected period
  //uint32_t  avgForwardDelay;      ///> mean delay for packet delivery (waiting time before first beacon) (ms)
  //uint8_t   avgTxBurstLen;        ///> average length of subsequently sent packets
  //uint8_t   avgRxBurstLen;        ///> average length of subsequently received packets
  struct {
    //uint32_t  lastCreationTime;   ///> time at which last packet was created
    //uint32_t  lastReceptionTime;  ///> time at which last packet was received
    uint16_t  numPktCreated;
    uint16_t  numPktReceived;
    uint32_t  curForwardTime;     ///> time at which forwarding was started
    uint8_t   curTxBurstLen;      ///> current number of subsequently sent packets
    uint8_t   curRxBurstLen;      ///> current number of subsequently received packets
  } tv_ = {0};

  enum {
    EWMA_FILTER = 243  /* history-coeff in 1/256 */
  };

  /*** TrafficStatistics *************************************************/
  command uint16_t Stats.getPktCreationIntvl() {
    // protect result from 16-bit overflows (and return maximum, if an overflow would occur)
    if (ts_.avgCreationRate > (ORINOCO_PKTRATE_UPDATE_PERIOD >> 16)) {
      return (uint16_t)(ORINOCO_PKTRATE_UPDATE_PERIOD / ts_.avgCreationRate);
    } else {
      return 0xFFFF;  /* default return value */
    }
  }
  
  command void Updates.updatePktCreationIntvl() {
    tv_.numPktCreated++;
  }

  command uint16_t Stats.getPktReceptionIntvl() {
    // protect result from 16-bit overflows (and return maximum, if an overflow would occur)
    if (ts_.avgReceptionRate > (ORINOCO_PKTRATE_UPDATE_PERIOD >> 16)) {
      return (uint16_t)(ORINOCO_PKTRATE_UPDATE_PERIOD / ts_.avgReceptionRate);
    } else {
      return 0xFFFF;  /* default return value */
    }
  }

  command void Updates.updatePktReceptionIntvl() {
    tv_.numPktReceived++;
  }

  command uint8_t Stats.getTxBurst() {
    return ts_.avgTxBurstLen >> 8;
  }

  // @param flag to signal last packet in a burst
  command void Updates.updateTxBurst(bool end) {
    if (end) {
      ts_.avgTxBurstLen = ewmaFilter16(ts_.avgTxBurstLen, (uint16_t)tv_.curTxBurstLen * 256, EWMA_FILTER);
      tv_.curTxBurstLen = 0;
    } else {
      tv_.curTxBurstLen++;
    }
  }

  command uint8_t Stats.getRxBurst() {
    return ts_.avgRxBurstLen >> 8;
  }

  // @param flag to signal last packet in a burst
  command void Updates.updateRxBurst(bool end) {
    if (end) {
      // only count burst, if there was data at all
      if (tv_.curRxBurstLen > 0) {
        ts_.avgRxBurstLen = ewmaFilter16(ts_.avgRxBurstLen, (uint16_t)tv_.curRxBurstLen * 256, EWMA_FILTER);
        tv_.curRxBurstLen = 0;
      }
    } else {
      tv_.curRxBurstLen++;
    }
  }

  command uint32_t Stats.getForwardDelay() {
    return ts_.avgForwardDelay;
  }

  command void Updates.updateForwardDelay(bool reset) {
    uint32_t  now = call LocalTime.get();
    if (tv_.curTxBurstLen == 1 /*done*/) {
      ts_.avgForwardDelay = ewmaFilter32(ts_.avgForwardDelay, now - tv_.curForwardTime, EWMA_FILTER);
    }
    if (reset) {
      tv_.curForwardTime = now;
    }
  }

  /* value updating via job concept */
  /* we are updating these values for the following reasons:
   * - in case of no more incoming packets, the reception interval would be stuck otherwise
   * - in high traffic conditions, less effort is put into updating the values
   * - better (and more predictable) smoothing is achieved
   */
  async command uint32_t PktRateJobConfig.getPeriod() {
    return ORINOCO_PKTRATE_UPDATE_PERIOD;
  }

  event void PktRateJob.run() {
    // multiply by 1024
    // - to allow values other than integers (in fact, we get a resolution of 1/1024 for smoothing),
    // - to enable direct derivation of the interval (1/rate) in face of us resolution of (ORINOCO_PKTRATE_UPDATE_PERIOD)
    ts_.avgCreationRate = ewmaFilter32(ts_.avgCreationRate, (uint32_t)tv_.numPktCreated * 1024, EWMA_FILTER);
    tv_.numPktCreated = 0;
    
    ts_.avgReceptionRate = ewmaFilter32(ts_.avgReceptionRate, (uint32_t)tv_.numPktReceived * 1024, EWMA_FILTER);
    tv_.numPktReceived = 0;
    
    // we're done
    call PktRateJob.done();
  }
}

/* eof */
