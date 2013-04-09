configuration SunshineConfigReportingJobC {
  provides {
    interface Receive;
  }
  uses {
    interface Packet;
  }
}
implementation {
  components SunshineConfigReportingJobP;

  // job implementation
  components new EAJobC() as Job;
  SunshineConfigReportingJobP -> Job.Job;

  // job configuration
  components new EAPeriodicJobConfigC();
  Job.JobConfig -> EAPeriodicJobConfigC;

  components SunshineConfigReportingJobConfigC;
  EAPeriodicJobConfigC.SubJobConfig -> SunshineConfigReportingJobConfigC;

  // job's internal wirings
  components SunshineConfigC;

  /* direct sensor readings access */
  SunshineConfigReportingJobP.CapConfig   -> SunshineConfigC;
  SunshineConfigReportingJobP.SolarConfig -> SunshineConfigC;

  // external wirings
  Receive = SunshineConfigReportingJobP;
  Packet  = SunshineConfigReportingJobP;
}

