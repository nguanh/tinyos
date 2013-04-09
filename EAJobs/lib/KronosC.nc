configuration KronosC {
/*
        provides {
                interface EAJob[uint8_t jobId];
        }
        uses {
                interface EAJobConfig[uint8_t jobId];
        }
*/
}
implementation {
//	components EASchedulerC;
//	EAJob       = EASchedulerC;
//	EAJobConfig = EASchedulerC;

	// add job for energy management
	components EnergyEstimationJobC;
}
