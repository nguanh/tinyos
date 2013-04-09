module OrinocoStatsReportingJobConfigC {
  provides {
    interface EAPeriodicJobConfig as JobConfig;
  }
}
implementation {
  async command uint32_t JobConfig.getPeriod() {
    return JC_ORINOCO_STATS_REPORTING_PERIOD;
  }
}
