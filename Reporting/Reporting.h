#ifndef REPORTING_H
#define REPORTING_H

/* collection IDs */
enum {
  CID_ENERGY_REPORT           = 13,
  CID_ORINOCO_STATS_REPORT    = 14,
  CID_ORINOCO_DEBUG_REPORT    = 15,
  CID_SUNSHINE_CONFIG_REPORT  = 16,
  CID_ORINOCO_CONFIG_REPORT   = 17,
  CID_HARVEST_FORECAST_REPORT = 18
};


/* default reporting intervals (ms) */
#ifndef JC_ENERGY_REPORTING_PERIOD
#define JC_ENERGY_REPORTING_PERIOD             184320UL  /*  3 min */
#endif

#ifndef JC_ORINOCO_STATS_REPORTING_PERIOD
#define JC_ORINOCO_STATS_REPORTING_PERIOD      614400UL  /* 10 min */
#endif

#ifndef JC_ORINOCO_DEBUG_REPORTING_PERIOD
#define JC_ORINOCO_DEBUG_REPORTING_PERIOD      921600UL  /* 15 min */
#endif

#ifndef JC_SUNSHINE_CONFIG_REPORTING_PERIOD
#define JC_SUNSHINE_CONFIG_REPORTING_PERIOD  11059200UL  /* 3 hour */
#endif


/* data sequence number */
typedef uint16_t    data_seqno_t;
typedef nx_uint16_t nx_data_seqno_t;


#endif
