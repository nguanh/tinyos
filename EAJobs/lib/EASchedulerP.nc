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

//#include "printf.h"

module EASchedulerP @safe() {
  provides {
    interface EAScheduler;
    interface EAJob[uint8_t jobId];
  }
  uses {
    interface Timer<TMilli> as DispatchTimer;
  }
}
implementation {
  // TODO list
  // - how to schedule energy measurements and predictions? How often should we update scalings?
  // - how to obtain energic state of node? (-> linear approximation)
  // - how about events?
  // - implement importance levels (priorities)
  // - we must protect schedule and dispatch from each other!
  //   -> there *must not* be any race conditions
  //   -> is resolved, when printf is used, so it probably is just
  //      racing ... or so
  //   -> was not a racing thing, but a non-running timer (isn't re
  //      started in dispatch, if next job has 0 delay!
  // - ..

  enum {
    NUM_JOBS = uniqueCount(UQ_EA_JOB)
  };

  uint8_t   head_  = NUM_JOBS;    // NUM_JOBS = not valid = queue empty
  uint8_t   tail_  = NUM_JOBS;
  uint8_t   schedule_[NUM_JOBS];

  // dispatch times are relative to last restartDispatchTimer = DispatchTimer.gett0()
  uint32_t  dispatchTime_[NUM_JOBS];


  void printSchedule() {
/*
    uint16_t S = 0;
    uint8_t  i;
    // print schedule
    printf("---\n");
    for (i = head_; i != NUM_JOBS; i = schedule_[i]) {
      printf("S%u %2u @ %10lu\n", S++, i, dispatchTime_[i]);
    }
    printfflush();
*/
  }
  
  void restartDispatchTimer();

  jobid_t popJob() {
    jobid_t  curJob;
    atomic {
      curJob = head_;   // save old job
      head_  = schedule_[head_];  // get next job
    }
    return curJob;
  }

  // dispatch head of schedule_ queue
  task void dispatch() {
    uint8_t  i;
    jobid_t  curJob = popJob();
    //printf("dispatch %u @ %lu\n", curJob, call DispatchTimer.getNow());

    // update scheduling times
    // iterate through schedule_ array, when we'll have more than just periodic jobs (?)
    // atomic?
    for (i = head_; i != NUM_JOBS; i = schedule_[i]) {
      dispatchTime_[i] -= dispatchTime_[curJob];
    }
    restartDispatchTimer();

    // reschedule current job
    // scheduleJob(curJob, call EAJobConfig.getPeriod[curJob]());
    signal EAScheduler.jobStarted(curJob);

    // run job
    signal EAJob.run[curJob]();
  }

  inline void restartDispatchTimer() {
    if (head_ != NUM_JOBS) {
      if (dispatchTime_[head_] == 0) {
        post dispatch();
      } else {
        call DispatchTimer.startOneShot(dispatchTime_[head_]);
      }
    }
  }

  /*atomic*/ command void EAScheduler.scheduleJob(jobid_t jobId, uint32_t dt) {
    // if queue is empty
    if (head_ == NUM_JOBS) {
      dispatchTime_[jobId] = dt;
      head_                = jobId;
      schedule_[jobId]     = NUM_JOBS;
      restartDispatchTimer();
    } else {
      // calculate new dispatch time
      // example: dt = 1 h, now = 5 o'clock, dispatchTimer started at 3 o'clock 
      // => dispatchTime relative to start: 1h+2h=3h - so it gets scheduled at 3+3=6 o'clock
      // FIXME could there be a problem, when the timer is not running or so?
      dispatchTime_[jobId] = dt;
      if (call DispatchTimer.isRunning()) {
        dispatchTime_[jobId] += (call DispatchTimer.getNow() - call DispatchTimer.gett0());
      }

      if (dt < dispatchTime_[head_]) {
        // job has shortest deadline, insert at front
        schedule_[jobId] = head_;
        head_            = jobId;
        restartDispatchTimer();
      } else {
        // iterate through task list and place in appropriate position
        uint8_t  i, nexti;
        for (i = head_;; i = nexti) {
          nexti = schedule_[i];
          if (nexti == NUM_JOBS || dt < dispatchTime_[nexti]) {
            schedule_[i]     = jobId;
            schedule_[jobId] = nexti;
            break;
          }
        }
      }
    }
    // DEBUG
    printSchedule();
  }
      

  event void DispatchTimer.fired() {
    // do this to move code away from timer interrupt
    // for the future, there must be a different way to do this (as TinyOS tasks may lead to
    // execution delay)
    // this approach here also ethis approach here also enforces McuSleep!!
    // maybe, we should extend the TinyOS scheduler to allow for regular tasks and what we
    // call jobs?
    post dispatch();
  }


  // task stuff
  command void EAJob.done[uint8_t jobId]() {
    // TODO
  }

  // default run event; required for EAJob is parametrized
  default event void EAJob.run[uint8_t jobId]() {
    // TODO well, a job without run does not do anything, so it should not be allowed!
  }
}
