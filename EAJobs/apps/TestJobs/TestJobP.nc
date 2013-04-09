module TestJobP {
	uses {
		interface EAJob;
		interface Leds;
	}
}
implementation {
	event void EAJob.run()
	{
		call Leds.led0Toggle();
		call EAJob.done();
	}
}
