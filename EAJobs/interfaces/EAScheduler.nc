#include "EAJob.h"

interface EAScheduler {
	command void scheduleJob(jobid_t jobId, uint32_t dt);
	event void jobStarted(jobid_t jobId);
}

