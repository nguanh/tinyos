/**
 * static slotting for energy-harvest prediction
 * @param NUM_SLOTS   number of slots per cycle
 * @param BASE_INTVL  base interval
 * @param CYCLE_LEN   length of a cycle as multiple of BASE_INTVL
 * @param ALPHA       smoothing factor for slot value
 *
 * NOTE CYCLE_LEN must be a multiple of NUM_SLOTS!
 */
generic configuration ZeroSlotterC(uint8_t NUM_SLOTS, uint16_t BASE_INTVL, uint16_t CYCLE_LEN, uint8_t ALPHA) {
  provides {
    interface Slotter;
  }
  uses {
    interface AveragingSensor<fp_t>;
  }
}
implementation {
  components new ZeroSlotterP(NUM_SLOTS, BASE_INTVL, CYCLE_LEN, ALPHA); 
  Slotter         = ZeroSlotterP;
  AveragingSensor = ZeroSlotterP;

  // configure job functionality
  components new EAJobC() as Job;
  components new EAPeriodicJobConfigC() as JobConfig;
  ZeroSlotterP           -> Job.Job;
  Job.JobConfig          -> JobConfig;
  JobConfig.SubJobConfig -> ZeroSlotterP;
}
