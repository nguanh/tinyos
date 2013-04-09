#ifndef FAST_MATH_H
#define FAST_MATH_H

// calculate:   res = (a    * b    ) >> 16
// efficient  16bit = 16bit * 16bit
inline uint16_t multiU16X16toH16Round(uint16_t a, uint16_t b)
{
  uint16_t res;
  asm(
    "mul %B1,%B2"          "\n\t"  // a.high * b.high
    "movw %A0,r0"          "\n\t"
    "mul %A1,%A2"          "\n\t"  // a.low  * b.low
    "mov r26,r1"           "\n\t"  //   -> save 2nd lowest byte of result
    "mul %B1,%A2"          "\n\t"  // a.high * b.low
    "add r26,r0"           "\n\t"
    "adc %A0,r1"           "\n\t"
    "clr __zero_reg__"     "\n\t"  // clear R1 for carry operation
    "adc %B0,__zero_reg__" "\n\t"  // carry add
    "mul %A1,%B2"          "\n\t"  // a.low  * b.high
    "add r26,r0"           "\n\t"
    "adc %A0,r1"           "\n\t"
    "clr __zero_reg__"     "\n\t"  // clear R1 for carry operation
    "adc %B0,__zero_reg__" "\n\t"  // carry add
    "lsl r26"              "\n\t"  // left shift remainder (overflow => round to ceil)
    "adc %A0,__zero_reg__" "\n\t"
    "adc %B0,__zero_reg__" "\n\t"
    : "=&r" (res)
    : "r" (a), "r" (b)
    : "r26");
  return res;
}


// calculate:   res = a     * b
// efficient  32bit = 16bit * 16bit
inline uint32_t multiU16X16to32(uint16_t a, uint16_t b)
{
  uint32_t res;

  asm(
    "mul %B1,%B2"      "\n\t"       // a.high * b.high
    "movw %C0,r0"      "\n\t"
    "mul %A1,%A2"      "\n\t"       // a.low  * b.low
    "movw %A0,r0"      "\n\t"
    "mul %B1,%A2"      "\n\t"       // a.high * b.low
    "add %B0,r0"      "\n\t"
    "adc %C0,r1"      "\n\t"
    "clr __zero_reg__"    "\n\t"    // clear R1 for carry operation
    "adc %D0,__zero_reg__"  "\n\t"  // carry add
    "mul %A1,%B2"      "\n\t"       // a.low  * b.high
    "add %B0,r0"      "\n\t"
    "adc %C0,r1"      "\n\t"
    "clr __zero_reg__"    "\n\t"    // clear R1 for carry operation
    "adc %D0,__zero_reg__"  "\n\t"  // carry add
    : "=&r" (res)
    : "r" (a), "r" (b));

  return res;
}

#endif /*FAST_MATH_H*/
