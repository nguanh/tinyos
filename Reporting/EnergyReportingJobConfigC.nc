#include "Reporting.h"

module EnergyReportingJobConfigC {
  provides {
    interface EAPeriodicJobConfig as JobConfig;
  }
}
implementation {
  async command uint32_t JobConfig.getPeriod() {
    return JC_ENERGY_REPORTING_PERIOD;
  }
}
