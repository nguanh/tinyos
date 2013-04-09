//interface EAJobConfig< ea_jobconfig_type >
interface EAJobConfig
{
	// TODO das hier kapseln, also entsprechend verbinden in der EAPeriodicJob


	/* obtain the configuration of a job */
	command ea_generic_jobconfig_t * getConfig();

	/* update or set the configuratio of a job */
//	async command error_t setConfig(ea_jobconfig_type);
}

