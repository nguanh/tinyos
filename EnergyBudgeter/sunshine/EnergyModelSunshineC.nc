#include "Sunshine.h"

module EnergyModelSunshineC {
  provides {
    interface EnergyModel;
  }
  uses {
    interface GetSet<const supply_config_t *>          as SupplyConfig;
    interface GetSet<const capcontrol_config_t *>      as CapConfig;
  }
}
implementation {
  /* setup */
//#define SIM_MAX_ERROR      0.0001  /* voltage precision */
#define SIM_MAX_ERROR      0.001   /* voltage precision */
#define SIM_MAX_STEPS    100       /* naximum number of iteration steps */
#define SIM_MIN_VOLTAGE    0.1     /* abort if voltage is too low */

  /* internal helpers */
#define ERR(x,y) ((x)>(y)?(x)-(y):(y)-(x))
#define ABS(x)   ((x)>0?(x):-(x))

  /* locals s*/
  uint32_t  dt;
  double    a, b, y;
  double    c;
  int       i;

  /* final checking function before signaling the done-event */
  void end() {
    double Vmax = FP_FLOAT((call CapConfig.get())->maxVoltage);

    // cap voltage cannot exceed its maximum
    if (y > Vmax) { 
      y = Vmax;
    }

    // cap voltage must not be zero (this will lead to execu
    if (! (y > 0.01)) { 
      y = 0.01;
    }

    signal EnergyModel.calculationDone(y);
  }

  task void simulationStep() {
    double fy, fyy;
    double lasty = y;
    fy    = (y) + ( (b/a) * log(ABS(a*y - b)) ) - dt*a + c*a;
    fyy   = (1) + ( b / ((a*y-b)));
    y     = y - (fy/fyy);

    // check whether we need an additional step
    if (ERR(lasty,y) > SIM_MAX_ERROR && y > SIM_MIN_VOLTAGE && i++ < SIM_MAX_STEPS) {
      post simulationStep();
    } else {
      end();
    }
  }

  task void simulateSlot() {
    // CASE 1: no harvest, y can be calculated directly
    if (a == 0) {
      y = sqrt(y*y - 2*b*dt); 
      end();

    // CASE 2: there is harvest => approximate results using Newton's method
    } else {
      if (ERR(a, b/y) > 0) {
        i     = 0;
        c     = -((y/a) + (b/(a*a))*log(ABS(a*y-b)));
        post simulationStep();
      } else {
        // CASE 3: stable condition, Vc won't change!
        end();
      }
    }
  }

  command void EnergyModel.calculate(uint32_t duration, double voltage, double harvest, double load) {
    // read config
    const supply_config_t      * sc = call SupplyConfig.get();
    const capcontrol_config_t  * cc = call CapConfig.get();

    double cap = FP_FLOAT(cc->capacity);
    double eta = sc->efficiency / 100.0;

    // setup
    dt = duration;
    a  = harvest / cap;
    b  = (load * FP_FLOAT(sc->outputVoltage)) / (eta * cap);
    y  = voltage;

    post simulateSlot();
  }
}

