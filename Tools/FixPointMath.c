#include "FixPointMath.h"
#include <inttypes.h>


/** fixed-point conversion
 * converts a number i.f to fixed point format
 * @param i integer part 
 * @param f fractional part in hundreds, e.g., 0.7 => 70
 * @return i.f as type fp_t
 */
inline fp_t fpConv(dect_t i, uint8_t f)
{
	return ((fp_t) i << FP_FRACT_SIZE) + ((fp_t) f << FP_FRACT_SIZE) / 100;
}


/** fixed-point reverse conversion
 * extracts the integer part of a fixed point number
 * @param a a fixed point number
 * @return the value of i as type dect_t
 */
inline dect_t fpInt(fp_t a)
{
	return (dect_t)(a >> FP_FRACT_SIZE);
}

/** fixed-point multiplication
 * @param a factor
 * @param b factor
 * @return a * b, the product
 */
inline fp_t fpMlt(fp_t a, fp_t b)
{
	// multiply in double precision
	twicefp_t c = (twicefp_t) a * (twicefp_t) b;
	
	// mid values are rounded up
	c += ((twicefp_t) 1 << (FP_FRACT_SIZE - 1));
	
	// correct result
	return (fp_t) (c >> FP_FRACT_SIZE);
}

/** fixed-point multiplication for signed values
 * @param a factor
 * @param b factor
 * @return a * b, the product
 */
inline sfp_t fpSMlt(sfp_t a, sfp_t b)
{
	// TODO use faster implementation, which does not need to multiply
	// two 32bit values (with all leading zeros in the first 16 bits each)
	// multiply in double precision
	twicesfp_t c = (twicesfp_t) a * (twicesfp_t) b;
	
	// mid values are rounded up
	c += ((twicesfp_t) 1 << (FP_FRACT_SIZE - 1));
	
	// correct result
	return (sfp_t) (c >> FP_FRACT_SIZE);
}


/** fixed-point division
 * @param a dividend
 * @param b divisor
 * @return a / b, the quotient
 */
inline fp_t fpDiv(fp_t a, fp_t b)
{
	// pre-multiply by base to correct result
	twicefp_t c = (twicefp_t) a << FP_FRACT_SIZE;

	// division by zero
	if (b == 0) {
		return FP_NaN;
	}
	
	// mid values are rounded to ceiling
	c += (b >> 1);
	
	// divide
	return (fp_t) (c / b);
}

/** fixed-point inverse
 * @param a number to be inverted
 * @return 1 / a
 */
inline fp_t fpInv(fp_t a)
{
	if (a == 0) return FP_NaN;
	
	// divide
	return fpDiv(FP_ONE, a);
}


/** fixed-point exponentiation
 * @note only supports integers as exponent
 * @param a base
 * @param b exponent
 * @return a^b
 */
fp_t fpPow(fp_t a, fp_t b)
{
	fp_t c = a;

	// get integer
	b >>= FP_FRACT_SIZE;
	b--;
	
	// multiply
	while (b--) {
		c = fpMlt(a, c);
	}

	return c;
}

// lookup-table for logarithm (16 bit width)
const static uint16_t logLut[] = {
	85, 51, 37, 28, 23, 20, 17, 15
};

/** fixed-point natural logarithm
 * calculated by series:
 * 2 * sum((1 / (2n + 1)) * ((a+1) / (a-1))^(2n+1))
 * sum is from n=0 to infinite
 * @param a
 * @return ln(a)
 */
sfp_t fpLog(fp_t a)
{
	uint8_t i;
	fp_t result, pwcache;
	sfp_t  sign = 1;
	
	// if a is less than one, we compute -log(1 / a)
	if (a < FP_ONE) {
		sign = -1;
		a = fpDiv(FP_ONE, a);
//		return (fp_t) (-1);
	}

	// this doesn't change in the series
	a = fpDiv(a - FP_ONE, a + FP_ONE);
	
	// first term is quite easy
	result = a;
	
	pwcache = a;
	a = fpMlt(a, a);
	
	// the series
	for (i = 0; i < (sizeof(logLut) / sizeof(logLut[0])); i++) {
		pwcache = fpMlt(pwcache, a);
		result += fpMlt(logLut[i], pwcache);
	}

	// multiply result by 2
	result <<= 1;

	// make negative, if a < FP_ONE
	return (sign < 0) ? -(sfp_t)result : (sfp_t)result;
}

const static uint16_t fact[] = {
	512, 1536, 6144, 30720
};

const static uint16_t eLut[] = {
	94, 256, 696, 1891, 5142, 13977, 37994
};

fp_t fpExp(fp_t a)
{
	fp_t b, c = FP_ONE;
	fp_t integer, fraction, result;
	uint8_t i = 0;
	
	// get integer part
	integer = a >> FP_FRACT_SIZE;
	fraction = a & (FP_ONE - 1);

	// not computable
	if (integer > FP_EXP_LIMIT) {
		return FP_NaN;
	}
	
	// multiply with precomputed value
	result = fpMlt(FP_ONE, eLut[integer + 1]);
	
	// nothing more to do
	if (fraction == 0) {
		return result;
	}

	// initialize values
	b = fraction;
	c = FP_ONE + fraction;
	
	// power series
	for(; i < (sizeof(fact) / sizeof(fact[0])); i++) {
		b = fpMlt(b, fraction);
		c += fpDiv(b, fact[i]);
	}

	return fpMlt(result, c);
}
