configuration TestAppC {
}
implementation {
	// grand-grandfather of energy harvesting
	components KronosC;

        components new EAPeriodicJobC() as PJob;
	components TestJobC;
	TestJobC        -> PJob.Job;
	components TestJobConfigC;
	TestJobConfigC  <- PJob.JobConfig;

        components new EAPeriodicJobC() as PJob2;
	components TestJob2C;
	TestJob2C       -> PJob2.Job;
	components TestJob2ConfigC;
	TestJob2ConfigC <- PJob2.JobConfig;
}

