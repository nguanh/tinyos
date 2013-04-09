configuration EAEnergyManagerC {
	uses {
		interface EAJobConfig[uint8_t jobId];
	}
}
implementation {
        components EAEnergyManagerP;
	components MainC;

	EAEnergyManagerP.Boot          -> MainC;

	EAJobConfig = EAEnergyManagerP;

        components EASchedulerC;
        EAEnergyManagerP.EAScheduler   -> EASchedulerC; 
}
