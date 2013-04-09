configuration OrinocoDebugReportingJobC {
  provides {
    interface Receive;
  }
  uses {
    interface Packet;
  }
}
implementation {
  components OrinocoDebugReportingJobP;

  // job implementation
  components new EAJobC() as Job;
  OrinocoDebugReportingJobP -> Job.Job;

  // job configuration
  components new EAPeriodicJobConfigC();
  Job.JobConfig -> EAPeriodicJobConfigC;

  components OrinocoDebugReportingJobConfigC;
  EAPeriodicJobConfigC.SubJobConfig -> OrinocoDebugReportingJobConfigC;

  // job's internal wirings
  components OrinocoRadioP, OrinocoQueueP;
  OrinocoDebugReportingJobP.QueueStats   -> OrinocoQueueP;
  OrinocoDebugReportingJobP.PacketStats  -> OrinocoRadioP;

  // external wirings
  Receive = OrinocoDebugReportingJobP;
  Packet  = OrinocoDebugReportingJobP;
}

