#include "Timer.h"

/**
 * static slotting for energy-harvest prediction
 * @param NUM_SLOTS   number of slots per cycle
 * @param BASE_INTVL  base interval
 * @param CYCLE_LEN   length of a cycle as multiple of BASE_INTVL
 * @param ALPHA       smoothing factor for slot value
 *
 * NOTE CYCLE_LEN must be a multiple of NUM_SLOTS!
 */
generic module StaticSlotterP(uint8_t NUM_SLOTS, uint16_t BASE_INTVL, uint16_t CYCLE_LEN, uint8_t ALPHA) {
  provides {
    interface Init @exactlyonce();
    interface Slotter;
    interface EAPeriodicJobConfig as JobConfig;
  }
  uses {
    interface AveragingSensor<fp_t> @exactlyonce();
    interface EAJob;
  }
}
implementation {
  uint8_t   curSlot;          // current slot (0 <= curSlot < NUM_SLOTS)
  bool      firstCycle;       // marker whether this is the first cycle
  uint16_t  mean[NUM_SLOTS];   // mean slot values
  //uint32_t  firedTime;        // TODO ?

  enum {
    SLOT_LENGTH = CYCLE_LEN / NUM_SLOTS  // fixed slot length
  };

  /**
   * Calculate moving average.
   *
   * @param oldVal Old average
   * @param newVal New value
   * @param ratio Averaging ratio * 128. 128 = 1.0.
   *
   * @return oldVal*ratio+newVal*(1-ratio)
   */
  // TODO use ewma filter from Statistics
  static fp_t movingAVG(fp_t oldVal, fp_t newVal, uint8_t ratio) {
    return (((uint32_t)oldVal) * ratio + ((uint32_t)newVal) * (128-ratio) + 64) >> 7;
  }


  command error_t Init.init() {
    uint8_t i;
    for (i = 0; i < NUM_SLOTS; i++)  {
      mean[i] = 0;
    }
    curSlot    = 0;
    firstCycle = TRUE;

    return SUCCESS;
  }
  
  command uint8_t Slotter.getSlotLength(uint8_t slot) {
    if (slot < NUM_SLOTS) {
      return SLOT_LENGTH;
    } else {
      return 0;
    }
  }

  command fp_t Slotter.getSlotValue(uint8_t slot) {
    if (slot < NUM_SLOTS) {
      return mean[slot];
    } else {
      return 0;//FP_NaN;
    }
  }

  command fp_t Slotter.getSlotForecast(uint8_t slot) {
    return call Slotter.getSlotValue(slot);
  }

  command uint8_t Slotter.getCurSlot() {
    return curSlot;
  }

  command uint16_t Slotter.getBaseIntvl() {
    return BASE_INTVL;
  }

  command uint8_t Slotter.getNumSlots() {
    return NUM_SLOTS;
  }

  /*** EAJob *************************************************************/
  event void EAJob.run() {
    uint8_t lastSlot = curSlot;
    fp_t    slotVal  = call AveragingSensor.get(TRUE);  // get average sensor value and clear it
      
    // get smoothing or use current value (if first cycle)
    if (firstCycle) {
      mean[curSlot] = slotVal;
    } else {
      mean[curSlot] = movingAVG(mean[curSlot], slotVal, ALPHA);
    }

    // advance slot
    if (++curSlot == NUM_SLOTS) {
      curSlot = 0;
      firstCycle = FALSE;
    }

    signal Slotter.slotEnded(lastSlot);
    if (curSlot == 0) {
      signal Slotter.cycleEnded();
    }

    // and we're done
    call EAJob.done();
  }


  /*** JobConfig *********************************************************/
  async command uint32_t JobConfig.getPeriod() {
    return (1024UL * BASE_INTVL) * SLOT_LENGTH;// - (call LocalTimer.get() - firedTime);
  }
}
