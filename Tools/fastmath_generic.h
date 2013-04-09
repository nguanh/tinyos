#ifndef FAST_MATH_H
#define FAST_MATH_H

// calculate:   res = (a    * b    ) >> 16
// efficient  16bit = 16bit * 16bit
inline uint16_t multiU16X16toH16Round(uint16_t a, uint16_t b)
{
  return (((uint32_t)a)*((uint32_t)b)) >> 16;
}


// calculate:   res = a     * b
// efficient  32bit = 16bit * 16bit
inline uint32_t multiU16X16to32(uint16_t a, uint16_t b)
{
  return (((uint32_t)a)*((uint32_t)b));
}

#endif /*FAST_MATH_H*/
