configuration EASchedulerC {
	provides {
		interface EAScheduler;
                interface EAJob[jobid_t jobId];
	}
}
implementation {
	components EASchedulerP;
	components new TimerMilliC() as DispatchTimer;

	EASchedulerP.DispatchTimer -> DispatchTimer;

	EAScheduler = EASchedulerP;
	EAJob       = EASchedulerP;
}
