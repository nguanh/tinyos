module TestJob2P {
	uses {
		interface EAJob;
		interface Leds;
	}
}
implementation {
	event void EAJob.run()
	{
		call Leds.led1Toggle();
		call EAJob.done();
	}
}
