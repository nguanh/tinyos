#include "FixPointMath.h"

interface Slotter {
  /**
   * get the index of current slot
   * TODO what is returned after slotEnded has been signaled?
   * @return index of current slot (0 <= index < getNumSlots())
   */
  command uint8_t getCurSlot();

  /**
   * get the number of slots
   * @return number of slots
   */
  command uint8_t getNumSlots();

  /**
   * get the length of slot
   * @param slot slot index (0 <= slot < getNumSlots())
   * @return length of slot as multiple of base interval (@see getBaseIntvl())
   */
  command uint8_t getSlotLength(uint8_t slot);

  /**
   * obtain representative value of slot
   * @param slot slot index (0 <= slot < getNumSlots())
   * @return representativ slot value
   */
  command fp_t getSlotValue(uint8_t slot);

  /**
   * obtain slot forecast
   * @param slot slot index (0 <= slot < getNumSlots())
   * @return slot forecast
   */
  command fp_t getSlotForecast(uint8_t slot);

  /**

  /**
   * @return base interval in seconds
   */
  command uint16_t getBaseIntvl();

  /**
   * called when a slot reached its end
   * @param slot the index of the just elapsed slot, note that this will be
   *             the slot prior to the one returned by getCurSlot()
   */
  event void slotEnded(uint8_t slot);  // TODO possibly extend by curVal, oldMean, newMean

  /**
   * call upon end of a complete cycle (i.e., last slot has elapsed)
   */
  event void cycleEnded();
}
