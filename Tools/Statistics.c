#include "Statistics.h"

// compute filter * old + (1-filter) * cur
// where filter may range from 1 to 255
uint16_t ewmaFilter16(uint16_t old, uint16_t cur, uint8_t filter) {
  if (old >= cur) {
    old -= cur;
    old = filter * (old >> 8) + ((filter * (old & 0x00FF)) >> 8);
    return cur + old;
  } else {
    old = cur - old;
    old = filter * (old >> 8) + ((filter * (old & 0x00FF)) >> 8);
    return cur - old;
  }
}


uint32_t ewmaFilter32(uint32_t old, uint32_t cur, uint8_t filter) {
  if (old >= cur) {
    old -= cur;
    old = filter * (old >> 8) + ((filter * (uint16_t)(old & 0x00FF)) >> 8);
    return cur + old;
  } else {
    old = cur - old;
    old = filter * (old >> 8) + ((filter * (uint16_t)(old & 0x00FF)) >> 8);
    return cur - old;
  }
}
