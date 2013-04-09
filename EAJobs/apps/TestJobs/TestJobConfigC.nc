module TestJobConfigC {
	provides {
		interface EAPeriodicJobConfig as JobConfig;
	}
}
implementation {
	// TODO

	async command uint32_t JobConfig.getMinPeriod() {
		return 512;
	}

        async command uint32_t JobConfig.getMaxPeriod() {
		return 5120;
	}
}
