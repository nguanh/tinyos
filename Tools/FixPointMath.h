#ifndef FPMATH_H
#define FPMATH_H

#include <inttypes.h>


typedef uint16_t fp_t;
typedef uint32_t twicefp_t;
typedef int16_t	 sfp_t;
typedef int32_t	 twicesfp_t;
typedef uint8_t  fract_t;
typedef uint8_t  dect_t;

/* why not use this instead of a funny conversion function ? */
/*
typedef union {
	fp_t  fp;
	struct  {
		fp_t int_part : FP_TOTAL_SIZE-FP_FRACT_SIZE;
		fp_t dec_part : FP_FRACT_SIZE;
	} int_fract;
} fp_something_t;
*/


enum {
	FP_TOTAL_SIZE  = 16,
	FP_FRACT_SIZE  = 8,
};
#define FP_ONE ((fp_t)1 << FP_FRACT_SIZE)
#define FP_NaN (-1)

// convert to from float
#define FP_FLOAT(x)   ((x)/256.0)
#define FP_UNFLOAT(x) ((fp_t)((x)*256))

// const init equivalent for fpConv()
#define FP_CONV(i,f)   (fp_t)(((fp_t)(i) << FP_FRACT_SIZE) + ((fp_t) (f) << FP_FRACT_SIZE) / 100)

fp_t	fpConv(dect_t i, uint8_t f);
dect_t	fpInt(fp_t a);
fp_t	fpMlt(fp_t a, fp_t b);
sfp_t	fpSMlt(sfp_t a, sfp_t b);
fp_t	fpDiv(fp_t a, fp_t b);
fp_t	fpInv(fp_t a);
fp_t	fpPow(fp_t a, fp_t b);
sfp_t	fpLog(fp_t a);
enum {
	FP_EXP_LIMIT = 11 // maximum of integer part for which it's possible to calculate exp
};
fp_t	fpExp(fp_t a);

#endif //FPMATH_H
