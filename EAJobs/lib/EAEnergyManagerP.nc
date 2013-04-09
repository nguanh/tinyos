/* $Id: $ */
/*
 * Copyright (c) 2011 Hamburg University of Technology (TUHH).
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of the Hamburg University of Technology nor
 *   the names of its contributors may be used to endorse or promote
 *   products derived from this software without specific prior written
 *   permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE
 * MASSACHUSETTS INSITIUTE OF TECHNOLOGY OR ITS CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
 * OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
 * USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 */

/**
 * @author Christian Renner
 * @date December 14 2011
 */

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
