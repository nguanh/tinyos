configuration TestAppC {
}
implementation {
  components TestC;

  // generic stuff
  components MainC;
  TestC.Boot -> MainC.Boot;

  components EnergyBudgetizerC;
  TestC.EnergyBudget -> EnergyBudgetizerC;
  TestC.Slotter      -> EnergyBudgetizerC;

  components SunshineC;
  TestC.Caplibrate -> SunshineC;

  // radio
  components OrinocoP;
  TestC.RadioControl      -> OrinocoP;
  TestC.ForwardingControl -> OrinocoP;
  TestC.Send              -> OrinocoP.Send;
  TestC.RootControl       -> OrinocoP;
  TestC.Packet            -> OrinocoP;
  TestC.OrinocoConfig     -> OrinocoP;
  TestC.OrinocoStats      -> OrinocoP;

  // reporting jobs
  components EnergyReportingJobC;
  EnergyReportingJobC.Packet -> OrinocoP;
  TestC.EnergyReportingMsg   -> EnergyReportingJobC;

  components OrinocoStatsReportingJobC;
  OrinocoStatsReportingJobC.Packet -> OrinocoP;
  TestC.OrinocoStatsReportingMsg   -> OrinocoStatsReportingJobC;

  components OrinocoDebugReportingJobC;
  OrinocoDebugReportingJobC.Packet -> OrinocoP;
  TestC.OrinocoDebugReportingMsg   -> OrinocoDebugReportingJobC;

  components SunshineConfigReportingJobC;
  SunshineConfigReportingJobC.Packet -> OrinocoP;
  TestC.SunshineConfigReportingMsg   -> SunshineConfigReportingJobC;
}
