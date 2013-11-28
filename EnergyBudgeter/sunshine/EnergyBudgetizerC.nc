configuration EnergyBudgetizerC {
  provides {
    interface EnergyBudget;
    interface Slotter;
  }
}
implementation {
  components EnergyBudgetizerP;
  EnergyBudget = EnergyBudgetizerP;
  Slotter      = EnergyBudgetizerP;

  components SunshineC;
  EnergyBudgetizerP.CapVoltage  -> SunshineC.CapVoltage;
  EnergyBudgetizerP.Harvest     -> SunshineC.SolarCurrentUpdate;

  components EnergyModelSunshineC;
  EnergyBudgetizerP.EnergyModel -> EnergyModelSunshineC;

  components SunshineConfigC;
  EnergyModelSunshineC.CapConfig    -> SunshineConfigC;
  EnergyModelSunshineC.SupplyConfig -> SunshineConfigC;
}
