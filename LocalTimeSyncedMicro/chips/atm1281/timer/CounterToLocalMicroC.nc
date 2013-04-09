#include "Timer.h"

generic module CounterToLocalMicroC() @safe() {
  provides interface LocalTime<TMicro>;
  uses interface Counter<TMicro,uint32_t>;
}
implementation {
  uint64_t  o = 0;

  async command uint32_t LocalTime.get() {
/*
  // NOTE this calculation results in "back in time" travels
  // when when time (the counter value) wraps around
  // a small (wrapped) counter value may produce a smaller converted time
  // value than a small time value
    //   7.3728/64 Mhz decimal -> Mhz binary
    //   7.3728e6 / 64 * v = 2^20  =>  v = 9.1022 = 1001.00011010 bin
    uint32_t  time = call Counter.get();
    return (((uint32_t)time << 3) + (time)) + ((time >> 4) + (time >> 5));
*/
    uint64_t  time;
    atomic { time = (uint64_t)call Counter.get() + o; }
    return (((uint64_t)time << 3) + (time)) + ((time >> 4) + (time >> 5));
    // NOTE this does free from the problem, but moves it beyond normal life time
    // of a node
  }

  async event void Counter.overflow() {
    // nothing
    atomic { o += (1ULL << 32); }
  }
}

