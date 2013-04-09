configuration OrinocoStatsReportingJobC {
  provides {
    interface Receive;
  }
  uses {
    interface Packet;
  }
}
implementation {
  components OrinocoStatsReportingJobP;

  // job implementation
  components new EAJobC() as Job;
  OrinocoStatsReportingJobP -> Job.Job;

  // job configuration
  components new EAPeriodicJobConfigC();
  Job.JobConfig -> EAPeriodicJobConfigC;

  components OrinocoStatsReportingJobConfigC;
  EAPeriodicJobConfigC.SubJobConfig -> OrinocoStatsReportingJobConfigC;

  // job's internal wirings
  components OrinocoTrafficStatisticsC;
  OrinocoStatsReportingJobP.TrafficStats -> OrinocoTrafficStatisticsC;

  // external wirings
  Receive = OrinocoStatsReportingJobP;
  Packet  = OrinocoStatsReportingJobP;
}

