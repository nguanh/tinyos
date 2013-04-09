#include "EAJob.h"

generic module EAPeriodicJobConfigC() {
  provides {
    interface EAJobConfig as JobConfig;
  }
  uses {
    interface EAPeriodicJobConfig as SubJobConfig;
  }
}
implementation {
  ea_periodic_jobconfig_t  conf_;

  command ea_generic_jobconfig_t * JobConfig.getConfig() {
    conf_.type   = EA_JOBTYPE_PERIODIC;
    conf_.period = call SubJobConfig.getPeriod();

    return (ea_generic_jobconfig_t *) &conf_;
  }
}
