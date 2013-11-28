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
generic module ZeroSlotterP(uint8_t NUM_SLOTS, uint16_t BASE_INTVL, uint16_t CYCLE_LEN, uint8_t ALPHA) {
  provides {
    interface Slotter;
    interface EAPeriodicJobConfig as JobConfig;
  }
  uses {
    interface AveragingSensor<fp_t> @exactlyonce();
    interface EAJob;
  }
}
implementation {
  uint8_t   curSlot = 0;          // current slot (0 <= curSlot < NUM_SLOTS)

  enum {
    SLOT_LENGTH = CYCLE_LEN / NUM_SLOTS  // fixed slot length
  };

  
  /*** Slotter ***********************************************************/
  command uint8_t Slotter.getSlotLength(uint8_t slot) {
    if (slot < NUM_SLOTS) {
      return SLOT_LENGTH;
    } else {
      return 0;
    }
  }

  command fp_t Slotter.getSlotValue(uint8_t slot) {
    return 0;
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
    uint8_t prevSlot = curSlot;

    // advance slot
    if (++curSlot == NUM_SLOTS) {
      curSlot = 0;
    }

    signal Slotter.slotEnded(prevSlot);
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
