configuration EnergyReportingJobC {
  provides {
    interface Receive;
  }
  uses {
    interface Packet;
  }
}
implementation {
  components EnergyReportingJobP;

  // job implementation
  components new EAJobC() as Job;
  EnergyReportingJobP -> Job.Job;

  // job configuration
  components new EAPeriodicJobConfigC();
  Job.JobConfig -> EAPeriodicJobConfigC;

  components EnergyReportingJobConfigC;
  EAPeriodicJobConfigC.SubJobConfig -> EnergyReportingJobConfigC;

  // job's internal wirings
  components SunshineC;

  /* direct sensor readings access */
  EnergyReportingJobP.SolarCurrent  -> SunshineC.SolarCurrent;
  EnergyReportingJobP.CapVoltage    -> SunshineC.CapVoltage;
  EnergyReportingJobP.TempSensor    -> SunshineC.TempSensor;
  EnergyReportingJobP.LightSensor   -> SunshineC.LightSensor;
#ifdef USE_REFCAP
  EnergyReportingJobP.RefCapVoltage -> SunshineC.RefCapVoltage;
#endif

  /* sensor update notifications */
  EnergyReportingJobP.SolarCurrentUpdate -> SunshineC.SolarCurrentUpdate;
  EnergyReportingJobP.TempSensorUpdate   -> SunshineC.TempUpdate;
  EnergyReportingJobP.LightSensorUpdate  -> SunshineC.LightUpdate;

  /* energy consumption */
  components EnergyTrackerC;
  EnergyReportingJobP.EnergyConsumption  -> EnergyTrackerC;

  // external wirings
  Receive = EnergyReportingJobP;
  Packet  = EnergyReportingJobP;
}

