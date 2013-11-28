#include "EnergyBudgetizer.h"

configuration EnergyBudgetizerP {
  provides {
    interface EnergyBudget;
    interface Slotter;
  }
  uses {
    interface EnergyModel;
    interface SensorValueUpdate<fp_t> as Harvest;
    interface Get<fp_t> as CapVoltage;
  }
}
implementation {
  components new AveragingSensorC();
  Harvest = AveragingSensorC.SensorValueUpdate;

  components new ZeroSlotterC(FORECAST_NUM_SLOTS, FORECAST_BASE_INTVL, FORECAST_CYCLE_LEN, FORECAST_FILTER) as SlotterC;
  //components new StaticSlotterC(FORECAST_NUM_SLOTS, FORECAST_BASE_INTVL, FORECAST_CYCLE_LEN, FORECAST_FILTER) as SlotterC;
  //components new AdaptiveSlotterC(FORECAST_NUM_SLOTS, FORECAST_BASE_INTVL, FORECAST_CYCLE_LEN, FORECAST_FILTER) as SlotterC;
  Slotter = SlotterC;
  SlotterC.AveragingSensor -> AveragingSensorC;
  
  components EnergyPredictorC;
  EnergyPredictorC.Slotter         -> SlotterC;
  EnergyPredictorC                  = EnergyBudget;
  EnergyPredictorC.CapVoltage       = CapVoltage;
  EnergyPredictorC.EnergyModel      = EnergyModel;

  // set up policy
  #ifdef ENERGY_POLICY
  #  warning "Using custom energy policy"
  components ENERGY_POLICY as EnergyPolicy;
  #else
  #  warning "Using default energy policy EnergyPolicyDepletionSafeC"
  components EnergyPolicyDepletionSafeC as EnergyPolicy;
  #endif
  EnergyPredictorC.EnergyPolicy -> EnergyPolicy;
}
