interface EAJob {
	// @see Job
	//?command void run();
	event void run();

	// @see Job
	//?event void done();
	command void done();

	// TODO we need something for posting events! How is this done in TinyOS
	// scheduler?
//	command error_t postJob();
}
