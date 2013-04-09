configuration TestJobC {
	uses {
		interface EAJob;
	}
}
implementation {
	components TestJobP;
	EAJob = TestJobP;
	
	components LedsC;
	TestJobP.Leds -> LedsC;
}
