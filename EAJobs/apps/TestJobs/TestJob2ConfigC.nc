module TestJob2ConfigC {
	provides {
		interface EAPeriodicJobConfig as JobConfig;
	}
}
implementation {
	// TODO

	async command uint32_t JobConfig.getMinPeriod() {
		return 1024;
	}

        async command uint32_t JobConfig.getMaxPeriod() {
		return 1024;
	}
}
