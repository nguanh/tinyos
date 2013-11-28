//#include "Timer.h"

/**
 * static slotting for energy-harvest prediction
 * @param NUM_SLOTS   number of slots per cycle
 * @param BASE_INTVL  base interval
 * @param CYCLE_LEN   length of a cycle as multiple of BASE_INTVL
 * @param ALPHA       smoothing factor for slot value
 *
 * NOTE CYCLE_LEN must be a multiple of NUM_SLOTS!
 */
generic module AdaptiveSlotterP(uint8_t NUM_SLOTS, uint16_t BASE_INTVL, uint16_t CYCLE_LEN, uint8_t ALPHA) {
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
//#include "parameters.h"
  //uint32_t  firedTime;        // TODO ?

  fp_t predFactor = FP_ONE;

  // definitions for adaptive slotting algorithm
  typedef uint8_t  slice_t;
  typedef uint8_t  slot_t;
  typedef uint8_t  slotlen_t;
  typedef uint16_t slotval_t;

  // solar current as fp_t needs maximum 14 bits (max 35.0 mA -> 6+8 Bits)
  // algorithm can only handle 10 bit values
  // convert 14 bits to 10 bit clipping 4 trailing ones off
  #define SHIFT 4
  // get actual adaptive slotting implementation
  // see implementation for variables and functions
  #include "../../SolarPredictor/predictor/predictorAlgorithm.c"

  
  /*** Init **************************************************************/
  command error_t Init.init() {
    init();  // init adaptive slotting
    return SUCCESS;
  }
  
  
  /*** Slotter ***********************************************************/
  command uint8_t Slotter.getSlotLength(uint8_t slot) {
    if (slot < NUM_SLOTS) {
      return LENGTH(slot);
    } else {
      return 0;
    }
  }

  command fp_t Slotter.getSlotValue(uint8_t slot) {
    if (slot < NUM_SLOTS) {
      return MEAN(slot) << SHIFT;
    } else {
      return 0;//FP_NaN;
    }
  }

  command fp_t Slotter.getSlotForecast(uint8_t slot) {
    return fpMlt(predFactor, call Slotter.getSlotValue(slot));
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
    uint8_t  slotState;
    uint8_t  lastSlot   = curSlot;
    fp_t     avgHarvest = call AveragingSensor.get(TRUE);  // get average sensor value and clear it

    // NOTE hot fix
    if ( 1 ) {
      fp_t  sval = call Slotter.getSlotValue(lastSlot);
      if (sval > FP_ONE) {  // idon't get into too small values!
        predFactor = (predFactor + fpDiv(avgHarvest, sval)) / 2;
        if (predFactor > FP_ONE) predFactor = FP_ONE;
      } else {
        predFactor = (predFactor + FP_ONE) / 2;
      }
    }
    // ..end

    // finish current slice and check for slot/cycle end
    slotState = finishSlice(avgHarvest >> SHIFT);
    if (slotState != 0) {
      signal Slotter.slotEnded(lastSlot);
      if (slotState == 2) {
        signal Slotter.cycleEnded();
      }
    }

    // and we're done
    call EAJob.done();
  }


  /*** JobConfig *********************************************************/
  async command uint32_t JobConfig.getPeriod() {
	  // TODO fixme: time
    //printf("%u.%u; slice len: %u, %u\n", curSlot, curSlice, getCurSliceLength(), BASE_INTVL);
    //printfflush();
    return (1024UL * BASE_INTVL) * getCurSliceLength();// - (call LocalTimer.get() - firedTime);
  }
}
