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

#include "OrinocoDebugReportingMsg.h"

module OrinocoDebugReportingJobP {
  provides {
    interface Receive;
  }
  uses {
    interface Packet;
    interface EAJob;
    interface Get<const orinoco_queue_statistics_t *>  as QueueStats;
    interface Get<const orinoco_packet_statistics_t *> as PacketStats;

  }
}
implementation {
  message_t     msg_;
  message_t   * pmsg_ = &msg_;
  data_seqno_t  seqno_ = 0;

  // run job
  event void EAJob.run() {
    const orinoco_queue_statistics_t   * qs;
    const orinoco_packet_statistics_t  * ps;
    OrinocoDebugReportingMsg * p = (OrinocoDebugReportingMsg *)
      call Packet.getPayload(pmsg_, sizeof(OrinocoDebugReportingMsg));

    // prepare data packet
    call Packet.clear(pmsg_);
    p->seqno = seqno_++;

    qs = call QueueStats.get();
    p->qs.numPacketsDropped = qs->numPacketsDropped;
    p->qs.numDuplicates     = qs->numDuplicates;

    ps = call PacketStats.get();
    p->ps.numTxBeacons      = ps->numTxBeacons;
    p->ps.numTxAckBeacons   = ps->numTxAckBeacons;
    p->ps.numTxBeaconsFail  = ps->numTxBeaconsFail;
    p->ps.numRxBeacons      = ps->numRxBeacons;
    p->ps.numIgnoredBeacons = ps->numIgnoredBeacons;
    p->ps.numTxPackets      = ps->numTxPackets;
    p->ps.numTxPacketsFail  = ps->numTxPacketsFail;
    p->ps.numRxPackets      = ps->numRxPackets;
    p->ps.numTxTimeouts     = ps->numTxTimeouts;
    p->ps.numMetricResets   = ps->numMetricResets;

    // signal data availability
    pmsg_ = signal Receive.receive(pmsg_, p, sizeof(OrinocoDebugReportingMsg));

    // and we're done
    call EAJob.done();
  }
}

