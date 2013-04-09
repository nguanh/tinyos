configuration TestJob2C {
	uses {
		interface EAJob;
	}
}
implementation {
	components TestJob2P;
	EAJob = TestJob2P;
	
	components LedsC;
	TestJob2P.Leds -> LedsC;
}
