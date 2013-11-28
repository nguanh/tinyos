module EnergyPredictorNoTaskC {
  provides interface EnergyBudget;
  uses interface Slotter;
  uses interface Read<fp_t> as Cap;
  uses interface RuntimeAnalyzer;
}
implementation {
#define ONE_DAY    (24*60*60UL) /* in secs */
#define CONVERTER_ETA 1.0
#define CAP 50
#define MINGOAL mingoal
#define VCMAX   2.7  /* maximum supercap terminal voltage */
#define VCMIN   0.5  /* minimum regulator operating voltage */
#define VCSTART 1.6  /* switch-on voltage after a break-down (Vc < VCMIN) */
#define Vn 2.7
#define ERR(x,y) ((x)>(y)?(x)-(y):(y)-(x))
#define ABS(x) ((x)>0?(x):-(x))

#define FP_FLOAT(x) ((x)/256.0)
#define FP_UNFLOAT(x) ((fp_t)((x)*256))

#define true TRUE
#define false FALSE

#define mingoal 0.7

  double simulateNewton(int t0, int t1, double Vc, double Ih, double Pn) {
    double a = Ih/CAP;
    double b = Pn/(CONVERTER_ETA*CAP);
    double v0 = Vc;
    double y = v0;
    double len = t1-t0;
    call RuntimeAnalyzer.startTask(2);

    dbg("Energy","%i %f %f %f",t1,Vc,Ih,Pn);

    if(Ih == 0) {
      y = sqrt(v0*v0-2*b*len); 
    } 
    else {
      if(ERR(Ih, Pn/Vc) <= 0.00001) {
        y = v0;
      }
      else {
        double lasty = 0;
        double fy, fyy;
        double c = -((v0/a)+(b/(a*a))*log(ABS(a*v0-b)));
        int i = 0;
        while(ERR(lasty,y) >= 0.0001 && y > 0.01 && i++ < 100) {
          call RuntimeAnalyzer.startTask(3);
          lasty = y;
          fy = (y) + ( (b/(a)) * log(ABS(a*y-b))  ) - len*a + c*a;
          fyy = (1) + ( b / ((a*y-b)));
          y = y - (fy/fyy); 
          call RuntimeAnalyzer.stopTask(3);
        }
      }
    }

    if(y > VCMAX) { 
      y = VCMAX;
    }

    if(!(y > 0.01)) { 
      y = 0.01;
    }

    dbg("Energy","%f\n",y);

    call RuntimeAnalyzer.stopTask(2);
    return y;
  }

  double findBestIn(const unsigned startSlot, const unsigned numSlots, const double startVc) {
    double maxIn = 25/1000.0;  // upper bound on consumption
    double minIn = 0;          // lower bound

    while (ABS(maxIn-minIn) > 10/(1000.0*1000.0)) {
      bool ok   = true;  // success indicator for each binary search step
      bool full = false;
      double In = (maxIn+minIn)/2.0;

      double Vc = startVc;
      unsigned ds;
      dbg("Energy", "Try In %f\n",In);

      call RuntimeAnalyzer.startTask(1);
      for (ds = 0; ds < numSlots; ds++) {
        unsigned slot = (startSlot + ds) % numSlots;
        Vc = simulateNewton(0, call Slotter.getLength(slot)*(call Slotter.getBaseIntvl()), Vc, 
                            (FP_FLOAT(call Slotter.getValue(slot))/1000.0), In*Vn);

        // MIN-GOAL policy is always enabled
        if (Vc < MINGOAL) {
          ok = false;
          break;
        }
#ifdef POLICY_FULLCHARGE
        if (Vc >= VCMAX) {
          full = true;
        }
#endif /* POLICY_FULLCHARGE */
      }

#ifdef POLICY_FULLCHARGE
      if (! full) { ok = false; }
#endif /* POLICY_FULLCHARGE */

#ifdef POLICY_EQUALIZE
      if (Vc < startVc) { ok = false; }
#endif /* POLICY_EQUALIZE */

      // update search boundaries
      if (ok) {
        minIn = In;
      } else {
        maxIn = In;
      }

      dbg("Energy", "------------------------------\n");
      call RuntimeAnalyzer.stopTask(1);
    }

    return minIn;
  }

  bool capReadingActive = false;

  event void Cap.readDone(error_t result, fp_t val)
  {
    if(capReadingActive)
    {
      double maxCurrent;
      call RuntimeAnalyzer.startTask(0);
      capReadingActive = false;
      maxCurrent = 1000*findBestIn(call Slotter.getCurrentSlot(), call Slotter.getNumberOfSlots(), 
                                   FP_FLOAT(val));
      dbg("Energy","%f **********************************\n",maxCurrent);
      call RuntimeAnalyzer.stopTask(0);
      signal EnergyBudget.budgetUpdated(FP_UNFLOAT(maxCurrent));
    }
  }

  event void Slotter.slotEnded()
  {
    capReadingActive = true;
    call Cap.read();
  }

  event void Slotter.cycleEnded()
  {
  }
}
