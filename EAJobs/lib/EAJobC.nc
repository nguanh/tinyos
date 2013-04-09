#include "EAJob.h"

generic configuration EAJobC() {
  provides {
    interface EAJob as Job;
  }
  uses {
    interface EAJobConfig as JobConfig;
  }
}
implementation {
  /* TODO */

  enum {
    JOB_ID = unique(UQ_EA_JOB)
  };

  components EASchedulerC;
  Job       = EASchedulerC.EAJob[JOB_ID];

  components EAEnergyManagerC;
  JobConfig = EAEnergyManagerC.EAJobConfig[JOB_ID];
}
