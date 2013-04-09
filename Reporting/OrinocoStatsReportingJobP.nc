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

#include "OrinocoStatsReportingMsg.h"

module OrinocoStatsReportingJobP {
  provides {
    interface Receive;
  }
  uses {
    interface Packet;
    interface EAJob;
    interface OrinocoTrafficStatistics  as TrafficStats;
  }
}
implementation {
  message_t     msg_;
  message_t   * pmsg_ = &msg_;
  data_seqno_t  seqno_ = 0;

  // run job
  event void EAJob.run() {
    OrinocoStatsReportingMsg * p = (OrinocoStatsReportingMsg *)
      call Packet.getPayload(pmsg_, sizeof(OrinocoStatsReportingMsg));

    // prepare data packet
    call Packet.clear(pmsg_);
    p->seqno = seqno_++;

    p->ts.avgCreationIntvl  = call TrafficStats.getPktCreationIntvl();
    p->ts.avgReceptionIntvl = call TrafficStats.getPktReceptionIntvl();
    p->ts.avgForwardDelay   = call TrafficStats.getForwardDelay();
    p->ts.avgTxBurstLen     = call TrafficStats.getTxBurst();
    p->ts.avgRxBurstLen     = call TrafficStats.getRxBurst();

    // signal data availability
    pmsg_ = signal Receive.receive(pmsg_, p, sizeof(OrinocoStatsReportingMsg));

    // and we're done
    call EAJob.done();
  }
}

