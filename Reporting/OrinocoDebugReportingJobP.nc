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

