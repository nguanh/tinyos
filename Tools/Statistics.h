#ifndef STATISTICS_H
#define STATISTICS_H

#include <inttypes.h>

// compute filter * old + (1-filter) * cur
// where filter may range from 1 to 255
uint16_t ewmaFilter16(uint16_t old, uint16_t cur, uint8_t filter);

uint32_t ewmaFilter32(uint32_t old, uint32_t cur, uint8_t filter);

#endif
