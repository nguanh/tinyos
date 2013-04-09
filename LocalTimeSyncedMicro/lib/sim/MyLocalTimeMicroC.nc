#include "Timer.h"

module MyLocalTimeMicroC {
  provides interface LocalTime<TMicro>;
}
implementation {
  async command uint32_t LocalTime.get() {
    return sim_time()/(sim_ticks_per_sec()/(1000*1000));
  }
}
