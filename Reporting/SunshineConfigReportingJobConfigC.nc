#include "Reporting.h"

module SunshineConfigReportingJobConfigC {
  provides {
    interface EAPeriodicJobConfig as JobConfig;
  }
}
implementation {
  async command uint32_t JobConfig.getPeriod() {
    return JC_SUNSHINE_CONFIG_REPORTING_PERIOD;
  }
}
