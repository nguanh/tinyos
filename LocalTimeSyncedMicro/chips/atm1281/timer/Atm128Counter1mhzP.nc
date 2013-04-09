#include <Atm128Timer.h>


module Atm128Counter1mhzP {
  provides {
    interface Init;
    interface Counter<TMicro, uint32_t> as Counter;
  }
  uses {
    interface HplAtm128Timer<uint16_t>   as Timer;
    interface HplAtm128TimerCtrl16       as TimerCtrl;
    interface HplAtm128Capture<uint16_t> as Capture;
  }
}
implementation {
  norace uint16_t wakeupDelay_ = 0;  // wakeup-delay between capture and IRQ


  /*** INIT **************************************************************/
  command error_t Init.init() {
    call Timer.setScale(ATM128_CLK16_DIVIDE_64);  // 7.3728 or 8Mhz clock -> 1/8mhz cnt.
    call Capture.setEdge(TRUE);                   // capture on rising edges

    return SUCCESS;
  }


  /*** Counter ***********************************************************/
  async command uint32_t Counter.get() {
    uint16_t  delta;
    atomic { 
      delta = call Timer.get() - call Capture.get();
    }
    // convert ticks to microseconds
    // if clock = 8 Mhz
    //   8/64 Mhz decimal -> Mhz binary
    //   1e6 / 8 * v = 2^20  =>  v = 8.3886 = 1000.01100011 bin
    return ((uint32_t)delta << 3) + ((delta >> 2) + (delta >> 3));
    // if clock = 7.3728 Mhz
    //   7.3728/64 Mhz decimal -> Mhz binary
    //   7.3728e6 / 64 * v = 2^20  =>  v = 9.1022 = 1001.00011010 bin
//    return (((uint32_t)delta << 3) + (delta)) + ((delta >> 4) + (delta >> 5));
  }

  async command bool Counter.isOverflowPending() {
    return call Timer.test();
  }

  async command void Counter.clearOverflow() {
    call Timer.reset();
  }

  async event void Timer.overflow() {
    signal Counter.overflow();
  }

  /*** Capture ***********************************************************/
  async event void Capture.captured(uint16_t time) {
    // nothing
  }
}
