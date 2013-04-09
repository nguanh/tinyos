#include "Reporting.h"

module OrinocoDebugReportingJobConfigC {
  provides {
    interface EAPeriodicJobConfig as JobConfig;
  }
}
implementation {
  async command uint32_t JobConfig.getPeriod() {
    return JC_ORINOCO_DEBUG_REPORTING_PERIOD;
  }
}
