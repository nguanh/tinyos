module EnergyPredictorC {
  provides {
    interface EnergyBudget;
  }
  uses {
    interface EnergyModel;
    interface Slotter;
    interface EnergyPolicy<fp_t>;
    interface Get<fp_t> as CapVoltage;
  }
}
implementation {
#define ABS(x) ((x)>0?(x):-(x))

  double    maxIn;   // upper bound on consumption
  double    minIn;   // lower bound

  uint8_t   startSlot;
  double    startVc;
  uint8_t   ds;

  double    In;

  double    Vc;

  bool calculationRunning = FALSE;

  void initBinaryStep() {
    In = (maxIn + minIn) / 2.0;
    Vc = startVc;
    ds = 0;
  }

  task void nextSlot() {
    uint8_t  slot = (startSlot + ds) % call Slotter.getNumSlots();
    //double   Ih   = (FP_FLOAT(call Slotter.getSlotValue(slot))/1000.0);
    double  Ih = (FP_FLOAT(call Slotter.getSlotForecast(slot))/1000.0);
    calculationRunning = TRUE;
    call EnergyModel.calculate(call Slotter.getSlotLength(slot)*(call Slotter.getBaseIntvl()), // len
                               Vc, Ih, In);
  }

  event void EnergyModel.calculationDone(double voltage) {
    policy_verdict_t  verdict;

    if (! calculationRunning) {
      return;
    }

    calculationRunning = FALSE;
    Vc = voltage;

    // feed intermediate result to policy
    verdict = call EnergyPolicy.feed(FP_UNFLOAT(voltage));

    ds++;
    if (ds < call Slotter.getNumSlots() && verdict == POLICY_VERDICT_UNDECIDED) {
      post nextSlot();
    } else {
      // update search boundaries
      if (call EnergyPolicy.verdict() == POLICY_VERDICT_ACCEPT) {
        minIn = In;
      } else {
        maxIn = In;
      }

      dbg("Energy", "------------------------------\n");
      if (ABS(maxIn-minIn) > 10/(1000.0*1000.0)) {  // TODO config
        initBinaryStep();
        post nextSlot();
      }
      else {
        fp_t result = FP_UNFLOAT(minIn*1000);  // make mA from Ampere
        signal EnergyBudget.budgetUpdated(result);
      }
    }
  }

  event void Slotter.slotEnded(uint8_t slot) {
    fp_t  capVolt = call CapVoltage.get();
    if (call EnergyPolicy.checkInitialState(capVolt) == POLICY_VERDICT_REJECT) {
      signal EnergyBudget.budgetUpdated(0);  // TODO config
      return;
    }

    startVc = FP_FLOAT(capVolt);

    maxIn = 20/1000.0;  // upper bound on consumption  // TODO config
    minIn = 0;          // lower bound                 // TODO config

    startSlot = call Slotter.getCurSlot();

    initBinaryStep();
    post nextSlot();
  }

  event void Slotter.cycleEnded() {
  }
}
