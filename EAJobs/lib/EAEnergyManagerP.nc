#include "EAJob.h"

module EAEnergyManagerP @safe() {
  uses {
    interface Boot;
    interface EAJobConfig[uint8_t jobId];
    interface EAScheduler;
  }
}
implementation {
  enum {
    NUM_JOBS = uniqueCount(UQ_EA_JOB)
  };

  event void Boot.booted() {
    uint8_t  i;

    // schedule period jobs
    // TODO maybe we could insert a feature to stop jobs (e.g., an enabled-flag)
    for (i = 0; i < NUM_JOBS; i++) {
      ea_generic_jobconfig_t  * jc = call EAJobConfig.getConfig[i]();
      call EAScheduler.scheduleJob(i, ((ea_periodic_jobconfig_t *) jc)->period);
    }
  }

  // default getConfig command; required for EAJobConfig is parametrized
  default command ea_generic_jobconfig_t * EAJobConfig.getConfig[uint8_t jobId]() {
    return NULL;
  }

  // TODO task better?
  event void EAScheduler.jobStarted(jobid_t jobid) {
    ea_generic_jobconfig_t  * jc = call EAJobConfig.getConfig[jobid]();
    call EAScheduler.scheduleJob(jobid, ((ea_periodic_jobconfig_t *) jc)->period);
  }
}
