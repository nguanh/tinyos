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

