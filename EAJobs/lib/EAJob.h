#ifndef EAJOB_H
#define EAJOB_H

#define UQ_EA_JOB "EAScheduler.EAJob"

typedef uint8_t  jobid_t;
typedef uint8_t  jobtype_t;
enum {
	EA_JOBTYPE_PERIODIC = 0
};

typedef struct ea_generic_jobconfig_t {
	jobtype_t  type;
} ea_generic_jobconfig_t;

typedef struct ea_periodic_jobconfig_t {
	jobtype_t  type;
	uint32_t   period;
} ea_periodic_jobconfig_t;


#endif
