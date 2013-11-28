#include "Timer.h"

// minimum slot length in milliseconds (1024 = 1 second)
// T in minimum slot lengths

generic module DummySlotterC(uint8_t S, uint32_t minSlotLength, uint16_t T)
{
  provides interface Init @atleastonce();
  provides interface Slotter;
  uses interface IntervallSensor<uint16_t>;
  uses interface Leds;
  uses interface Timer<TMilli>;
}
implementation
{  
  command error_t Init.init()
  {
    return SUCCESS;
  }
  
  command uint8_t Slotter.getLength(uint8_t slotNumber)
  {
    return 0;
  }

  command uint16_t Slotter.getMean(uint8_t slotNumber)
  {
    return 0;
  }

  command uint8_t Slotter.getS()
  {
    return S;
  }

  event void Timer.fired()
  {
  }
}
