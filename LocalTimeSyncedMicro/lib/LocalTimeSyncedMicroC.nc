#include "Timer.h"

configuration LocalTimeSyncedMicroC {
	provides interface LocalTime<TMicro>;
}

implementation {
#ifndef DISABLE_SYNCED_MICRO
#warning USING SYNCED MICRO
        components LocalTimeHybridMicroC;
        LocalTime = LocalTimeHybridMicroC;
#else
#warning *NOT* USING SYNCED MICRO
	components CounterOne16C;
	components new TransformCounterC(TMicro, uint32_t, TMicro, uint16_t, 0, uint32_t);
	//components new CounterToLocalTimeC(TMicro);
	components new CounterToLocalMicroC();

	LocalTime = CounterToLocalMicroC;
	CounterToLocalMicroC.Counter -> TransformCounterC;
	TransformCounterC.CounterFrom -> CounterOne16C;
#endif
}
