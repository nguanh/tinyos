#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 152 "/usr/lib/gcc/avr/4.1.2/include/stddef.h" 3
typedef int ptrdiff_t;
#line 214
typedef unsigned int size_t;
#line 326
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 121 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/stdint.h" 3
typedef int int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int uint8_t __attribute((__mode__(__QI__))) ;
typedef int int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int uint16_t __attribute((__mode__(__HI__))) ;
typedef int int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int uint32_t __attribute((__mode__(__SI__))) ;

typedef int int64_t __attribute((__mode__(__DI__))) ;
typedef unsigned int uint64_t __attribute((__mode__(__DI__))) ;
#line 142
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
#line 159
typedef int8_t int_least8_t;




typedef uint8_t uint_least8_t;




typedef int16_t int_least16_t;




typedef uint16_t uint_least16_t;




typedef int32_t int_least32_t;




typedef uint32_t uint_least32_t;







typedef int64_t int_least64_t;






typedef uint64_t uint_least64_t;
#line 213
typedef int8_t int_fast8_t;




typedef uint8_t uint_fast8_t;




typedef int16_t int_fast16_t;




typedef uint16_t uint_fast16_t;




typedef int32_t int_fast32_t;




typedef uint32_t uint_fast32_t;







typedef int64_t int_fast64_t;






typedef uint64_t uint_fast64_t;
#line 273
typedef int64_t intmax_t;




typedef uint64_t uintmax_t;
# 77 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/inttypes.h" 3
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;





static __inline uint8_t __nesc_ntoh_leuint8(const void * source)  ;




static __inline uint8_t __nesc_hton_leuint8(void * target, uint8_t value)  ;
#line 310
static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;






static __inline uint16_t __nesc_ntoh_leuint16(const void * source)  ;




static __inline uint16_t __nesc_hton_leuint16(void * target, uint16_t value)  ;
#line 340
static __inline uint32_t __nesc_ntoh_uint32(const void * source)  ;






static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;
#line 372
static __inline int32_t __nesc_ntoh_int32(const void * source)  ;
#line 372
static __inline int32_t __nesc_hton_int32(void * target, int32_t value)  ;
#line 431
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 121 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/string.h" 3
extern void *memset(void *arg_0x2b0109dac020, int arg_0x2b0109dac288, size_t arg_0x2b0109dac530);
# 71 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/stdlib.h" 3
#line 68
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;





#line 74
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;


typedef int (*__compar_fn_t)(const void *arg_0x2b0109dcb838, const void *arg_0x2b0109dcbb10);
# 25 "/opt/tinyos-2.x/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
#line 26
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;






struct __nesc_attr_atmostonce {
};
#line 37
struct __nesc_attr_atleastonce {
};
#line 38
struct __nesc_attr_exactlyonce {
};
# 239 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/avr/fuse.h" 3
#line 234
typedef struct __nesc_unnamed4245 {

  unsigned char low;
  unsigned char high;
  unsigned char extended;
} __fuse_t;
# 51 "/opt/tinyos-2.x/tos/types/TinyError.h"
enum __nesc_unnamed4246 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 211 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/avr/pgmspace.h" 3
typedef void prog_void __attribute((__progmem__)) ;
typedef char prog_char __attribute((__progmem__)) ;
typedef unsigned char prog_uchar __attribute((__progmem__)) ;

typedef int8_t prog_int8_t __attribute((__progmem__)) ;
typedef uint8_t prog_uint8_t __attribute((__progmem__)) ;
typedef int16_t prog_int16_t __attribute((__progmem__)) ;
typedef uint16_t prog_uint16_t __attribute((__progmem__)) ;
typedef int32_t prog_int32_t __attribute((__progmem__)) ;
typedef uint32_t prog_uint32_t __attribute((__progmem__)) ;

typedef int64_t prog_int64_t __attribute((__progmem__)) ;
typedef uint64_t prog_uint64_t __attribute((__progmem__)) ;
# 25 "/opt/tinyos-2.x/tos/chips/atm128/atm128const.h"
typedef uint8_t const_uint8_t __attribute((__progmem__)) ;
typedef uint16_t const_uint16_t __attribute((__progmem__)) ;
typedef uint32_t const_uint32_t __attribute((__progmem__)) ;
typedef int8_t const_int8_t __attribute((__progmem__)) ;
typedef int16_t const_int16_t __attribute((__progmem__)) ;
typedef int32_t const_int32_t __attribute((__progmem__)) ;
# 90 "/opt/tinyos-2.x/tos/chips/atm1281/atm128hardware.h"
static __inline void __nesc_enable_interrupt()  ;



static __inline void __nesc_disable_interrupt()  ;




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 110
__inline __nesc_atomic_t 
__nesc_atomic_start(void )   ;









#line 120
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)   ;







typedef uint8_t mcu_power_t  ;


enum __nesc_unnamed4247 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};


static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;
#line 155
#line 147
typedef struct __nesc_unnamed4248 {

  uint8_t porf : 1;
  uint8_t extrf : 1;
  uint8_t borf : 1;
  uint8_t wdrf : 1;
  uint8_t jtrf : 1;
  uint8_t resv1 : 3;
} Atm128_MCUSR_t;










#line 158
typedef struct __nesc_unnamed4249 {

  uint8_t srw00 : 1;
  uint8_t srw01 : 1;
  uint8_t srw10 : 1;
  uint8_t srw11 : 1;
  uint8_t srl : 3;
  uint8_t sre : 1;
} Atm128_XMCRA_t;







#line 169
typedef struct __nesc_unnamed4250 {

  uint8_t xmm : 3;
  uint8_t resv1 : 4;
  uint8_t xmbk : 1;
} Atm128_XMCRB_t;







typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;
# 82 "/opt/tinyos-2.x/tos/chips/atm1281/adc/Atm128Adc.h"
enum __nesc_unnamed4251 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_1_1 = 2, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4252 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4253 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 133
typedef struct __nesc_unnamed4254 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4255 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4256 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4257 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4258 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4259 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4260 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 189
typedef struct __nesc_unnamed4261 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adate : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;









#line 200
typedef struct __nesc_unnamed4262 {

  uint8_t adts : 3;
  uint8_t mux5 : 1;
  uint8_t resv1 : 2;
  uint8_t acme : 1;
  uint8_t resv2 : 1;
} Atm128Adcsrb_t;


typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 41 "/opt/tinyos-2.x/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4263 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4264 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4265 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4266 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 81 "/opt/tinyos-2.x/tos/chips/atm1281/timer/Atm128Timer.h"
enum __nesc_unnamed4267 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};


enum __nesc_unnamed4268 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4269 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};

enum __nesc_unnamed4270 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};



enum __nesc_unnamed4271 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4272 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};


enum __nesc_unnamed4273 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 168
#line 156
typedef union __nesc_unnamed4274 {

  uint8_t flat;
  struct __nesc_unnamed4275 {
    uint8_t wgm00 : 1;
    uint8_t wgm01 : 1;
    uint8_t resv1 : 2;
    uint8_t com0b0 : 1;
    uint8_t com0b1 : 1;
    uint8_t com0a0 : 1;
    uint8_t com0a1 : 1;
  } bits;
} Atm128_TCCR0A_t;
#line 183
#line 171
typedef union __nesc_unnamed4276 {

  uint8_t flat;
  struct __nesc_unnamed4277 {
    uint8_t cs00 : 1;
    uint8_t cs01 : 1;
    uint8_t cs02 : 2;
    uint8_t wgm02 : 1;
    uint8_t resv1 : 2;
    uint8_t foc0b : 1;
    uint8_t foc0a : 1;
  } bits;
} Atm128_TCCR0B_t;
#line 195
#line 186
typedef union __nesc_unnamed4278 {

  uint8_t flat;
  struct __nesc_unnamed4279 {
    uint8_t toie0 : 1;
    uint8_t ocie0a : 1;
    uint8_t ocie0e : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIMSK0_t;
#line 207
#line 198
typedef union __nesc_unnamed4280 {

  uint8_t flat;
  struct __nesc_unnamed4281 {
    uint8_t tov0 : 1;
    uint8_t ocf0a : 1;
    uint8_t ocf0b : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIFR0_t;
#line 223
#line 210
typedef union __nesc_unnamed4282 {

  uint8_t flat;
  struct __nesc_unnamed4283 {
    uint8_t tcr2bub : 1;
    uint8_t tcr2aub : 1;
    uint8_t ocr2bub : 1;
    uint8_t ocr2aub : 1;
    uint8_t tcn2ub : 1;
    uint8_t as2 : 1;
    uint8_t exclk : 1;
    uint8_t resv1 : 1;
  } bits;
} Atm128_ASSR_t;
#line 236
#line 226
typedef union __nesc_unnamed4284 {

  uint8_t flat;
  struct __nesc_unnamed4285 {
    uint8_t wgm20 : 1;
    uint8_t wgm21 : 1;
    uint8_t resv1 : 2;
    uint8_t comb : 2;
    uint8_t coma : 2;
  } bits;
} Atm128_TCCR2A_t;
#line 249
#line 239
typedef union __nesc_unnamed4286 {

  uint8_t flat;
  struct __nesc_unnamed4287 {
    uint8_t cs : 3;
    uint8_t wgm22 : 1;
    uint8_t resv1 : 2;
    uint8_t foc2b : 1;
    uint8_t foc2a : 1;
  } bits;
} Atm128_TCCR2B_t;
#line 261
#line 252
typedef union __nesc_unnamed4288 {

  uint8_t flat;
  struct __nesc_unnamed4289 {
    uint8_t toie : 1;
    uint8_t ociea : 1;
    uint8_t ocieb : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIMSK2_t;
#line 273
#line 264
typedef union __nesc_unnamed4290 {

  uint8_t flat;
  struct __nesc_unnamed4291 {
    uint8_t tov : 1;
    uint8_t ocfa : 1;
    uint8_t ocfb : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIFR2_t;
#line 286
#line 277
typedef union __nesc_unnamed4292 {

  uint8_t flat;
  struct __nesc_unnamed4293 {
    uint8_t wgm01 : 2;
    uint8_t comc : 2;
    uint8_t comb : 2;
    uint8_t coma : 2;
  } bits;
} Atm128_TCCRA_t;
#line 299
#line 289
typedef union __nesc_unnamed4294 {

  uint8_t flat;
  struct __nesc_unnamed4295 {
    uint8_t cs : 3;
    uint8_t wgm23 : 2;
    uint8_t resv1 : 1;
    uint8_t ices : 1;
    uint8_t icnc : 1;
  } bits;
} Atm128_TCCRB_t;
#line 311
#line 302
typedef union __nesc_unnamed4296 {

  uint8_t flat;
  struct __nesc_unnamed4297 {
    uint8_t resv1 : 5;
    uint8_t focc : 1;
    uint8_t focb : 1;
    uint8_t foca : 1;
  } bits;
} Atm128_TCCRC_t;
#line 326
#line 314
typedef union __nesc_unnamed4298 {

  uint8_t flat;
  struct __nesc_unnamed4299 {
    uint8_t toie : 1;
    uint8_t ociea : 1;
    uint8_t ocieb : 1;
    uint8_t ociec : 1;
    uint8_t resv1 : 1;
    uint8_t icie : 1;
    uint8_t resv2 : 2;
  } bits;
} Atm128_TIMSK_t;
#line 341
#line 329
typedef union __nesc_unnamed4300 {

  uint8_t flat;
  struct __nesc_unnamed4301 {
    uint8_t tov : 1;
    uint8_t ocfa : 1;
    uint8_t ocfb : 1;
    uint8_t ocfc : 1;
    uint8_t resv1 : 1;
    uint8_t icf : 1;
    uint8_t resv2 : 2;
  } bits;
} Atm128_TIFR_t;
#line 353
#line 344
typedef union __nesc_unnamed4302 {

  uint8_t flat;
  struct __nesc_unnamed4303 {
    uint8_t psrsync : 1;
    uint8_t psrasy : 1;
    uint8_t resv1 : 5;
    uint8_t tsm : 1;
  } bits;
} Atm128_GTCCR_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;
typedef uint8_t Atm128_TCNT4H_t;
typedef uint8_t Atm128_TCNT4L_t;
typedef uint8_t Atm128_TCNT5H_t;
typedef uint8_t Atm128_TCNT5L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_OCR4AH_t;
typedef uint8_t Atm128_OCR4AL_t;
typedef uint8_t Atm128_OCR4BH_t;
typedef uint8_t Atm128_OCR4BL_t;
typedef uint8_t Atm128_OCR4CH_t;
typedef uint8_t Atm128_OCR4CL_t;


typedef uint8_t Atm128_OCR5AH_t;
typedef uint8_t Atm128_OCR5AL_t;
typedef uint8_t Atm128_OCR5BH_t;
typedef uint8_t Atm128_OCR5BL_t;
typedef uint8_t Atm128_OCR5CH_t;
typedef uint8_t Atm128_OCR5CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
typedef uint8_t Atm128_ICR4H_t;
typedef uint8_t Atm128_ICR4L_t;
typedef uint8_t Atm128_ICR5H_t;
typedef uint8_t Atm128_ICR5L_t;
# 85 "/opt/tinyos-2.x/tos/platforms/iris/MicaTimer.h"
typedef struct __nesc_unnamed4304 {
} 
#line 85
T64khz;
typedef struct __nesc_unnamed4305 {
} 
#line 86
T128khz;
typedef struct __nesc_unnamed4306 {
} 
#line 87
T2mhz;
typedef struct __nesc_unnamed4307 {
} 
#line 88
T4mhz;
#line 158
typedef TMicro TOne;
typedef TMicro TThree;
typedef uint32_t counter_one_overflow_t;
typedef uint16_t counter_three_overflow_t;
enum __nesc_unnamed4308 {
  MICA_PRESCALER_ONE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_ONE_FOR_32KHZ_LOG2 = 5, 
  MICA_PRESCALER_THREE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_THREE_FOR_MICRO_LOG2 = 0, 
  EXT_STANDBY_T0_THRESHOLD = 12
};





enum __nesc_unnamed4309 {
  PLATFORM_MHZ = 8
};
# 62 "/opt/tinyos-2.x/tos/platforms/micaz/hardware.h"
enum __nesc_unnamed4310 {
  TOS_SLEEP_NONE = ATM128_POWER_IDLE
};


enum __nesc_unnamed4311 {
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1
};


enum __nesc_unnamed4312 {
  PLATFORM_BAUDRATE = 57600L
};
# 6 "/opt/tinyos-2.x/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4313 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4314 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 83 "/opt/tinyos-2.x/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4315 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4316 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4317 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 121
#line 109
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 123
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 131
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 136
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 5 "../../../Reporting/Reporting.h"
enum __nesc_unnamed4318 {
  CID_ENERGY_REPORT = 13, 
  CID_ORINOCO_STATS_REPORT = 14, 
  CID_ORINOCO_DEBUG_REPORT = 15, 
  CID_SUNSHINE_CONFIG_REPORT = 16, 
  CID_ORINOCO_CONFIG_REPORT = 17, 
  CID_HARVEST_FORECAST_REPORT = 18
};
#line 34
typedef uint16_t data_seqno_t;
typedef nx_uint16_t nx_data_seqno_t;
# 41 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayer.h"
#line 38
typedef nx_struct rf230_header_t {

  nxle_uint8_t length;
} __attribute__((packed)) rf230_header_t;









#line 43
typedef struct rf230_metadata_t {

  uint8_t lqi;
  union  {

    uint8_t power;
    uint8_t rssi;
  } ;
} rf230_metadata_t;

enum rf230_registers_enum {

  RF230_TRX_STATUS = 0x01, 
  RF230_TRX_STATE = 0x02, 
  RF230_TRX_CTRL_0 = 0x03, 
  RF230_PHY_TX_PWR = 0x05, 
  RF230_PHY_RSSI = 0x06, 
  RF230_PHY_ED_LEVEL = 0x07, 
  RF230_PHY_CC_CCA = 0x08, 
  RF230_CCA_THRES = 0x09, 
  RF230_IRQ_MASK = 0x0E, 
  RF230_IRQ_STATUS = 0x0F, 
  RF230_VREG_CTRL = 0x10, 
  RF230_BATMON = 0x11, 
  RF230_XOSC_CTRL = 0x12, 
  RF230_PLL_CF = 0x1A, 
  RF230_PLL_DCU = 0x1B, 
  RF230_PART_NUM = 0x1C, 
  RF230_VERSION_NUM = 0x1D, 
  RF230_MAN_ID_0 = 0x1E, 
  RF230_MAN_ID_1 = 0x1F, 
  RF230_SHORT_ADDR_0 = 0x20, 
  RF230_SHORT_ADDR_1 = 0x21, 
  RF230_PAN_ID_0 = 0x22, 
  RF230_PAN_ID_1 = 0x23, 
  RF230_IEEE_ADDR_0 = 0x24, 
  RF230_IEEE_ADDR_1 = 0x25, 
  RF230_IEEE_ADDR_2 = 0x26, 
  RF230_IEEE_ADDR_3 = 0x27, 
  RF230_IEEE_ADDR_4 = 0x28, 
  RF230_IEEE_ADDR_5 = 0x29, 
  RF230_IEEE_ADDR_6 = 0x2A, 
  RF230_IEEE_ADDR_7 = 0x2B, 
  RF230_XAH_CTRL = 0x2C, 
  RF230_CSMA_SEED_0 = 0x2D, 
  RF230_CSMA_SEED_1 = 0x2E
};

enum rf230_trx_register_enums {

  RF230_CCA_DONE = 1 << 7, 
  RF230_CCA_STATUS = 1 << 6, 
  RF230_TRX_STATUS_MASK = 0x1F, 
  RF230_P_ON = 0, 
  RF230_BUSY_RX = 1, 
  RF230_BUSY_TX = 2, 
  RF230_RX_ON = 6, 
  RF230_TRX_OFF = 8, 
  RF230_PLL_ON = 9, 
  RF230_SLEEP = 15, 
  RF230_BUSY_RX_AACK = 17, 
  RF230_BUSR_TX_ARET = 18, 
  RF230_RX_AACK_ON = 22, 
  RF230_TX_ARET_ON = 25, 
  RF230_RX_ON_NOCLK = 28, 
  RF230_AACK_ON_NOCLK = 29, 
  RF230_BUSY_RX_AACK_NOCLK = 30, 
  RF230_STATE_TRANSITION_IN_PROGRESS = 31, 
  RF230_TRAC_STATUS_MASK = 0xE0, 
  RF230_TRAC_SUCCESS = 0, 
  RF230_TRAC_SUCCESS_DATA_PENDING = 1 << 5, 
  RF230_TRAC_CHANNEL_ACCESS_FAILURE = 3 << 5, 
  RF230_TRAC_NO_ACK = 5 << 5, 
  RF230_TRAC_INVALID = 7 << 5, 
  RF230_TRX_CMD_MASK = 0x1F, 
  RF230_NOP = 0, 
  RF230_TX_START = 2, 
  RF230_FORCE_TRX_OFF = 3
};

enum rf230_phy_register_enums {

  RF230_TX_AUTO_CRC_ON = 1 << 7, 
  RF230_TX_PWR_MASK = 0x0F, 
  RF230_RSSI_MASK = 0x1F, 
  RF230_CCA_REQUEST = 1 << 7, 
  RF230_CCA_MODE_0 = 0 << 5, 
  RF230_CCA_MODE_1 = 1 << 5, 
  RF230_CCA_MODE_2 = 2 << 5, 
  RF230_CCA_MODE_3 = 3 << 5, 
  RF230_CHANNEL_MASK = 0x1F, 
  RF230_CCA_CS_THRES_SHIFT = 4, 
  RF230_CCA_ED_THRES_SHIFT = 0
};

enum rf230_irq_register_enums {

  RF230_IRQ_BAT_LOW = 1 << 7, 
  RF230_IRQ_TRX_UR = 1 << 6, 
  RF230_IRQ_TRX_END = 1 << 3, 
  RF230_IRQ_RX_START = 1 << 2, 
  RF230_IRQ_PLL_UNLOCK = 1 << 1, 
  RF230_IRQ_PLL_LOCK = 1 << 0
};

enum rf230_control_register_enums {

  RF230_AVREG_EXT = 1 << 7, 
  RF230_AVDD_OK = 1 << 6, 
  RF230_DVREG_EXT = 1 << 3, 
  RF230_DVDD_OK = 1 << 2, 
  RF230_BATMON_OK = 1 << 5, 
  RF230_BATMON_VHR = 1 << 4, 
  RF230_BATMON_VTH_MASK = 0x0F, 
  RF230_XTAL_MODE_OFF = 0 << 4, 
  RF230_XTAL_MODE_EXTERNAL = 4 << 4, 
  RF230_XTAL_MODE_INTERNAL = 15 << 4
};

enum rf230_pll_register_enums {

  RF230_PLL_CF_START = 1 << 7, 
  RF230_PLL_DCU_START = 1 << 7
};

enum rf230_spi_command_enums {

  RF230_CMD_REGISTER_READ = 0x80, 
  RF230_CMD_REGISTER_WRITE = 0xC0, 
  RF230_CMD_REGISTER_MASK = 0x3F, 
  RF230_CMD_FRAME_READ = 0x20, 
  RF230_CMD_FRAME_WRITE = 0x60, 
  RF230_CMD_SRAM_READ = 0x00, 
  RF230_CMD_SRAM_WRITE = 0x40
};
# 251 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/util/crc16.h" 3
#line 250
static __inline uint16_t 
_crc_ccitt_update(uint16_t __crc, uint8_t __data);
# 42 "/opt/tinyos-2.x/tos/platforms/iris/chips/rf230/RadioConfig.h"
enum __nesc_unnamed4319 {





  RF230_TRX_CTRL_0_VALUE = 0, 





  RF230_CCA_MODE_VALUE = RF230_CCA_MODE_3, 





  RF230_CCA_THRES_VALUE = 0xC7
};
#line 82
static __inline uint16_t RF230_CRCBYTE_COMMAND(uint16_t crc, uint8_t data);







typedef TOne TRadio;
typedef uint16_t tradio_size;
# 45 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayer.h"
#line 42
typedef nx_struct network_header_t {

  nxle_uint8_t network;
} __attribute__((packed)) network_header_t;
# 40 "/opt/tinyos-2.x/tos/types/IeeeEui64.h"
enum __nesc_unnamed4320 {
#line 40
  IEEE_EUI64_LENGTH = 8
};


#line 42
typedef struct ieee_eui64 {
  uint8_t data[IEEE_EUI64_LENGTH];
} ieee_eui64_t;
# 47 "/opt/tinyos-2.x/tos/types/Ieee154.h"
typedef uint16_t ieee154_panid_t;
typedef uint16_t ieee154_saddr_t;
typedef ieee_eui64_t ieee154_laddr_t;







#line 51
typedef struct __nesc_unnamed4321 {
  uint8_t ieee_mode : 2;
  union __nesc_unnamed4322 {
    ieee154_saddr_t saddr;
    ieee154_laddr_t laddr;
  } ieee_addr;
} ieee154_addr_t;



enum __nesc_unnamed4323 {
  IEEE154_BROADCAST_ADDR = 0xffff, 
  IEEE154_LINK_MTU = 127
};

struct ieee154_frame_addr {
  ieee154_addr_t ieee_src;
  ieee154_addr_t ieee_dst;
  ieee154_panid_t ieee_dstpan;
};

enum __nesc_unnamed4324 {
  IEEE154_MIN_HDR_SZ = 6
};
#line 86
enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3, 
  IEEE154_TYPE_MASK = 7
};

enum ieee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3, 
  IEEE154_ADDR_MASK = 3
};
# 47 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.h"
#line 40
typedef nx_struct ieee154_simple_header_t {

  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;
} __attribute__((packed)) ieee154_simple_header_t;
# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayer.h"
#line 40
typedef nx_struct activemessage_header_t {

  nx_am_id_t type;
} __attribute__((packed)) activemessage_header_t;
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayer.h"
#line 38
typedef struct flags_metadata_t {


  uint8_t flags;
} flags_metadata_t;
# 41 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TimeStampingLayer.h"
#line 38
typedef struct timestamp_metadata_t {

  uint32_t timestamp;
} timestamp_metadata_t;
# 41 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/LowPowerListeningLayer.h"
#line 38
typedef struct lpl_metadata_t {

  uint16_t sleepint;
} lpl_metadata_t;
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/PacketLinkLayer.h"
#line 38
typedef struct link_metadata_t {

  uint16_t maxRetries;
  uint16_t retryDelay;
} link_metadata_t;
# 58 "/opt/tinyos-2.x/tos/chips/rf230/RF230Radio.h"
#line 48
typedef nx_struct rf230packet_header_t {

  rf230_header_t rf230;
  ieee154_simple_header_t ieee154;

  network_header_t network;


  activemessage_header_t am;
} __attribute__((packed)) 
rf230packet_header_t;




#line 60
typedef nx_struct rf230packet_footer_t {
} __attribute__((packed)) 

rf230packet_footer_t;
#line 76
#line 65
typedef struct rf230packet_metadata_t {







  timestamp_metadata_t timestamp;
  flags_metadata_t flags;
  rf230_metadata_t rf230;
} rf230packet_metadata_t;
# 43 "/opt/tinyos-2.x/tos/platforms/iris/platform_message.h"
#line 40
typedef union message_header {
  rf230packet_header_t rf230;
  serial_header_t serial;
} message_header_t;



#line 45
typedef union message_footer {
  rf230packet_footer_t rf230;
} message_footer_t;



#line 49
typedef union message_metadata {
  rf230packet_metadata_t rf230;
} message_metadata_t;
# 19 "/opt/tinyos-2.x/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[80];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 45 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TimeSyncMessageLayer.h"
typedef nx_int32_t timesync_relative_t;


typedef nx_uint32_t timesync_absolute_t;









#line 50
typedef nx_struct timesync_footer_t {

  nx_am_id_t type;
  nx_union timestamp_t {

    timesync_relative_t relative;
    timesync_absolute_t absolute;
  } __attribute__((packed)) timestamp;
} __attribute__((packed)) timesync_footer_t;
# 49 "../../lib/net/orinoco/Orinoco.h"
enum __nesc_unnamed4325 {
  ORINOCO_AM_BEACON = 128, 
  ORINOCO_AM_DATA = 129
};


enum __nesc_unnamed4326 {
  ORINOCO_DFLT_WAKEUP_INTERVAL = 512, 
  ORINOCO_DFLT_WAKEUP_DEVIATION = 10, 
  ORINOCO_DFLT_CONGESTION_WIN_MIN = 8, 
  ORINOCO_DFLT_CONGESTION_WIN_MAX = 32, 
  ORINOCO_ACK_WAITING_TIME = 2, 
  ORINOCO_DATA_WAITING_TIME = 4, 
  ORINOCO_DFLT_NUM_WAITING_INTVL = 3, 
  ORINOCO_DFLT_MIN_QUEUE_LEVEL = 1
};


enum __nesc_unnamed4327 {
  ORINOCO_WAKEUP_INTERVAL_MIN = 128, 
  ORINOCO_WAKEUP_INTERVAL_MAX = 5120
};


typedef uint8_t collection_id_t;
typedef nx_uint8_t nx_collection_id_t;


typedef uint8_t orinoco_pathcost_t;
typedef nx_uint8_t nx_orinoco_pathcost_t;

enum __nesc_unnamed4328 {
  ORINOCO_PATHCOST_SINK = 0x00, 
  ORINOCO_PATHCOST_INF = 0xFF
};






enum __nesc_unnamed4329 {
  ORINOCO_MAX_PATH_RECORD = 7
};










#line 93
typedef nx_struct __nesc_unnamed4330 {
  nx_am_addr_t origin;
  nx_uint8_t seqno;
  nx_uint8_t hopCnt;
  nx_collection_id_t type;
  nx_uint8_t path[ORINOCO_MAX_PATH_RECORD];
  nx_union __nesc_unnamed4331 {
    timesync_relative_t relative;
    timesync_absolute_t absolute;
  } __attribute__((packed)) timestamp;
} __attribute__((packed)) orinoco_data_header_t;










#line 110
typedef struct __nesc_unnamed4332 {
  am_addr_t origin;
  uint8_t seqno;
  uint8_t hopCnt;
} mc_entry_t;




#line 117
typedef struct __nesc_unnamed4333 {
  message_t * msg;
} mq_entry_t;









enum __nesc_unnamed4334 {
  ORINOCO_MIN_RSSI = 2
};
# 43 "/opt/tinyos-2.x/tos/types/Leds.h"
enum __nesc_unnamed4335 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 59 "../../lib/net/orinoco/OrinocoStatistics.h"
#line 56
typedef struct __nesc_unnamed4336 {
  uint16_t numPacketsDropped;
  uint16_t numDuplicates;
} orinoco_queue_statistics_t;








#line 62
typedef struct __nesc_unnamed4337 {
  uint32_t avgCreationRate;
  uint32_t avgReceptionRate;
  uint32_t avgForwardDelay;
  uint16_t avgTxBurstLen;
  uint16_t avgRxBurstLen;
} orinoco_traffic_statistics_t;
#line 84
#line 73
typedef struct __nesc_unnamed4338 {
  uint32_t numTxBeacons;
  uint32_t numTxAckBeacons;
  uint16_t numTxBeaconsFail;
  uint32_t numRxBeacons;
  uint32_t numIgnoredBeacons;
  uint32_t numTxPackets;
  uint16_t numTxPacketsFail;
  uint32_t numRxPackets;
  uint16_t numTxTimeouts;
  uint16_t numMetricResets;
} orinoco_packet_statistics_t;
# 11 "../../lib/net/orinoco/OrinocoBeaconMsg.h"
#line 8
typedef nx_struct OrinocoBeaconMsg {
  nx_orinoco_pathcost_t cost;
  nx_uint8_t cw;
} __attribute__((packed)) OrinocoBeaconMsg;
# 8 "../../../Tools/Statistics.h"
uint16_t ewmaFilter16(uint16_t old, uint16_t cur, uint8_t filter);

uint32_t ewmaFilter32(uint32_t old, uint32_t cur, uint8_t filter);
# 33 "/opt/tinyos-2.x/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 41 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.h"
enum __nesc_unnamed4339 {
  ATM128_SPI_CLK_DIVIDE_4 = 0, 
  ATM128_SPI_CLK_DIVIDE_16 = 1, 
  ATM128_SPI_CLK_DIVIDE_64 = 2, 
  ATM128_SPI_CLK_DIVIDE_128 = 3
};
#line 58
#line 49
typedef struct __nesc_unnamed4340 {
  uint8_t spie : 1;
  uint8_t spe : 1;
  uint8_t dord : 1;
  uint8_t mstr : 1;
  uint8_t cpol : 1;
  uint8_t cpha : 1;
  uint8_t spr : 2;
} 
Atm128SPIControl_s;



#line 59
typedef union __nesc_unnamed4341 {
  uint8_t flat;
  Atm128SPIControl_s bits;
} Atm128SPIControl_t;

typedef Atm128SPIControl_t Atm128_SPCR_t;








#line 67
typedef struct __nesc_unnamed4342 {
  uint8_t spif : 1;
  uint8_t wcol : 1;
  uint8_t rsvd : 5;
  uint8_t spi2x : 1;
} 
Atm128SPIStatus_s;



#line 74
typedef union __nesc_unnamed4343 {
  uint8_t flat;
  Atm128SPIStatus_s bits;
} Atm128SPIStatus_t;

typedef Atm128SPIStatus_t Atm128_SPSR_t;

typedef uint8_t Atm128_SPDR_t;
# 6 "../../../EAJobs/lib/EAJob.h"
typedef uint8_t jobid_t;
typedef uint8_t jobtype_t;
enum __nesc_unnamed4344 {
  EA_JOBTYPE_PERIODIC = 0
};



#line 12
typedef struct ea_generic_jobconfig_t {
  jobtype_t type;
} ea_generic_jobconfig_t;




#line 16
typedef struct ea_periodic_jobconfig_t {
  jobtype_t type;
  uint32_t period;
} ea_periodic_jobconfig_t;
# 50 "/opt/tinyos-2.x/tos/chips/atm128/crc.h"
uint16_t crcTable[256] __attribute((__progmem__))  = { 
0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50a5, 0x60c6, 0x70e7, 
0x8108, 0x9129, 0xa14a, 0xb16b, 0xc18c, 0xd1ad, 0xe1ce, 0xf1ef, 
0x1231, 0x0210, 0x3273, 0x2252, 0x52b5, 0x4294, 0x72f7, 0x62d6, 
0x9339, 0x8318, 0xb37b, 0xa35a, 0xd3bd, 0xc39c, 0xf3ff, 0xe3de, 
0x2462, 0x3443, 0x0420, 0x1401, 0x64e6, 0x74c7, 0x44a4, 0x5485, 
0xa56a, 0xb54b, 0x8528, 0x9509, 0xe5ee, 0xf5cf, 0xc5ac, 0xd58d, 
0x3653, 0x2672, 0x1611, 0x0630, 0x76d7, 0x66f6, 0x5695, 0x46b4, 
0xb75b, 0xa77a, 0x9719, 0x8738, 0xf7df, 0xe7fe, 0xd79d, 0xc7bc, 
0x48c4, 0x58e5, 0x6886, 0x78a7, 0x0840, 0x1861, 0x2802, 0x3823, 
0xc9cc, 0xd9ed, 0xe98e, 0xf9af, 0x8948, 0x9969, 0xa90a, 0xb92b, 
0x5af5, 0x4ad4, 0x7ab7, 0x6a96, 0x1a71, 0x0a50, 0x3a33, 0x2a12, 
0xdbfd, 0xcbdc, 0xfbbf, 0xeb9e, 0x9b79, 0x8b58, 0xbb3b, 0xab1a, 
0x6ca6, 0x7c87, 0x4ce4, 0x5cc5, 0x2c22, 0x3c03, 0x0c60, 0x1c41, 
0xedae, 0xfd8f, 0xcdec, 0xddcd, 0xad2a, 0xbd0b, 0x8d68, 0x9d49, 
0x7e97, 0x6eb6, 0x5ed5, 0x4ef4, 0x3e13, 0x2e32, 0x1e51, 0x0e70, 
0xff9f, 0xefbe, 0xdfdd, 0xcffc, 0xbf1b, 0xaf3a, 0x9f59, 0x8f78, 
0x9188, 0x81a9, 0xb1ca, 0xa1eb, 0xd10c, 0xc12d, 0xf14e, 0xe16f, 
0x1080, 0x00a1, 0x30c2, 0x20e3, 0x5004, 0x4025, 0x7046, 0x6067, 
0x83b9, 0x9398, 0xa3fb, 0xb3da, 0xc33d, 0xd31c, 0xe37f, 0xf35e, 
0x02b1, 0x1290, 0x22f3, 0x32d2, 0x4235, 0x5214, 0x6277, 0x7256, 
0xb5ea, 0xa5cb, 0x95a8, 0x8589, 0xf56e, 0xe54f, 0xd52c, 0xc50d, 
0x34e2, 0x24c3, 0x14a0, 0x0481, 0x7466, 0x6447, 0x5424, 0x4405, 
0xa7db, 0xb7fa, 0x8799, 0x97b8, 0xe75f, 0xf77e, 0xc71d, 0xd73c, 
0x26d3, 0x36f2, 0x0691, 0x16b0, 0x6657, 0x7676, 0x4615, 0x5634, 
0xd94c, 0xc96d, 0xf90e, 0xe92f, 0x99c8, 0x89e9, 0xb98a, 0xa9ab, 
0x5844, 0x4865, 0x7806, 0x6827, 0x18c0, 0x08e1, 0x3882, 0x28a3, 
0xcb7d, 0xdb5c, 0xeb3f, 0xfb1e, 0x8bf9, 0x9bd8, 0xabbb, 0xbb9a, 
0x4a75, 0x5a54, 0x6a37, 0x7a16, 0x0af1, 0x1ad0, 0x2ab3, 0x3a92, 
0xfd2e, 0xed0f, 0xdd6c, 0xcd4d, 0xbdaa, 0xad8b, 0x9de8, 0x8dc9, 
0x7c26, 0x6c07, 0x5c64, 0x4c45, 0x3ca2, 0x2c83, 0x1ce0, 0x0cc1, 
0xef1f, 0xff3e, 0xcf5d, 0xdf7c, 0xaf9b, 0xbfba, 0x8fd9, 0x9ff8, 
0x6e17, 0x7e36, 0x4e55, 0x5e74, 0x2e93, 0x3eb2, 0x0ed1, 0x1ef0 };









static uint16_t crcByte(uint16_t oldCrc, uint8_t byte) __attribute((noinline))  ;
# 41 "/opt/tinyos-2.x/tos/chips/atm128/Atm128Uart.h"
typedef uint8_t Atm128_UDR0_t;
typedef uint8_t Atm128_UDR1_t;
#line 57
#line 45
typedef union __nesc_unnamed4345 {
  struct Atm128_UCSRA_t {
    uint8_t mpcm : 1;
    uint8_t u2x : 1;
    uint8_t upe : 1;
    uint8_t dor : 1;
    uint8_t fe : 1;
    uint8_t udre : 1;
    uint8_t txc : 1;
    uint8_t rxc : 1;
  } bits;
  uint8_t flat;
} Atm128UartStatus_t;

typedef Atm128UartStatus_t Atm128_UCSR0A_t;
typedef Atm128UartStatus_t Atm128_UCSR1A_t;
#line 75
#line 63
typedef union __nesc_unnamed4346 {
  struct Atm128_UCSRB_t {
    uint8_t txb8 : 1;
    uint8_t rxb8 : 1;
    uint8_t ucsz2 : 1;
    uint8_t txen : 1;
    uint8_t rxen : 1;
    uint8_t udrie : 1;
    uint8_t txcie : 1;
    uint8_t rxcie : 1;
  } bits;
  uint8_t flat;
} Atm128UartControl_t;

typedef Atm128UartControl_t Atm128_UCSR0B_t;
typedef Atm128UartControl_t Atm128_UCSR1B_t;

enum __nesc_unnamed4347 {
  ATM128_UART_DATA_SIZE_5_BITS = 0, 
  ATM128_UART_DATA_SIZE_6_BITS = 1, 
  ATM128_UART_DATA_SIZE_7_BITS = 2, 
  ATM128_UART_DATA_SIZE_8_BITS = 3
};
#line 98
#line 88
typedef union __nesc_unnamed4348 {
  uint8_t flat;
  struct Atm128_UCSRC_t {
    uint8_t ucpol : 1;
    uint8_t ucsz : 2;
    uint8_t usbs : 1;
    uint8_t upm : 2;
    uint8_t umsel : 1;
    uint8_t rsvd : 1;
  } bits;
} Atm128UartMode_t;

typedef Atm128UartMode_t Atm128_UCSR0C_t;
typedef Atm128UartMode_t Atm128_UCSR1C_t;





enum __nesc_unnamed4349 {
  ATM128_19200_BAUD_4MHZ = 12, 
  ATM128_38400_BAUD_4MHZ = 6, 
  ATM128_57600_BAUD_4MHZ = 3, 

  ATM128_19200_BAUD_4MHZ_2X = 25, 
  ATM128_38400_BAUD_4MHZ_2X = 12, 
  ATM128_57600_BAUD_4MHZ_2X = 8, 

  ATM128_19200_BAUD_7MHZ = 23, 
  ATM128_38400_BAUD_7MHZ = 11, 
  ATM128_57600_BAUD_7MHZ = 7, 

  ATM128_19200_BAUD_7MHZ_2X = 47, 
  ATM128_38400_BAUD_7MHZ_2X = 23, 
  ATM128_57600_BAUD_7MHZ_2X = 15, 

  ATM128_19200_BAUD_8MHZ = 25, 
  ATM128_38400_BAUD_8MHZ = 12, 
  ATM128_57600_BAUD_8MHZ = 8, 

  ATM128_19200_BAUD_8MHZ_2X = 51, 
  ATM128_38400_BAUD_8MHZ_2X = 34, 
  ATM128_57600_BAUD_8MHZ_2X = 11
};

typedef uint8_t Atm128_UBRR0L_t;
typedef uint8_t Atm128_UBRR0H_t;

typedef uint8_t Atm128_UBRR1L_t;
typedef uint8_t Atm128_UBRR1H_t;

typedef uint8_t uart_parity_t;
typedef uint8_t uart_speed_t;
typedef uint8_t uart_duplex_t;

enum __nesc_unnamed4350 {
  TOS_UART_PARITY_NONE = 0, 
  TOS_UART_PARITY_EVEN = 1, 
  TOS_UART_PARITY_ODD = 2
};

enum __nesc_unnamed4351 {
  TOS_UART_19200 = 0, 
  TOS_UART_38400 = 1, 
  TOS_UART_57600 = 2
};

enum __nesc_unnamed4352 {
  TOS_UART_OFF = 0, 
  TOS_UART_RONLY = 1, 
  TOS_UART_TONLY = 2, 
  TOS_UART_DUPLEX = 3
};
# 54 "../../../Reporting/OrinocoStatsReportingMsg.h"
#line 45
typedef nx_struct OrinocoStatsReportingMsg {
  nx_data_seqno_t seqno;
  nx_struct __nesc_unnamed4353 {
    nx_uint16_t avgCreationIntvl;
    nx_uint16_t avgReceptionIntvl;
    nx_uint32_t avgForwardDelay;
    nx_uint8_t avgTxBurstLen;
    nx_uint8_t avgRxBurstLen;
  } __attribute__((packed)) ts;
} __attribute__((packed)) OrinocoStatsReportingMsg;
# 63 "../../../Reporting/OrinocoDebugReportingMsg.h"
#line 45
typedef nx_struct OrinocoDebugReportingMsg {
  nx_data_seqno_t seqno;
  nx_struct __nesc_unnamed4354 {
    nx_uint16_t numPacketsDropped;
    nx_uint16_t numDuplicates;
  } __attribute__((packed)) qs;
  nx_struct __nesc_unnamed4355 {
    nx_uint32_t numTxBeacons;
    nx_uint32_t numTxAckBeacons;
    nx_uint16_t numTxBeaconsFail;
    nx_uint32_t numRxBeacons;
    nx_uint32_t numIgnoredBeacons;
    nx_uint32_t numTxPackets;
    nx_uint16_t numTxPacketsFail;
    nx_uint32_t numRxPackets;
    nx_uint16_t numTxTimeouts;
    nx_uint16_t numMetricResets;
  } __attribute__((packed)) ps;
} __attribute__((packed)) OrinocoDebugReportingMsg;
typedef TMilli SinkP__AliveTimer__precision_tag;
typedef TMilli SinkP__PacketDelayMilli__precision_tag;
enum HilTimerMilliC____nesc_unnamed4356 {
  HilTimerMilliC__TIMER_COUNT = 4U
};
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__precision;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__GetNow__data_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__timer_size;
typedef uint8_t HplAtm1281Timer2AsyncP__Compare__size_type;
typedef uint8_t HplAtm1281Timer2AsyncP__Timer__timer_size;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
typedef TMilli OrinocoQueueP__PacketDelayMilli__precision_tag;
typedef mq_entry_t OrinocoQueueP__SendQueue__t;
typedef mc_entry_t OrinocoQueueP__CacheCompare__cache_t;
typedef uint8_t OrinocoQueueP__PacketTimeSyncOffset__value_type;
typedef TRadio OrinocoQueueP__PacketTimeStampRadio__precision_tag;
typedef uint32_t OrinocoQueueP__PacketTimeStampRadio__size_type;
typedef TRadio OrinocoQueueP__LocalTimeRadio__precision_tag;
typedef TMilli OrinocoQueueP__LocalTimeMilli__precision_tag;
typedef message_t OrinocoQueueP__MsgPool__t;
typedef const orinoco_queue_statistics_t *OrinocoQueueP__QueueStatistics__val_t;
typedef mc_entry_t OrinocoQueueP__PacketHistory__t;
typedef uint8_t OrinocoRadioP__PacketRSSI__value_type;
typedef const orinoco_packet_statistics_t *OrinocoRadioP__PacketStatistics__val_t;
typedef uint8_t OrinocoRadioP__PacketLinkQuality__value_type;
typedef TMilli OrinocoRadioP__Timer__precision_tag;
typedef TRadio RF230RadioP__PacketTimeStamp__precision_tag;
typedef uint32_t RF230RadioP__PacketTimeStamp__size_type;
typedef TRadio /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__precision_tag;
typedef tradio_size /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type;
typedef TRadio /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__precision_tag;
typedef uint32_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__size_type;
typedef TRadio /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__LocalTimeRadio__precision_tag;
typedef TMilli /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__LocalTimeMilli__precision_tag;
typedef TMilli /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampMilli__precision_tag;
typedef uint32_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampMilli__size_type;
typedef TMicro RF230DriverLayerP__BusyWait__precision_tag;
typedef uint16_t RF230DriverLayerP__BusyWait__size_type;
typedef uint8_t RF230DriverLayerP__PacketRSSI__value_type;
typedef TRadio RF230DriverLayerP__PacketTimeStamp__precision_tag;
typedef uint32_t RF230DriverLayerP__PacketTimeStamp__size_type;
typedef TRadio RF230DriverLayerP__LocalTime__precision_tag;
typedef uint8_t RF230DriverLayerP__PacketTransmitPower__value_type;
typedef uint8_t RF230DriverLayerP__PacketTimeSyncOffset__value_type;
typedef uint8_t RF230DriverLayerP__PacketLinkQuality__value_type;
typedef uint16_t HplRF230P__Capture__size_type;
typedef uint16_t HplAtm1281Timer1P__CompareA__size_type;
typedef uint16_t HplAtm1281Timer1P__Capture__size_type;
typedef uint16_t HplAtm1281Timer1P__CompareB__size_type;
typedef uint16_t HplAtm1281Timer1P__CompareC__size_type;
typedef uint16_t HplAtm1281Timer1P__Timer__timer_size;
typedef uint16_t /*InitOneP.InitOne*/Atm128TimerInitC__0__timer_size;
typedef /*InitOneP.InitOne*/Atm128TimerInitC__0__timer_size /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size;
typedef TOne /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__frequency_tag;
typedef uint16_t /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size;
typedef /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__frequency_tag /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__precision_tag;
typedef /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__size_type;
typedef /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__size_type;
typedef /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__timer_size;
enum /*HplRF230C.AlarmC*/AlarmOne16C__0____nesc_unnamed4357 {
  AlarmOne16C__0__COMPARE_ID = 0U
};
typedef TOne /*CounterOne16C.NCounter*/Atm128CounterC__0__frequency_tag;
typedef uint16_t /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__frequency_tag /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__precision_tag;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__size_type;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size;
typedef TMicro /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type;
typedef TMicro /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_precision_tag;
typedef uint16_t /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_size_type;
typedef uint32_t /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__upper_count_type;
typedef /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_precision_tag /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__size_type;
typedef /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_precision_tag /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__precision_tag;
typedef /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__size_type;
typedef TMicro /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag;
typedef /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__precision_tag;
typedef /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__precision_tag;
typedef uint32_t /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type;
typedef TMicro BusyWaitMicroC__BusyWait__precision_tag;
typedef uint16_t BusyWaitMicroC__BusyWait__size_type;
typedef TMicro /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__to_precision_tag;
typedef uint32_t /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__to_size_type;
typedef TMicro /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__from_precision_tag;
typedef uint16_t /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__from_size_type;
typedef uint32_t /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__upper_count_type;
typedef /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__from_precision_tag /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__CounterFrom__precision_tag;
typedef /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__from_size_type /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__CounterFrom__size_type;
typedef /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__to_precision_tag /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__Counter__precision_tag;
typedef /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__to_size_type /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__Counter__size_type;
typedef TMicro /*LocalTimeSyncedMicroC.CounterToLocalMicroC*/CounterToLocalMicroC__0__LocalTime__precision_tag;
typedef TMicro /*LocalTimeSyncedMicroC.CounterToLocalMicroC*/CounterToLocalMicroC__0__Counter__precision_tag;
typedef uint32_t /*LocalTimeSyncedMicroC.CounterToLocalMicroC*/CounterToLocalMicroC__0__Counter__size_type;
typedef uint8_t RF230SlimRadioP__PacketRSSI__value_type;
typedef uint8_t RF230SlimRadioP__PacketLinkQuality__value_type;
typedef TMilli OrinocoForwardLayerP__Timer__precision_tag;
typedef uint16_t RandomMlcgC__SeedInit__parameter;
typedef mq_entry_t /*OrinocoP.SendQueue*/QueueC__0__queue_t;
typedef /*OrinocoP.SendQueue*/QueueC__0__queue_t /*OrinocoP.SendQueue*/QueueC__0__Queue__t;
typedef message_t /*OrinocoP.MsgPool*/PoolC__0__pool_t;
typedef /*OrinocoP.MsgPool*/PoolC__0__pool_t /*OrinocoP.MsgPool.PoolP*/PoolP__0__pool_t;
typedef /*OrinocoP.MsgPool.PoolP*/PoolP__0__pool_t /*OrinocoP.MsgPool.PoolP*/PoolP__0__Pool__t;
typedef mc_entry_t /*OrinocoP.PacketHistory*/OrinocoCacheC__0__cache_t;
typedef /*OrinocoP.PacketHistory*/OrinocoCacheC__0__cache_t /*OrinocoP.PacketHistory*/OrinocoCacheC__0__Cache__t;
typedef /*OrinocoP.PacketHistory*/OrinocoCacheC__0__cache_t /*OrinocoP.PacketHistory*/OrinocoCacheC__0__CacheCompare__cache_t;
typedef TMilli OrinocoTrafficStatisticsP__LocalTime__precision_tag;
enum /*OrinocoTrafficStatisticsC.Job*/EAJobC__0____nesc_unnamed4358 {
  EAJobC__0__JOB_ID = 0U
};
typedef TMilli EASchedulerP__DispatchTimer__precision_tag;
typedef TMicro /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__precision_tag;
typedef uint32_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__size_type;
typedef uint16_t HplAtm1281Timer3P__CompareA__size_type;
typedef uint16_t HplAtm1281Timer3P__Capture__size_type;
typedef uint16_t HplAtm1281Timer3P__CompareB__size_type;
typedef uint16_t HplAtm1281Timer3P__CompareC__size_type;
typedef uint16_t HplAtm1281Timer3P__Timer__timer_size;
typedef uint16_t /*InitThreeP.InitThree*/Atm128TimerInitC__1__timer_size;
typedef /*InitThreeP.InitThree*/Atm128TimerInitC__1__timer_size /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__timer_size;
typedef TThree /*CounterThree16C.NCounter*/Atm128CounterC__1__frequency_tag;
typedef uint16_t /*CounterThree16C.NCounter*/Atm128CounterC__1__timer_size;
typedef /*CounterThree16C.NCounter*/Atm128CounterC__1__frequency_tag /*CounterThree16C.NCounter*/Atm128CounterC__1__Counter__precision_tag;
typedef /*CounterThree16C.NCounter*/Atm128CounterC__1__timer_size /*CounterThree16C.NCounter*/Atm128CounterC__1__Counter__size_type;
typedef /*CounterThree16C.NCounter*/Atm128CounterC__1__timer_size /*CounterThree16C.NCounter*/Atm128CounterC__1__Timer__timer_size;
typedef TMicro /*CounterMicro32C.Transform32*/TransformCounterC__2__to_precision_tag;
typedef uint32_t /*CounterMicro32C.Transform32*/TransformCounterC__2__to_size_type;
typedef TThree /*CounterMicro32C.Transform32*/TransformCounterC__2__from_precision_tag;
typedef uint16_t /*CounterMicro32C.Transform32*/TransformCounterC__2__from_size_type;
typedef counter_three_overflow_t /*CounterMicro32C.Transform32*/TransformCounterC__2__upper_count_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__2__from_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC__2__CounterFrom__precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__2__from_size_type /*CounterMicro32C.Transform32*/TransformCounterC__2__CounterFrom__size_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__2__to_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC__2__Counter__precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__2__to_size_type /*CounterMicro32C.Transform32*/TransformCounterC__2__Counter__size_type;
enum /*OrinocoStatsReportingJobC.Job*/EAJobC__1____nesc_unnamed4359 {
  EAJobC__1__JOB_ID = 1U
};
typedef const orinoco_queue_statistics_t *OrinocoDebugReportingJobP__QueueStats__val_t;
typedef const orinoco_packet_statistics_t *OrinocoDebugReportingJobP__PacketStats__val_t;
enum /*OrinocoDebugReportingJobC.Job*/EAJobC__2____nesc_unnamed4360 {
  EAJobC__2__JOB_ID = 2U
};
# 60 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static void SinkP__Boot__booted(void );
# 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void SinkP__SerialControl__startDone(error_t error);
#line 138
static void SinkP__SerialControl__stopDone(error_t error);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SinkP__uartSendTask__runTask(void );
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



SinkP__OrinocoDebugReportingMsg__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void SinkP__RadioControl__startDone(error_t error);
#line 138
static void SinkP__RadioControl__stopDone(error_t error);
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void SinkP__AliveTimer__fired(void );
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



SinkP__RadioReceive__receive(
# 26 "SinkP.nc"
collection_id_t arg_0x2b010a015de8, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



SinkP__OrinocoStatsReportingMsg__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 110 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void SinkP__UartSend__sendDone(
# 18 "SinkP.nc"
am_id_t arg_0x2b0109fe49a0, 
# 103 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 62
static error_t MotePlatformP__PlatformInit__init(void );
# 42 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );

static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );





static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void );
static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void );
#line 46
static void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void );
#line 44
static void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void );

static void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__set(void );
static void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t MeasureClockC__Init__init(void );
# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b0109efdab0);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b0109efdab0);
# 57 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 76 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void McuSleepC__McuPowerState__update(void );
# 109 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getNow(void );
#line 103
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__size_type dt);
#line 116
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getAlarm(void );
#line 73
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__stop(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Init__init(void );
# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__get(void );
# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__fired(void );
# 70 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__overflow(void );
# 89 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
static uint8_t HplAtm1281Timer2AsyncP__TimerCtrl__getInterruptFlag(void );
#line 82
static void HplAtm1281Timer2AsyncP__TimerCtrl__setControlB(uint8_t control);
#line 80
static uint8_t HplAtm1281Timer2AsyncP__TimerCtrl__getControlB(void );
static void HplAtm1281Timer2AsyncP__TimerCtrl__setControlA(uint8_t control);
# 62 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm1281Timer2AsyncP__McuPowerOverride__lowestState(void );
# 68 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
static void HplAtm1281Timer2AsyncP__TimerAsync__setTimer2Asynchronous(void );
#line 86
static int HplAtm1281Timer2AsyncP__TimerAsync__compareABusy(void );
# 48 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm1281Timer2AsyncP__Compare__size_type HplAtm1281Timer2AsyncP__Compare__get(void );





static void HplAtm1281Timer2AsyncP__Compare__set(HplAtm1281Timer2AsyncP__Compare__size_type t);










static void HplAtm1281Timer2AsyncP__Compare__start(void );
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static HplAtm1281Timer2AsyncP__Timer__timer_size HplAtm1281Timer2AsyncP__Timer__get(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 136 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 129
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 136
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(
# 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b010a396da0);
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b010a396da0);
# 151 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getdt(
# 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b010a396da0);
# 144 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__gett0(
# 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b010a396da0);
# 92 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(
# 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b010a396da0);
# 73 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b010a396da0, 
# 73 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b010a396da0);
# 61 "/opt/tinyos-2.x/tos/lib/timer/LocalTime.nc"
static uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__get(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 43 "/opt/tinyos-2.x/tos/lib/net/RootControl.nc"
static bool OrinocoQueueP__RootControl__isRoot(void );
#line 41
static error_t OrinocoQueueP__RootControl__setRoot(void );
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



OrinocoQueueP__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 100 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void OrinocoQueueP__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 43 "/opt/tinyos-2.x/tos/lib/net/CollectionPacket.nc"
static am_addr_t OrinocoQueueP__CollectionPacket__getOrigin(message_t *msg);


static collection_id_t OrinocoQueueP__CollectionPacket__getType(message_t *msg);
# 31 "/opt/tinyos-2.x/tos/interfaces/Intercept.nc"
static bool OrinocoQueueP__Intercept__default__forward(
# 15 "../../lib/net/orinoco/OrinocoQueueP.nc"
collection_id_t arg_0x2b010a415b58, 
# 20 "/opt/tinyos-2.x/tos/interfaces/Intercept.nc"
message_t * msg, 

void * payload, 








uint8_t len);
# 65 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static void OrinocoQueueP__Packet__clear(
#line 62
message_t * msg);
#line 78
static uint8_t OrinocoQueueP__Packet__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


OrinocoQueueP__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void OrinocoQueueP__sendTask__runTask(void );
# 8 "../../interfaces/PacketDelay.nc"
static uint32_t OrinocoQueueP__PacketDelayMilli__delay(message_t *msg);







static uint32_t OrinocoQueueP__PacketDelayMilli__creationTime(message_t *msg);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t OrinocoQueueP__Init__init(void );
# 50 "../../lib/net/orinoco/CacheCompare.nc"
static bool OrinocoQueueP__CacheCompare__equal(OrinocoQueueP__CacheCompare__cache_t ce, OrinocoQueueP__CacheCompare__cache_t cmp);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void OrinocoQueueP__selfReceiveTask__runTask(void );
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t OrinocoQueueP__StdControl__start(void );
# 55 "/opt/tinyos-2.x/tos/interfaces/Get.nc"
static OrinocoQueueP__QueueStatistics__val_t OrinocoQueueP__QueueStatistics__get(void );
# 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t OrinocoRadioP__SplitControl__start(void );
# 65 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static void OrinocoRadioP__Packet__clear(
#line 62
message_t * msg);
#line 78
static uint8_t OrinocoRadioP__Packet__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


OrinocoRadioP__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t OrinocoRadioP__Packet__maxPayloadLength(void );
# 110 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void OrinocoRadioP__DataSubSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t OrinocoRadioP__Send__send(
#line 67
message_t * msg, 







uint8_t len);
# 44 "../../lib/net/orinoco/OrinocoBackoffConfig.nc"
static uint8_t OrinocoRadioP__BackoffConfig__getMaximumBackoff(void );
# 55 "/opt/tinyos-2.x/tos/interfaces/Get.nc"
static OrinocoRadioP__PacketStatistics__val_t OrinocoRadioP__PacketStatistics__get(void );
# 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void OrinocoRadioP__SubControl__startDone(error_t error);
#line 138
static void OrinocoRadioP__SubControl__stopDone(error_t error);
# 110 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void OrinocoRadioP__BeaconSubSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void OrinocoRadioP__transition__runTask(void );
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



OrinocoRadioP__DataSubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



OrinocoRadioP__BeaconSubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void OrinocoRadioP__Timer__fired(void );
# 63 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
static error_t RF230RadioP__ActiveMessageConfig__checkFrame(message_t *msg);
#line 46
static am_addr_t RF230RadioP__ActiveMessageConfig__source(message_t *msg);
#line 40
static am_addr_t RF230RadioP__ActiveMessageConfig__destination(message_t *msg);








static void RF230RadioP__ActiveMessageConfig__setSource(message_t *msg, am_addr_t addr);
#line 43
static void RF230RadioP__ActiveMessageConfig__setDestination(message_t *msg, am_addr_t addr);
#line 55
static void RF230RadioP__ActiveMessageConfig__setGroup(message_t *msg, am_group_t grp);
# 60 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
static void RF230RadioP__RadioAlarm__fired(void );
# 52 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueConfig.nc"
static void RF230RadioP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t number);





static void RF230RadioP__UniqueConfig__reportChannelError(void );
#line 42
static uint8_t RF230RadioP__UniqueConfig__getSequenceNumber(message_t *msg);




static am_addr_t RF230RadioP__UniqueConfig__getSender(message_t *msg);
# 60 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(
# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x2b010a6ca908);
# 50 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(
# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x2b010a6ca908, 
# 50 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
tradio_size timeout);
#line 45
static bool /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(
# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x2b010a6ca908);
# 65 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
static tradio_size /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(
# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x2b010a6ca908);
# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired(void );
# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run(void );










static void TaskletC__Tasklet__schedule(void );
#line 72
static void TaskletC__Tasklet__suspend(void );






static void TaskletC__Tasklet__resume(void );
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(message_t *msg);
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(message_t *msg, error_t error);
# 59 "/opt/tinyos-2.x/tos/interfaces/SendNotifier.nc"
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__default__aboutToSend(
# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x2b010a72d630, 
# 59 "/opt/tinyos-2.x/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 65 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__clear(
#line 62
message_t * msg);
#line 78
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength(void );
#line 94
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__send(
# 45 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x2b010a703cc8, 
# 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__getPayload(
# 45 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x2b010a703cc8, 
# 132 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
#line 96
static error_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__cancel(
# 45 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x2b010a703cc8, 
# 92 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg);
#line 110
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__default__sendDone(
# 45 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x2b010a703cc8, 
# 103 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(
# 47 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x2b010a7009c0, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 70 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__clear(message_t *msg);
#line 49
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength(void );
#line 54
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(message_t *msg);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__default__receive(
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x2b010a702de0, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__default__receive(
# 51 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x2b010a72c220, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 88 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__source(
#line 84
message_t * amsg);
#line 68
static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address(void );









static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(
#line 74
message_t * amsg);
#line 121
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setSource(
#line 117
message_t * amsg, 



am_addr_t addr);
#line 103
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(
#line 143
message_t * amsg);
#line 162
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
#line 136
static bool /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(
#line 133
message_t * amsg);
#line 187
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setGroup(
#line 184
message_t * amsg, 


am_group_t grp);







static am_group_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__localGroup(void );
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__default__receive(
# 52 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x2b010a72cdb0, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 55 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 50 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );




static am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(message_t *msg, error_t error);
# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted(void );
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__send(message_t *msg);
#line 64
static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__cancel(message_t *msg);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init(void );
# 79 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );








static bool /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 53 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(
# 52 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b010a7fd1a0);
# 61 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(
# 52 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b010a7fd1a0);
# 65 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b010a7fc6e0);
# 59 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b010a7fc6e0);
# 120 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b010a7ff020);
# 97 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b010a7ff020);
# 88 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__request(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b010a7ff020);
# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b010a7ff020);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(message_t *msg, error_t error);
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(message_t *msg);
# 78 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(
#line 74
message_t * msg);
# 97 "/opt/tinyos-2.x/tos/interfaces/Ieee154Send.nc"
static void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(message_t *msg, error_t error);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(message_t *msg, error_t error);
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(message_t *msg);
# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(message_t *msg);
#line 43
static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(message_t *msg);
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(message_t *msg);
#line 64
static error_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__cancel(message_t *msg);
# 70 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__clear(message_t *msg);
#line 49
static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__maxPayloadLength(void );
#line 54
static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(message_t *msg);
#line 70
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__clear(message_t *msg);
#line 49
static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__maxPayloadLength(void );
#line 54
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(message_t *msg);
# 131 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(message_t *msg);
#line 120
static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(message_t *msg);
#line 156
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr);
#line 69
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(message_t *msg);
#line 125
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn);
#line 151
static uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(message_t *msg);
#line 63
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(message_t *msg);
#line 178
static ieee154_saddr_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr(void );
#line 173
static ieee154_panid_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan(void );
#line 146
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr);
#line 136
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan);
#line 185
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(message_t *msg);
#line 141
static uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(message_t *msg);
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(message_t *msg, error_t error);
# 53 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(message_t *msg);
#line 46
static bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(message_t *msg);
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(message_t *msg);
#line 64
static error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__cancel(message_t *msg);
# 80 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Neighborhood.nc"
static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(uint8_t idx);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init(void );
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
static bool NeighborhoodP__NeighborhoodFlag__get(
# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodP.nc"
uint8_t arg_0x2b010a95e970, 
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
uint8_t idx);




static void NeighborhoodP__NeighborhoodFlag__set(
# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodP.nc"
uint8_t arg_0x2b010a95e970, 
# 51 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
uint8_t idx);
# 71 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Neighborhood.nc"
static uint8_t NeighborhoodP__Neighborhood__insertNode(am_addr_t id);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t NeighborhoodP__Init__init(void );
# 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start(void );
#line 130
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stop(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init(void );
# 69 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioState.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done(void );
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(message_t *msg);
#line 64
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__cancel(message_t *msg);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask(void );
# 53 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(message_t *msg);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask(void );
#line 75
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask(void );
# 63 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready(void );
#line 56
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error_t error);
# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioChannel.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone(void );
# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run(void );
# 70 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__clear(message_t *msg);
#line 49
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__maxPayloadLength(void );
#line 54
static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(message_t *msg);
# 63 "/opt/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
static /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__size_type /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__timestamp(
#line 52
message_t * msg);
#line 70
static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(
#line 66
message_t * msg);
#line 78
static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(
#line 73
message_t * msg, 




/*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__size_type value);
# 70 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__clear(message_t *msg);
#line 49
static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__maxPayloadLength(void );
#line 54
static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(message_t *msg);
# 55 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x2b010aa8e260, 
# 55 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg);
#line 40
static bool /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x2b010aa8e260, 
# 40 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg);









static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x2b010aa8e260, 
# 50 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg);
# 52 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioCCA.nc"
static void RF230DriverLayerP__RadioCCA__default__done(error_t error);
# 51 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketField.nc"
static void RF230DriverLayerP__PacketRSSI__clear(message_t *msg);
#line 46
static RF230DriverLayerP__PacketRSSI__value_type RF230DriverLayerP__PacketRSSI__get(message_t *msg);










static void RF230DriverLayerP__PacketRSSI__set(message_t *msg, RF230DriverLayerP__PacketRSSI__value_type value);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RF230DriverLayerP__SoftwareInit__init(void );
# 60 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
static void RF230DriverLayerP__RadioAlarm__fired(void );
# 44 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioState.nc"
static error_t RF230DriverLayerP__RadioState__turnOff(void );
#line 56
static error_t RF230DriverLayerP__RadioState__turnOn(void );
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketField.nc"
static RF230DriverLayerP__PacketTransmitPower__value_type RF230DriverLayerP__PacketTransmitPower__get(message_t *msg);
#line 40
static bool RF230DriverLayerP__PacketTransmitPower__isSet(message_t *msg);
# 70 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static void RF230DriverLayerP__RadioPacket__clear(message_t *msg);
#line 49
static uint8_t RF230DriverLayerP__RadioPacket__payloadLength(message_t *msg);









static uint8_t RF230DriverLayerP__RadioPacket__maxPayloadLength(void );
#line 54
static void RF230DriverLayerP__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t RF230DriverLayerP__RadioPacket__headerLength(message_t *msg);
#line 65
static uint8_t RF230DriverLayerP__RadioPacket__metadataLength(message_t *msg);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void RF230DriverLayerP__releaseSpi__runTask(void );
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketField.nc"
static RF230DriverLayerP__PacketTimeSyncOffset__value_type RF230DriverLayerP__PacketTimeSyncOffset__get(message_t *msg);
#line 40
static bool RF230DriverLayerP__PacketTimeSyncOffset__isSet(message_t *msg);
#line 57
static void RF230DriverLayerP__PacketTimeSyncOffset__set(message_t *msg, RF230DriverLayerP__PacketTimeSyncOffset__value_type value);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RF230DriverLayerP__PlatformInit__init(void );
# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void RF230DriverLayerP__SpiResource__granted(void );
# 57 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketField.nc"
static void RF230DriverLayerP__PacketLinkQuality__set(message_t *msg, RF230DriverLayerP__PacketLinkQuality__value_type value);
# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
static error_t RF230DriverLayerP__RadioSend__send(message_t *msg);
# 61 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static void RF230DriverLayerP__IRQ__captured(uint16_t time);
# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
static void RF230DriverLayerP__Tasklet__run(void );
# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplRF230P__Capture__captured(HplRF230P__Capture__size_type t);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t HplRF230P__PlatformInit__init(void );
# 66 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static void HplRF230P__IRQ__disable(void );
#line 53
static error_t HplRF230P__IRQ__captureRisingEdge(void );
# 65 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void Atm128SpiP__ResourceConfigure__unconfigure(
# 95 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2b010ac00c38);
# 59 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void Atm128SpiP__ResourceConfigure__configure(
# 95 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2b010ac00c38);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void Atm128SpiP__zeroTask__runTask(void );
# 82 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static void Atm128SpiP__SpiPacket__default__sendDone(
#line 75
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 45 "/opt/tinyos-2.x/tos/interfaces/SpiByte.nc"
static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx);
# 109 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static void Atm128SpiP__Spi__dataReady(uint8_t data);
# 62 "/opt/tinyos-2.x/tos/interfaces/FastSpiByte.nc"
static void Atm128SpiP__FastSpiByte__splitWrite(uint8_t data);
#line 74
static uint8_t Atm128SpiP__FastSpiByte__splitReadWrite(uint8_t data);
#line 68
static uint8_t Atm128SpiP__FastSpiByte__splitRead(void );
#line 81
static uint8_t Atm128SpiP__FastSpiByte__write(uint8_t data);
# 89 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static void HplAtm128SpiP__SPI__sleep(void );
#line 83
static void HplAtm128SpiP__SPI__initMaster(void );
#line 122
static void HplAtm128SpiP__SPI__setMasterBit(bool isMaster);
#line 113
static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled);
#line 97
static uint8_t HplAtm128SpiP__SPI__read(void );
#line 141
static void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on);
#line 131
static void HplAtm128SpiP__SPI__setClock(uint8_t speed);




static bool HplAtm128SpiP__SPI__isInterruptPending(void );
#line 125
static void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle);
#line 103
static void HplAtm128SpiP__SPI__write(uint8_t data);
#line 116
static void HplAtm128SpiP__SPI__enableSpi(bool busOn);
#line 128
static void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init(void );
# 79 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );








static bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
# 53 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__requested(
# 52 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b010a7fd1a0);
# 61 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__immediateRequested(
# 52 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b010a7fd1a0);
# 120 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__release(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b010a7ff020);
# 97 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__immediateRequest(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b010a7ff020);
# 88 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__request(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b010a7ff020);
# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__default__granted(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b010a7ff020);
# 128 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__isOwner(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b010a7ff020);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__runTask(void );
# 91 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl16.nc"
static uint8_t HplAtm1281Timer1P__TimerCtrl__getInterruptFlag(void );
#line 83
static void HplAtm1281Timer1P__TimerCtrl__setControlB(uint8_t control);
#line 80
static uint8_t HplAtm1281Timer1P__TimerCtrl__getControlB(void );
# 62 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer1P__CompareA__reset(void );
#line 54
static void HplAtm1281Timer1P__CompareA__set(HplAtm1281Timer1P__CompareA__size_type t);










static void HplAtm1281Timer1P__CompareA__start(void );


static void HplAtm1281Timer1P__CompareA__stop(void );
# 88 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm1281Timer1P__Capture__setEdge(bool up);
#line 47
static HplAtm1281Timer1P__Capture__size_type HplAtm1281Timer1P__Capture__get(void );
#line 64
static void HplAtm1281Timer1P__Capture__reset(void );


static void HplAtm1281Timer1P__Capture__start(void );


static void HplAtm1281Timer1P__Capture__stop(void );
# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer1P__CompareB__default__fired(void );
#line 58
static void HplAtm1281Timer1P__CompareC__default__fired(void );
# 87 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool HplAtm1281Timer1P__Timer__test(void );
#line 61
static HplAtm1281Timer1P__Timer__timer_size HplAtm1281Timer1P__Timer__get(void );
#line 104
static void HplAtm1281Timer1P__Timer__setScale(uint8_t scale);
#line 67
static void HplAtm1281Timer1P__Timer__set(HplAtm1281Timer1P__Timer__timer_size t);










static void HplAtm1281Timer1P__Timer__start(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void );
# 70 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void );
# 109 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__size_type /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__getNow(void );
#line 103
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__size_type t0, /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__size_type dt);
#line 66
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__start(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__size_type dt);
# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired(void );
# 70 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow(void );
# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__size_type /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void );






static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void );
# 70 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void );
#line 82
static void /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 66 "/opt/tinyos-2.x/tos/lib/timer/BusyWait.nc"
static void BusyWaitMicroC__BusyWait__wait(BusyWaitMicroC__BusyWait__size_type dt);
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__CounterFrom__overflow(void );
#line 64
static /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__Counter__size_type /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__Counter__get(void );
# 61 "/opt/tinyos-2.x/tos/lib/timer/LocalTime.nc"
static uint32_t /*LocalTimeSyncedMicroC.CounterToLocalMicroC*/CounterToLocalMicroC__0__LocalTime__get(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*LocalTimeSyncedMicroC.CounterToLocalMicroC*/CounterToLocalMicroC__0__Counter__overflow(void );
# 46 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverConfig.nc"
static uint8_t RF230SlimRadioP__RF230DriverConfig__maxPayloadLength(void );
#line 40
static uint8_t RF230SlimRadioP__RF230DriverConfig__headerLength(message_t *msg);
#line 52
static uint8_t RF230SlimRadioP__RF230DriverConfig__metadataLength(message_t *msg);






static uint8_t RF230SlimRadioP__RF230DriverConfig__headerPreloadLength(void );





static bool RF230SlimRadioP__RF230DriverConfig__requiresRssiCca(message_t *msg);
# 47 "/opt/tinyos-2.x/tos/interfaces/LinkPacketMetadata.nc"
static bool RF230SlimRadioP__LinkPacketMetadata__highChannelQuality(
#line 44
message_t * msg);
# 110 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void OrinocoForwardLayerP__SubAMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
#line 80
static error_t OrinocoForwardLayerP__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 96
static error_t OrinocoForwardLayerP__AMSend__cancel(
#line 92
message_t * msg);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void OrinocoForwardLayerP__doneTask__runTask(void );
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void OrinocoForwardLayerP__Timer__fired(void );
# 52 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC__Random__rand16(void );
#line 46
static uint32_t RandomMlcgC__Random__rand32(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RandomMlcgC__Init__init(void );
#line 62
static error_t OrinocoConfigP__Init__init(void );
# 44 "../../lib/net/orinoco/OrinocoConfig.nc"
static void OrinocoConfigP__OrinocoConfig__setWakeUpInterval(uint16_t Ts);
#line 60
static uint16_t OrinocoConfigP__OrinocoConfig__getAbsWakeUpDeviation(void );
#line 84
static uint8_t OrinocoConfigP__OrinocoConfig__getMinQueueSize(void );
#line 78
static uint8_t OrinocoConfigP__OrinocoConfig__getNumWaitingIntervals(void );
#line 66
static uint8_t OrinocoConfigP__OrinocoConfig__getMinDwellTime(void );
#line 47
static uint16_t OrinocoConfigP__OrinocoConfig__getWakeUpInterval(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 61 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
static void LedsP__Leds__led0Off(void );
#line 83
static void LedsP__Leds__led1Toggle(void );
#line 100
static void LedsP__Leds__led2Toggle(void );
#line 56
static void LedsP__Leds__led0On(void );
# 6 "../../lib/net/orinoco/OrinocoPathCost.nc"
static orinoco_pathcost_t OrinocoPathCostHopCountP__OrinocoPathCost__getCost(void );



static void OrinocoPathCostHopCountP__OrinocoPathCost__reviseCost(void );



static bool OrinocoPathCostHopCountP__OrinocoPathCost__inspectBeacon(message_t *msg, orinoco_pathcost_t cost, bool update);
# 73 "/opt/tinyos-2.x/tos/interfaces/Queue.nc"
static 
#line 71
/*OrinocoP.SendQueue*/QueueC__0__Queue__t  

/*OrinocoP.SendQueue*/QueueC__0__Queue__head(void );
#line 90
static error_t /*OrinocoP.SendQueue*/QueueC__0__Queue__enqueue(
#line 86
/*OrinocoP.SendQueue*/QueueC__0__Queue__t  newVal);
#line 65
static uint8_t /*OrinocoP.SendQueue*/QueueC__0__Queue__maxSize(void );
#line 81
static 
#line 79
/*OrinocoP.SendQueue*/QueueC__0__Queue__t  

/*OrinocoP.SendQueue*/QueueC__0__Queue__dequeue(void );
#line 50
static bool /*OrinocoP.SendQueue*/QueueC__0__Queue__empty(void );







static uint8_t /*OrinocoP.SendQueue*/QueueC__0__Queue__size(void );
# 97 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
/*OrinocoP.MsgPool.PoolP*/PoolP__0__Pool__t * 


/*OrinocoP.MsgPool.PoolP*/PoolP__0__Pool__get(void );
#line 61
static bool /*OrinocoP.MsgPool.PoolP*/PoolP__0__Pool__empty(void );
#line 89
static error_t /*OrinocoP.MsgPool.PoolP*/PoolP__0__Pool__put(
#line 85
/*OrinocoP.MsgPool.PoolP*/PoolP__0__Pool__t * newVal);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*OrinocoP.MsgPool.PoolP*/PoolP__0__Init__init(void );
# 51 "/opt/tinyos-2.x/tos/interfaces/Cache.nc"
static void /*OrinocoP.PacketHistory*/OrinocoCacheC__0__Cache__insert(/*OrinocoP.PacketHistory*/OrinocoCacheC__0__Cache__t item);
#line 65
static void /*OrinocoP.PacketHistory*/OrinocoCacheC__0__Cache__flush(void );
#line 59
static bool /*OrinocoP.PacketHistory*/OrinocoCacheC__0__Cache__lookup(/*OrinocoP.PacketHistory*/OrinocoCacheC__0__Cache__t item);
# 52 "../../lib/net/orinoco/OrinocoTrafficUpdates.nc"
static void OrinocoTrafficStatisticsP__Updates__updateRxBurst(bool end);

static void OrinocoTrafficStatisticsP__Updates__updateForwardDelay(bool done);
#line 50
static void OrinocoTrafficStatisticsP__Updates__updateTxBurst(bool end);
#line 48
static void OrinocoTrafficStatisticsP__Updates__updatePktReceptionIntvl(void );
# 2 "../../../EAJobs/interfaces/EAPeriodicJobConfig.nc"
static uint32_t OrinocoTrafficStatisticsP__PktRateJobConfig__getPeriod(void );
# 4 "../../../EAJobs/interfaces/EAJob.nc"
static void OrinocoTrafficStatisticsP__PktRateJob__run(void );
# 52 "../../interfaces/OrinocoTrafficStatistics.nc"
static uint8_t OrinocoTrafficStatisticsP__Stats__getRxBurst(void );
#line 50
static uint8_t OrinocoTrafficStatisticsP__Stats__getTxBurst(void );
#line 46
static uint16_t OrinocoTrafficStatisticsP__Stats__getPktCreationIntvl(void );

static uint16_t OrinocoTrafficStatisticsP__Stats__getPktReceptionIntvl(void );





static uint32_t OrinocoTrafficStatisticsP__Stats__getForwardDelay(void );
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void EASchedulerP__DispatchTimer__fired(void );
# 4 "../../../EAJobs/interfaces/EAScheduler.nc"
static void EASchedulerP__EAScheduler__scheduleJob(jobid_t jobId, uint32_t dt);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void EASchedulerP__dispatch__runTask(void );
# 4 "../../../EAJobs/interfaces/EAJob.nc"
static void EASchedulerP__EAJob__default__run(
# 8 "../../../EAJobs/lib/EASchedulerP.nc"
uint8_t arg_0x2b010b019608);
# 8 "../../../EAJobs/interfaces/EAJob.nc"
static void EASchedulerP__EAJob__done(
# 8 "../../../EAJobs/lib/EASchedulerP.nc"
uint8_t arg_0x2b010b019608);
# 60 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static void EAEnergyManagerP__Boot__booted(void );
# 8 "../../../EAJobs/interfaces/EAJobConfig.nc"
static ea_generic_jobconfig_t *EAEnergyManagerP__EAJobConfig__default__getConfig(
# 6 "../../../EAJobs/lib/EAEnergyManagerP.nc"
uint8_t arg_0x2b010b038388);
# 5 "../../../EAJobs/interfaces/EAScheduler.nc"
static void EAEnergyManagerP__EAScheduler__jobStarted(jobid_t jobId);
# 8 "../../../EAJobs/interfaces/EAJobConfig.nc"
static ea_generic_jobconfig_t */*OrinocoTrafficStatisticsC.EAPeriodicJobConfigC*/EAPeriodicJobConfigC__0__JobConfig__getConfig(void );
# 100 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(
# 47 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x2b010b060e38, 
# 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 65 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__clear(
#line 62
message_t * msg);
#line 106
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(
# 48 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x2b010b05c020, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 121 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setSource(
#line 117
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(
#line 143
message_t * amsg);
# 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t SerialP__SplitControl__start(void );
#line 130
static error_t SerialP__SplitControl__stop(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SerialP__stopDoneTask__runTask(void );
#line 75
static void SerialP__RunTx__runTask(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t SerialP__Init__init(void );
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flushDone(void );
#line 49
static void SerialP__SerialFlush__default__flush(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SerialP__startDoneTask__runTask(void );
# 94 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static void SerialP__SerialFrameComm__dataReceived(uint8_t data);





static void SerialP__SerialFrameComm__putDone(void );
#line 85
static void SerialP__SerialFrameComm__delimiterReceived(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SerialP__defaultSerialFlushTask__runTask(void );
# 71 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static error_t SerialP__SendBytePacket__completeSend(void );
#line 62
static error_t SerialP__SendBytePacket__startSend(uint8_t first_byte);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(
# 51 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2b010b1c3020, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(
# 51 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2b010b1c3020, 
# 96 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(
# 50 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2b010b1c43e0, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2b010b1c2308, 
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2b010b1c2308);
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2b010b1c2308, 
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 81 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );









static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);
# 62 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );






static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t data);










static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
# 79 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static void HdlcTranslateC__UartStream__receivedByte(uint8_t byte);
#line 99
static void HdlcTranslateC__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void HdlcTranslateC__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 56 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );
#line 79
static void HdlcTranslateC__SerialFrameComm__resetReceive(void );
#line 65
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void );
# 48 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 47
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void );
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart0Init__init(void );
# 42 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static error_t HplAtm128UartP__HplUart0__enableRxIntr(void );
#line 40
static error_t HplAtm128UartP__HplUart0__enableTxIntr(void );
static error_t HplAtm128UartP__HplUart0__disableTxIntr(void );

static error_t HplAtm128UartP__HplUart0__disableRxIntr(void );


static void HplAtm128UartP__HplUart0__tx(uint8_t data);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart1Init__init(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart1__default__txDone(void );
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t HplAtm128UartP__Uart0RxControl__start(void );









static error_t HplAtm128UartP__Uart0RxControl__stop(void );
#line 95
static error_t HplAtm128UartP__Uart0TxControl__start(void );









static error_t HplAtm128UartP__Uart0TxControl__stop(void );
# 83 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl16.nc"
static void HplAtm1281Timer3P__TimerCtrl__setControlB(uint8_t control);
#line 80
static uint8_t HplAtm1281Timer3P__TimerCtrl__getControlB(void );
# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer3P__CompareA__default__fired(void );
# 47 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static HplAtm1281Timer3P__Capture__size_type HplAtm1281Timer3P__Capture__get(void );
#line 60
static void HplAtm1281Timer3P__Capture__default__captured(HplAtm1281Timer3P__Capture__size_type t);
# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer3P__CompareB__default__fired(void );
#line 58
static void HplAtm1281Timer3P__CompareC__default__fired(void );
# 104 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm1281Timer3P__Timer__setScale(uint8_t scale);
#line 67
static void HplAtm1281Timer3P__Timer__set(HplAtm1281Timer3P__Timer__timer_size t);










static void HplAtm1281Timer3P__Timer__start(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*InitThreeP.InitThree*/Atm128TimerInitC__1__Init__init(void );
# 70 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__overflow(void );
#line 70
static void /*CounterThree16C.NCounter*/Atm128CounterC__1__Timer__overflow(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.Transform32*/TransformCounterC__2__CounterFrom__overflow(void );
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );







static uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);
# 4 "../../../EAJobs/interfaces/EAJob.nc"
static void OrinocoStatsReportingJobP__EAJob__run(void );
# 8 "../../../EAJobs/interfaces/EAJobConfig.nc"
static ea_generic_jobconfig_t */*OrinocoStatsReportingJobC.EAPeriodicJobConfigC*/EAPeriodicJobConfigC__1__JobConfig__getConfig(void );
# 2 "../../../EAJobs/interfaces/EAPeriodicJobConfig.nc"
static uint32_t OrinocoStatsReportingJobConfigC__JobConfig__getPeriod(void );
# 4 "../../../EAJobs/interfaces/EAJob.nc"
static void OrinocoDebugReportingJobP__EAJob__run(void );
# 8 "../../../EAJobs/interfaces/EAJobConfig.nc"
static ea_generic_jobconfig_t */*OrinocoDebugReportingJobC.EAPeriodicJobConfigC*/EAPeriodicJobConfigC__2__JobConfig__getConfig(void );
# 2 "../../../EAJobs/interfaces/EAPeriodicJobConfig.nc"
static uint32_t OrinocoDebugReportingJobConfigC__JobConfig__getPeriod(void );
# 41 "/opt/tinyos-2.x/tos/lib/net/RootControl.nc"
static error_t SinkP__RootControl__setRoot(void );
# 43 "/opt/tinyos-2.x/tos/lib/net/CollectionPacket.nc"
static am_addr_t SinkP__CollectionPacket__getOrigin(message_t *msg);


static collection_id_t SinkP__CollectionPacket__getType(message_t *msg);
# 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t SinkP__SerialControl__start(void );
#line 130
static error_t SinkP__SerialControl__stop(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SinkP__uartSendTask__postTask(void );
# 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t SinkP__RadioControl__start(void );
# 78 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t SinkP__RadioPacket__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


SinkP__RadioPacket__getPayload(
#line 121
message_t * msg, 




uint8_t len);
# 8 "../../interfaces/PacketDelay.nc"
static uint32_t SinkP__PacketDelayMilli__delay(message_t *msg);







static uint32_t SinkP__PacketDelayMilli__creationTime(message_t *msg);
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t SinkP__RoutingControl__start(void );
# 83 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
static void SinkP__Leds__led1Toggle(void );
#line 100
static void SinkP__Leds__led2Toggle(void );
# 65 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static void SinkP__UartPacket__clear(
#line 62
message_t * msg);
# 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t SinkP__UartSend__send(
# 18 "SinkP.nc"
am_id_t arg_0x2b0109fe49a0, 
# 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 121 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static void SinkP__UartAMPacket__setSource(
#line 117
message_t * amsg, 



am_addr_t addr);
# 44 "../../lib/net/orinoco/OrinocoConfig.nc"
static void SinkP__OrinocoConfig__setWakeUpInterval(uint16_t Ts);
# 74 "SinkP.nc"
enum SinkP____nesc_unnamed4361 {
#line 74
  SinkP__uartSendTask = 0U
};
#line 74
typedef int SinkP____nesc_sillytask_uartSendTask[SinkP__uartSendTask];
#line 48
enum SinkP____nesc_unnamed4362 {
  SinkP__UART_QUEUE_LEN = 40
};

message_t SinkP__uartQueueBufs[SinkP__UART_QUEUE_LEN];
message_t * SinkP__uartQueue[SinkP__UART_QUEUE_LEN];
uint8_t SinkP__uartIn;
#line 54
uint8_t SinkP__uartOut;
bool SinkP__uartBusy;
#line 55
bool SinkP__uartFull;

uint8_t SinkP__numDrop = 0;
#line 57
uint8_t SinkP__numFail = 0;

static inline void SinkP__successBlink(void );



static inline void SinkP__dropBlink(void );




static inline void SinkP__failBlink(void );







static inline message_t *SinkP__qInsert(message_t *msg);
#line 100
static inline void SinkP__Boot__booted(void );
#line 125
static inline void SinkP__AliveTimer__fired(void );









static inline message_t *SinkP__OrinocoStatsReportingMsg__receive(message_t *msg, void *payload, uint8_t len);




static inline message_t *SinkP__OrinocoDebugReportingMsg__receive(message_t *msg, void *payload, uint8_t len);




static inline void SinkP__SerialControl__startDone(error_t error);






static inline void SinkP__SerialControl__stopDone(error_t error);




static inline void SinkP__RadioControl__startDone(error_t error);

static inline void SinkP__RadioControl__stopDone(error_t error);



static inline message_t *
SinkP__RadioReceive__receive(collection_id_t arg_0x2b010a049180, message_t *msg, void *payload, uint8_t len);



static inline void SinkP__uartSendTask__runTask(void );
#line 200
static inline void SinkP__UartSend__sendDone(am_id_t id, message_t *msg, error_t error);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void );
#line 62
static error_t PlatformP__MeasureClock__init(void );
# 51 "/opt/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP__Init__init(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t MotePlatformP__SubInit__init(void );
# 44 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void MotePlatformP__SerialIdPin__makeInput(void );
#line 41
static void MotePlatformP__SerialIdPin__clr(void );
# 49 "/opt/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void );
# 55 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );

static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );

static inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 56
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void );
#line 61
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void );
#line 61
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void );
#line 59
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeOutput(void );
#line 56
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void );
#line 56
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput(void );
# 67 "/opt/tinyos-2.x/tos/platforms/iris/MeasureClockC.nc"
enum MeasureClockC____nesc_unnamed4363 {


  MeasureClockC__MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC__cycles;

static inline error_t MeasureClockC__Init__init(void );
#line 154
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 60 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 57 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 72
static void RealMainP__Scheduler__taskLoop(void );
#line 65
static bool RealMainP__Scheduler__runNextTask(void );
# 63 "/opt/tinyos-2.x/tos/system/RealMainP.nc"
int main(void )   ;
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 56 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b0109efdab0);
# 76 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4364 {

  SchedulerBasicP__NUM_TASKS = 21U, 
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head;
uint8_t SchedulerBasicP__m_tail;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void );
#line 97
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
#line 124
static inline void SchedulerBasicP__Scheduler__init(void );









static bool SchedulerBasicP__Scheduler__runNextTask(void );
#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void );
#line 170
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 62 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 99 "../../../LocalTimeSyncedMicro/chips/atm1281/McuSleepC.nc"
const_uint8_t McuSleepC__atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 1, ((
1 << 3) | (1 << 2)) | (1 << 1), (
1 << 2) | (1 << 1), (
1 << 3) | (1 << 2), 
1 << 2 };

static inline mcu_power_t McuSleepC__getPowerState(void );
#line 150
static inline void McuSleepC__McuSleep__sleep(void );
#line 172
static inline void McuSleepC__McuPowerState__update(void );
# 89 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
static uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void );
#line 82
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlB(uint8_t control);
#line 80
static uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__getControlB(void );
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlA(uint8_t control);
# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__fired(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__overflow(void );
# 68 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__setTimer2Asynchronous(void );
#line 86
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__compareABusy(void );
# 48 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__start(void );
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get(void );
# 75 "../../../LocalTimeSyncedMicro/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__set;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__t0;
#line 76
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__dt;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base;


enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0____nesc_unnamed4365 {
  Atm1281AlarmAsyncP__0__MINDT = 2, 
  Atm1281AlarmAsyncP__0__MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Init__init(void );
#line 122
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setOcr2A(uint8_t n);
#line 139
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt(void );
#line 198
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__fired(void );
#line 225
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__get(void );
#line 268
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__overflow(void );
# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer2AsyncP__Compare__fired(void );
# 70 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm1281Timer2AsyncP__Timer__overflow(void );
# 99 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline uint8_t HplAtm1281Timer2AsyncP__Timer__get(void );
#line 126
static inline uint8_t HplAtm1281Timer2AsyncP__TimerCtrl__getControlB(void );




static inline void HplAtm1281Timer2AsyncP__TimerCtrl__setControlA(uint8_t x);





static void HplAtm1281Timer2AsyncP__TimerCtrl__setControlB(uint8_t x);
#line 154
static inline uint8_t HplAtm1281Timer2AsyncP__TimerCtrl__getInterruptFlag(void );
#line 181
static inline void HplAtm1281Timer2AsyncP__Compare__start(void );









static inline uint8_t HplAtm1281Timer2AsyncP__Compare__get(void );


static inline void HplAtm1281Timer2AsyncP__Compare__set(uint8_t t);









static __inline void HplAtm1281Timer2AsyncP__stabiliseTimer2(void );
#line 219
static inline mcu_power_t HplAtm1281Timer2AsyncP__McuPowerOverride__lowestState(void );
#line 242
void __vector_13(void ) __attribute((signal))   ;







void __vector_15(void ) __attribute((signal))   ;
#line 266
static inline void HplAtm1281Timer2AsyncP__TimerAsync__setTimer2Asynchronous(void );
#line 278
static inline int HplAtm1281Timer2AsyncP__TimerAsync__compareABusy(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 109 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 74 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4366 {
#line 74
  AlarmToTimerC__0__fired = 1U
};
#line 74
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 55
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 129
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b010a396da0);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4367 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 2U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4368 {

  VirtualizeTimerC__0__NUM_TIMERS = 4, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4369 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 100
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 139
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);
#line 159
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);




static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num);
#line 189
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num);




static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__gett0(uint8_t num);




static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getdt(uint8_t num);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__get(void );
# 53 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__get(void );




static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t OrinocoQueueP__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
# 31 "/opt/tinyos-2.x/tos/interfaces/Intercept.nc"
static bool OrinocoQueueP__Intercept__forward(
# 15 "../../lib/net/orinoco/OrinocoQueueP.nc"
collection_id_t arg_0x2b010a415b58, 
# 20 "/opt/tinyos-2.x/tos/interfaces/Intercept.nc"
message_t * msg, 

void * payload, 








uint8_t len);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t OrinocoQueueP__sendTask__postTask(void );
# 73 "/opt/tinyos-2.x/tos/interfaces/Queue.nc"
static 
#line 71
OrinocoQueueP__SendQueue__t  

OrinocoQueueP__SendQueue__head(void );
#line 90
static error_t OrinocoQueueP__SendQueue__enqueue(
#line 86
OrinocoQueueP__SendQueue__t  newVal);
#line 65
static uint8_t OrinocoQueueP__SendQueue__maxSize(void );
#line 81
static 
#line 79
OrinocoQueueP__SendQueue__t  

OrinocoQueueP__SendQueue__dequeue(void );
#line 50
static bool OrinocoQueueP__SendQueue__empty(void );







static uint8_t OrinocoQueueP__SendQueue__size(void );
# 84 "../../lib/net/orinoco/OrinocoConfig.nc"
static uint8_t OrinocoQueueP__Config__getMinQueueSize(void );
# 65 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static void OrinocoQueueP__SubPacket__clear(
#line 62
message_t * msg);
#line 78
static uint8_t OrinocoQueueP__SubPacket__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


OrinocoQueueP__SubPacket__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t OrinocoQueueP__SubPacket__maxPayloadLength(void );
# 57 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketField.nc"
static void OrinocoQueueP__PacketTimeSyncOffset__set(message_t *msg, OrinocoQueueP__PacketTimeSyncOffset__value_type value);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



OrinocoQueueP__Receive__receive(
# 13 "../../lib/net/orinoco/OrinocoQueueP.nc"
collection_id_t arg_0x2b010a416390, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 63 "/opt/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
static OrinocoQueueP__PacketTimeStampRadio__size_type OrinocoQueueP__PacketTimeStampRadio__timestamp(
#line 52
message_t * msg);
# 61 "/opt/tinyos-2.x/tos/lib/timer/LocalTime.nc"
static uint32_t OrinocoQueueP__LocalTimeRadio__get(void );
#line 61
static uint32_t OrinocoQueueP__LocalTimeMilli__get(void );
# 97 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
OrinocoQueueP__MsgPool__t * 


OrinocoQueueP__MsgPool__get(void );
#line 61
static bool OrinocoQueueP__MsgPool__empty(void );
#line 89
static error_t OrinocoQueueP__MsgPool__put(
#line 85
OrinocoQueueP__MsgPool__t * newVal);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t OrinocoQueueP__selfReceiveTask__postTask(void );
# 48 "../../lib/net/orinoco/OrinocoTrafficUpdates.nc"
static void OrinocoQueueP__TrafficUpdates__updatePktReceptionIntvl(void );
# 51 "/opt/tinyos-2.x/tos/interfaces/Cache.nc"
static void OrinocoQueueP__PacketHistory__insert(OrinocoQueueP__PacketHistory__t item);
#line 65
static void OrinocoQueueP__PacketHistory__flush(void );
#line 59
static bool OrinocoQueueP__PacketHistory__lookup(OrinocoQueueP__PacketHistory__t item);
# 71 "../../lib/net/orinoco/OrinocoQueueP.nc"
enum OrinocoQueueP____nesc_unnamed4370 {
#line 71
  OrinocoQueueP__selfReceiveTask = 3U
};
#line 71
typedef int OrinocoQueueP____nesc_sillytask_selfReceiveTask[OrinocoQueueP__selfReceiveTask];
#line 108
enum OrinocoQueueP____nesc_unnamed4371 {
#line 108
  OrinocoQueueP__sendTask = 4U
};
#line 108
typedef int OrinocoQueueP____nesc_sillytask_sendTask[OrinocoQueueP__sendTask];
#line 61
bool OrinocoQueueP__isForwarding_ = TRUE;
bool OrinocoQueueP__isRoot_ = FALSE;




orinoco_queue_statistics_t OrinocoQueueP__qs_ = { 0 };



static inline void OrinocoQueueP__selfReceiveTask__runTask(void );
#line 94
static void OrinocoQueueP__sendNext(bool force);
#line 108
static inline void OrinocoQueueP__sendTask__runTask(void );




static inline message_t * OrinocoQueueP__forward(message_t * msg);
#line 138
static orinoco_data_header_t *OrinocoQueueP__getHeader(message_t *msg);










static inline error_t OrinocoQueueP__Init__init(void );








static inline error_t OrinocoQueueP__StdControl__start(void );
#line 171
static inline error_t OrinocoQueueP__RootControl__setRoot(void );









static inline error_t OrinocoQueueP__RootControl__isRoot(void );
#line 292
static inline bool OrinocoQueueP__Intercept__default__forward(collection_id_t collectid, message_t *msg, void *payload, uint8_t len);





static inline void OrinocoQueueP__SubSend__sendDone(message_t *msg, error_t error);
#line 317
static inline message_t *
OrinocoQueueP__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 375
static inline void OrinocoQueueP__Packet__clear(message_t *msg);



static inline uint8_t OrinocoQueueP__Packet__payloadLength(message_t *msg);
#line 391
static inline void *OrinocoQueueP__Packet__getPayload(message_t *msg, uint8_t len);






static inline am_addr_t OrinocoQueueP__CollectionPacket__getOrigin(message_t *msg);







static inline collection_id_t OrinocoQueueP__CollectionPacket__getType(message_t *msg);
#line 424
static inline uint32_t OrinocoQueueP__PacketDelayMilli__delay(message_t *msg);





static inline uint32_t OrinocoQueueP__PacketDelayMilli__creationTime(message_t *msg);
#line 445
static inline bool OrinocoQueueP__CacheCompare__equal(mc_entry_t ce, mc_entry_t cmp);






static inline const orinoco_queue_statistics_t *OrinocoQueueP__QueueStatistics__get(void );
# 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void OrinocoRadioP__SplitControl__startDone(error_t error);
#line 138
static void OrinocoRadioP__SplitControl__stopDone(error_t error);
# 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t OrinocoRadioP__DataSubSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 96
static error_t OrinocoRadioP__DataSubSend__cancel(
#line 92
message_t * msg);
# 100 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void OrinocoRadioP__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 52 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t OrinocoRadioP__Random__rand16(void );
# 60 "../../lib/net/orinoco/OrinocoConfig.nc"
static uint16_t OrinocoRadioP__Config__getAbsWakeUpDeviation(void );
#line 78
static uint8_t OrinocoRadioP__Config__getNumWaitingIntervals(void );
#line 66
static uint8_t OrinocoRadioP__Config__getMinDwellTime(void );
#line 47
static uint16_t OrinocoRadioP__Config__getWakeUpInterval(void );
# 54 "../../interfaces/OrinocoTrafficStatistics.nc"
static uint32_t OrinocoRadioP__TrafficStats__getForwardDelay(void );
# 65 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static void OrinocoRadioP__SubPacket__clear(
#line 62
message_t * msg);
#line 78
static uint8_t OrinocoRadioP__SubPacket__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


OrinocoRadioP__SubPacket__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t OrinocoRadioP__SubPacket__maxPayloadLength(void );
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



OrinocoRadioP__Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t OrinocoRadioP__SubControl__start(void );
#line 130
static error_t OrinocoRadioP__SubControl__stop(void );
# 88 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t OrinocoRadioP__SubAMPacket__source(
#line 84
message_t * amsg);
#line 68
static am_addr_t OrinocoRadioP__SubAMPacket__address(void );









static am_addr_t OrinocoRadioP__SubAMPacket__destination(
#line 74
message_t * amsg);
#line 136
static bool OrinocoRadioP__SubAMPacket__isForMe(
#line 133
message_t * amsg);
# 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t OrinocoRadioP__BeaconSubSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

OrinocoRadioP__BeaconSubSend__getPayload(
#line 132
message_t * msg, 


uint8_t len);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t OrinocoRadioP__transition__postTask(void );
# 61 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
static void OrinocoRadioP__Leds__led0Off(void );
#line 56
static void OrinocoRadioP__Leds__led0On(void );
# 6 "../../lib/net/orinoco/OrinocoPathCost.nc"
static orinoco_pathcost_t OrinocoRadioP__PathCost__getCost(void );



static void OrinocoRadioP__PathCost__reviseCost(void );



static bool OrinocoRadioP__PathCost__inspectBeacon(message_t *msg, orinoco_pathcost_t cost, bool update);
# 151 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t OrinocoRadioP__Timer__getdt(void );
#line 92
static bool OrinocoRadioP__Timer__isRunning(void );
#line 73
static void OrinocoRadioP__Timer__startOneShot(uint32_t dt);




static void OrinocoRadioP__Timer__stop(void );
# 52 "../../lib/net/orinoco/OrinocoTrafficUpdates.nc"
static void OrinocoRadioP__TrafficUpdates__updateRxBurst(bool end);

static void OrinocoRadioP__TrafficUpdates__updateForwardDelay(bool done);
#line 50
static void OrinocoRadioP__TrafficUpdates__updateTxBurst(bool end);
# 161 "../../lib/net/orinoco/OrinocoRadioP.nc"
enum OrinocoRadioP____nesc_unnamed4372 {
#line 161
  OrinocoRadioP__transition = 5U
};
#line 161
typedef int OrinocoRadioP____nesc_sillytask_transition[OrinocoRadioP__transition];
#line 51
uint8_t OrinocoRadioP__curCongestionWin_;


error_t OrinocoRadioP__txDataError_;
am_addr_t OrinocoRadioP__txDataDst_;
uint8_t OrinocoRadioP__txAttempts_ = 0;
message_t *OrinocoRadioP__txDataMsg_ = (void *)0;
uint8_t OrinocoRadioP__txDataLen_;
uint8_t OrinocoRadioP__txDataMaxBackoff_ = 0;
message_t OrinocoRadioP__txBeaconMsg_;
am_addr_t OrinocoRadioP__txBeaconDst_ = AM_BROADCAST_ADDR;

bool OrinocoRadioP__beaconCancel_ = FALSE;


orinoco_packet_statistics_t OrinocoRadioP__ps_ = { 0 };





static inline error_t OrinocoRadioP__sendBeacon(void );
#line 92
static bool OrinocoRadioP__processBeacon(message_t *msg, bool update);
#line 112
static __inline uint16_t OrinocoRadioP__getRandomSleepTime(void );





static __inline uint32_t OrinocoRadioP__getMaxWaitingTime(void );
#line 130
enum OrinocoRadioP____nesc_unnamed4373 {
  OrinocoRadioP__OFF, 
  OrinocoRadioP__OFF_SUBSTOP, 
  OrinocoRadioP__OFF_SUBSTOP_DONE, 
  OrinocoRadioP__OFF_STOP, 
  OrinocoRadioP__OFF_START, 

  OrinocoRadioP__RECEIVE_SUBSTART, 
  OrinocoRadioP__RECEIVE_SUBSTART_DONE, 
  OrinocoRadioP__RECEIVE_SUBSEND, 
  OrinocoRadioP__RECEIVE_SUBSEND_DONE, 
  OrinocoRadioP__RECEIVE_TIMER, 
  OrinocoRadioP__RECEIVE, 
  OrinocoRadioP__RECEIVE_DONE, 

  OrinocoRadioP__FORWARD_SUBSTART, 
  OrinocoRadioP__FORWARD_SUBSTART_DONE, 
  OrinocoRadioP__FORWARD_TIMER, 
  OrinocoRadioP__FORWARD, 
  OrinocoRadioP__FORWARD_SUBSEND, 
  OrinocoRadioP__FORWARD_SUBSEND_DONE, 
  OrinocoRadioP__FORWARD_DONE, 

  OrinocoRadioP__SLEEP_SUBSTOP, 
  OrinocoRadioP__SLEEP_SUBSTOP_DONE, 
  OrinocoRadioP__SLEEP_TIMER, 
  OrinocoRadioP__SLEEP
};
uint8_t OrinocoRadioP__state_ = OrinocoRadioP__OFF;


static inline void OrinocoRadioP__transition__runTask(void );
#line 272
static inline error_t OrinocoRadioP__SplitControl__start(void );
#line 364
static inline uint8_t OrinocoRadioP__BackoffConfig__getMaximumBackoff(void );






static inline const orinoco_packet_statistics_t *OrinocoRadioP__PacketStatistics__get(void );






static inline void OrinocoRadioP__SubControl__startDone(error_t error);
#line 393
static inline void OrinocoRadioP__SubControl__stopDone(error_t error);
#line 409
static inline void OrinocoRadioP__Timer__fired(void );
#line 486
static message_t *OrinocoRadioP__BeaconSubReceive__receive(message_t *msg, void *arg_0x2b010a5535e8, uint8_t arg_0x2b010a553898);
#line 565
static inline message_t *OrinocoRadioP__DataSubReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 603
static inline void OrinocoRadioP__BeaconSubSend__sendDone(message_t *msg, error_t error);
#line 630
static void OrinocoRadioP__DataSubSend__sendDone(message_t *msg, error_t error);
#line 672
static inline error_t OrinocoRadioP__Send__send(message_t *msg, uint8_t len);
#line 749
static inline void OrinocoRadioP__Packet__clear(message_t *msg);



static inline uint8_t OrinocoRadioP__Packet__payloadLength(message_t *msg);







static inline uint8_t OrinocoRadioP__Packet__maxPayloadLength(void );



static inline void *OrinocoRadioP__Packet__getPayload(message_t *msg, uint8_t len);
# 120 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static uint8_t RF230RadioP__Ieee154PacketLayer__getDSN(message_t *msg);
#line 156
static void RF230RadioP__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr);
#line 69
static void RF230RadioP__Ieee154PacketLayer__createDataFrame(message_t *msg);
#line 125
static void RF230RadioP__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn);
#line 151
static uint16_t RF230RadioP__Ieee154PacketLayer__getSrcAddr(message_t *msg);
#line 63
static bool RF230RadioP__Ieee154PacketLayer__isDataFrame(message_t *msg);
#line 146
static void RF230RadioP__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr);
#line 136
static void RF230RadioP__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan);




static uint16_t RF230RadioP__Ieee154PacketLayer__getDestAddr(message_t *msg);
# 149 "/opt/tinyos-2.x/tos/chips/rf230/RF230RadioP.nc"
static inline uint8_t RF230RadioP__UniqueConfig__getSequenceNumber(message_t *msg);




static inline void RF230RadioP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t dsn);




static inline am_addr_t RF230RadioP__UniqueConfig__getSender(message_t *msg);




static inline void RF230RadioP__UniqueConfig__reportChannelError(void );








static inline am_addr_t RF230RadioP__ActiveMessageConfig__destination(message_t *msg);




static inline void RF230RadioP__ActiveMessageConfig__setDestination(message_t *msg, am_addr_t addr);




static inline am_addr_t RF230RadioP__ActiveMessageConfig__source(message_t *msg);




static inline void RF230RadioP__ActiveMessageConfig__setSource(message_t *msg, am_addr_t addr);









static inline void RF230RadioP__ActiveMessageConfig__setGroup(message_t *msg, am_group_t grp);




static inline error_t RF230RadioP__ActiveMessageConfig__checkFrame(message_t *msg);
#line 285
static inline void RF230RadioP__RadioAlarm__fired(void );
# 60 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__fired(
# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x2b010a6ca908);
# 109 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__getNow(void );
#line 66
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__start(/*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type dt);
# 59 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__schedule(void );
# 55 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state;
enum /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0____nesc_unnamed4374 {

  RadioAlarmP__0__STATE_READY = 0, 
  RadioAlarmP__0__STATE_WAIT = 1, 
  RadioAlarmP__0__STATE_FIRED = 2
};

uint8_t /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__alarm;

static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired(void );










static __inline tradio_size /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(uint8_t id);




static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run(void );








static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(uint8_t id);



static __inline bool /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(uint8_t id);




static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(uint8_t id, tradio_size timeout);
# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
static void TaskletC__Tasklet__run(void );
# 72 "/opt/tinyos-2.x/tos/lib/rfxlink/util/TaskletC.nc"
uint8_t TaskletC__state;

static void TaskletC__doit(void );
#line 94
static __inline void TaskletC__Tasklet__suspend(void );




static void TaskletC__Tasklet__resume(void );
#line 112
static void TaskletC__Tasklet__schedule(void );
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__send(message_t *msg);
#line 64
static error_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__cancel(message_t *msg);
# 59 "/opt/tinyos-2.x/tos/interfaces/SendNotifier.nc"
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__aboutToSend(
# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x2b010a72d630, 
# 59 "/opt/tinyos-2.x/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 110 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__sendDone(
# 45 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x2b010a703cc8, 
# 103 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__receive(
# 47 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x2b010a7009c0, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 63 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
static error_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__checkFrame(message_t *msg);
#line 46
static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__source(message_t *msg);
#line 40
static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__destination(message_t *msg);








static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setSource(message_t *msg, am_addr_t addr);
#line 43
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setDestination(message_t *msg, am_addr_t addr);
#line 55
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setGroup(message_t *msg, am_group_t grp);
# 50 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amAddress(void );




static am_group_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amGroup(void );
# 70 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__clear(message_t *msg);
#line 49
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(message_t *msg);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__receive(
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x2b010a702de0, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__receive(
# 51 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x2b010a72c220, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__receive(
# 52 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x2b010a72cdb0, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 67 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static activemessage_header_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(message_t *msg);




static inline void */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getPayload(message_t *msg);






static error_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__send(am_id_t id, am_addr_t addr, message_t *msg, uint8_t len);
#line 98
static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(message_t *msg, error_t error);




static __inline error_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__cancel(am_id_t id, message_t *msg);




static inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__default__sendDone(am_id_t id, message_t *msg, error_t error);








static __inline void */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__getPayload(am_id_t id, message_t *msg, uint8_t len);




static inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__default__aboutToSend(am_id_t id, am_addr_t addr, message_t *msg);





static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(message_t *msg);
#line 141
static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);




static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);




static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);




static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);






static __inline am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address(void );




static __inline am_group_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__localGroup(void );




static __inline bool /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(message_t *msg);





static __inline am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(message_t *msg);




static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(message_t *msg, am_addr_t addr);




static __inline am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__source(message_t *msg);




static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setSource(message_t *msg, am_addr_t addr);




static __inline am_id_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(message_t *msg);




static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(message_t *msg, am_id_t type);









static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setGroup(message_t *msg, am_group_t grp);










static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength(void );









static inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__clear(message_t *msg);






static inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__clear(message_t *msg);




static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(message_t *msg);




static inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(message_t *msg, uint8_t len);




static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength(void );




static void */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(message_t *msg, uint8_t len);
# 62 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC__addr = TOS_AM_ADDRESS;


am_group_t ActiveMessageAddressC__group = TOS_AM_GROUP;






static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );
#line 93
static am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
#line 106
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(message_t *msg);
#line 64
static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__cancel(message_t *msg);
# 120 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release(void );
#line 97
static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__immediateRequest(void );
#line 88
static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__request(void );
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(message_t *msg, error_t error);
# 51 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
message_t */*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending;

static inline error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__send(message_t *msg);
#line 68
static inline void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted(void );









static inline void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(message_t *msg, error_t result);





static inline error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__cancel(message_t *msg);
# 49 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0____nesc_unnamed4375 {
#line 49
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[1U];
uint8_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
uint8_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

static inline error_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init(void );




static inline bool /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );



static inline bool /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
# 53 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(
# 52 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b010a7fd1a0);
# 61 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(
# 52 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b010a7fd1a0);
# 65 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b010a7fc6e0);
# 59 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b010a7fc6e0);
# 79 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void );
# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__granted(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b010a7ff020);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void );
# 68 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
enum /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_unnamed4376 {
#line 68
  SimpleArbiterP__0__grantedTask = 6U
};
#line 68
typedef int /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_sillytask_grantedTask[/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask];
#line 62
enum /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_unnamed4377 {
#line 62
  SimpleArbiterP__0__RES_IDLE = 0, SimpleArbiterP__0__RES_GRANTING = 1, SimpleArbiterP__0__RES_BUSY = 2
};
#line 63
enum /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_unnamed4378 {
#line 63
  SimpleArbiterP__0__NO_RES = 0xFF
};
uint8_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_IDLE;
uint8_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__NO_RES;



static inline error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id);
#line 83
static inline error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(uint8_t id);
#line 96
static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id);
#line 149
static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );








static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(uint8_t id);

static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id);

static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id);

static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__payloadLength(message_t *msg);
#line 43
static uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__headerLength(message_t *msg);
# 185 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static bool /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__isForMe(message_t *msg);
# 97 "/opt/tinyos-2.x/tos/interfaces/Ieee154Send.nc"
static void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 56 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__getPayload(message_t *msg);
#line 68
static inline uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(message_t *msg);
#line 127
static inline void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(message_t *msg, error_t error);




static inline void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(message_t *msg, error_t error);









static inline message_t */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(message_t *msg);








static inline message_t */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(message_t *msg, void *payload, uint8_t len);
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__send(message_t *msg);
#line 64
static error_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__cancel(message_t *msg);
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosReceive__receive(message_t *msg);
# 70 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__clear(message_t *msg);
#line 49
static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(message_t *msg);
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__sendDone(message_t *msg, error_t error);
#line 54
static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error);
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Receive__receive(message_t *msg);
# 91 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(message_t *msg);




static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(message_t *msg);
#line 127
static network_header_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(message_t *msg);




static error_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(message_t *msg);







static inline error_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__cancel(message_t *msg);




enum /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0____nesc_unnamed4379 {


  TinyosNetworkLayerC__0__PAYLOAD_OFFSET = sizeof(network_header_t )
};




static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(message_t *msg);




static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(message_t *msg);




static inline void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__maxPayloadLength(void );









static inline void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__clear(message_t *msg);
#line 214
static inline void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(message_t *msg, error_t result);







static inline message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(message_t *msg);
# 50 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress(void );




static am_group_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amGroup(void );
# 70 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__clear(message_t *msg);
#line 49
static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(message_t *msg);
# 57 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
enum /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0____nesc_unnamed4380 {

  Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_MASK = (((IEEE154_TYPE_MASK << IEEE154_FCF_FRAME_TYPE)
   | (1 << IEEE154_FCF_INTRAPAN))
   | (IEEE154_ADDR_MASK << IEEE154_FCF_DEST_ADDR_MODE))
   | (IEEE154_ADDR_MASK << IEEE154_FCF_SRC_ADDR_MODE), 

  Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_VALUE = (((IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE)
   | (1 << IEEE154_FCF_INTRAPAN))
   | (IEEE154_ADDR_SHORT << IEEE154_FCF_DEST_ADDR_MODE))
   | (IEEE154_ADDR_SHORT << IEEE154_FCF_SRC_ADDR_MODE), 

  Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_PRESERVE = (1 << IEEE154_FCF_ACK_REQ)
   | (1 << IEEE154_FCF_FRAME_PENDING), 

  Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_LENGTH = 3, 
  Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_MASK = IEEE154_TYPE_MASK << IEEE154_FCF_FRAME_TYPE, 
  Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_VALUE = IEEE154_TYPE_ACK << IEEE154_FCF_FRAME_TYPE
};

static ieee154_simple_header_t */*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(message_t *msg);
#line 92
static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(message_t *msg);




static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(message_t *msg);
#line 158
static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(message_t *msg);




static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn);




static inline uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(message_t *msg);




static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan);




static inline uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(message_t *msg);




static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr);




static inline uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(message_t *msg);




static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr);
#line 212
static inline ieee154_saddr_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr(void );




static inline ieee154_panid_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan(void );




static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(message_t *msg);
#line 282
static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__maxPayloadLength(void );









static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__clear(message_t *msg);
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__send(message_t *msg);
#line 64
static error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__cancel(message_t *msg);
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
static bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__get(uint8_t idx);




static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__set(uint8_t idx);
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__sendDone(message_t *msg, error_t error);
# 71 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Neighborhood.nc"
static uint8_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__insertNode(am_addr_t id);
# 53 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__header(message_t *msg);
# 52 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueConfig.nc"
static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t number);





static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__reportChannelError(void );
#line 42
static uint8_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSequenceNumber(message_t *msg);




static am_addr_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSender(message_t *msg);
# 61 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueLayerP.nc"
uint8_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber;

static inline error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init(void );





static inline error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(message_t *msg);





static inline error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__cancel(message_t *msg);




static inline void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(message_t *msg, error_t error);




static inline bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(message_t *msg);





uint8_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[5];

static inline message_t */*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(message_t *msg);
#line 116
static inline void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(uint8_t idx);
# 80 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Neighborhood.nc"
static void NeighborhoodP__Neighborhood__evicted(uint8_t idx);
# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodP.nc"
am_addr_t NeighborhoodP__nodes[5];
uint8_t NeighborhoodP__ages[5];
uint8_t NeighborhoodP__flags[5];
uint8_t NeighborhoodP__time;
uint8_t NeighborhoodP__last;

static inline error_t NeighborhoodP__Init__init(void );
#line 94
static inline uint8_t NeighborhoodP__Neighborhood__insertNode(am_addr_t node);
#line 158
static __inline bool NeighborhoodP__NeighborhoodFlag__get(uint8_t bit, uint8_t idx);




static __inline void NeighborhoodP__NeighborhoodFlag__set(uint8_t bit, uint8_t idx);
# 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__startDone(error_t error);
#line 138
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stopDone(error_t error);
# 44 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioState.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOff(void );
#line 56
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOn(void );
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__sendDone(message_t *msg, error_t error);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask(void );
#line 67
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__postTask(void );
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Receive__receive(message_t *msg);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__postTask(void );
# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__send(message_t *msg);
# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioChannel.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannelDone(void );
# 72 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend(void );






static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume(void );
# 144 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
enum /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4381 {
#line 144
  MessageBufferLayerP__0__stateDoneTask = 7U
};
#line 144
typedef int /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_sillytask_stateDoneTask[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask];
#line 189
enum /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4382 {
#line 189
  MessageBufferLayerP__0__sendTask = 8U
};
#line 189
typedef int /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_sillytask_sendTask[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask];
#line 322
enum /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4383 {
#line 322
  MessageBufferLayerP__0__deliverTask = 9U
};
#line 322
typedef int /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_sillytask_deliverTask[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask];
#line 63
uint8_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state;
enum /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4384 {

  MessageBufferLayerP__0__STATE_READY = 0, 
  MessageBufferLayerP__0__STATE_TX_PENDING = 1, 
  MessageBufferLayerP__0__STATE_TX_RETRY = 2, 
  MessageBufferLayerP__0__STATE_TX_SEND = 3, 
  MessageBufferLayerP__0__STATE_TX_DONE = 4, 
  MessageBufferLayerP__0__STATE_TURN_ON = 5, 
  MessageBufferLayerP__0__STATE_TURN_OFF = 6, 
  MessageBufferLayerP__0__STATE_CHANNEL = 7
};

static inline error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start(void );
#line 97
static inline error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stop(void );
#line 144
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask(void );
#line 163
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done(void );
#line 176
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone(void );





message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg;
error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError;
uint8_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries;


enum /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4385 {
#line 187
  MessageBufferLayerP__0__MAX_RETRIES = 5
};
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask(void );
#line 217
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error_t error);
#line 230
static inline error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(message_t *msg);
#line 252
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready(void );








static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run(void );



static inline error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__cancel(message_t *msg);
#line 291
enum /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4386 {

  MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE = 3
};

message_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueData[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE];
message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE];

uint8_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead;
uint8_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;

static inline error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init(void );









static inline bool /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(message_t *msg);









static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask(void );
#line 351
static inline message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(message_t *msg);
# 55 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__clear(message_t *msg);
#line 50
static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__set(message_t *msg);
# 70 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__clear(message_t *msg);
#line 49
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__metadataLength(message_t *msg);
# 60 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline timestamp_metadata_t */*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__getMeta(message_t *msg);
#line 72
static uint32_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__timestamp(message_t *msg);




static inline void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(message_t *msg);




static inline void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(message_t *msg, uint32_t value);
#line 116
static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__maxPayloadLength(void );




static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(message_t *msg);




static inline void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__clear(message_t *msg);
# 70 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__clear(message_t *msg);
#line 49
static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__metadataLength(message_t *msg);
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline flags_metadata_t */*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(message_t *msg);






static bool /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(uint8_t bit, message_t *msg);




static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(uint8_t bit, message_t *msg);






static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(uint8_t bit, message_t *msg);
#line 90
static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__maxPayloadLength(void );




static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(message_t *msg);




static inline void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__clear(message_t *msg);
# 52 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioCCA.nc"
static void RF230DriverLayerP__RadioCCA__done(error_t error);
# 66 "/opt/tinyos-2.x/tos/lib/timer/BusyWait.nc"
static void RF230DriverLayerP__BusyWait__wait(RF230DriverLayerP__BusyWait__size_type dt);
# 55 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
static void RF230DriverLayerP__RSSIFlag__clear(message_t *msg);
#line 50
static void RF230DriverLayerP__RSSIFlag__set(message_t *msg);
# 70 "/opt/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
static void RF230DriverLayerP__PacketTimeStamp__clear(
#line 66
message_t * msg);
#line 78
static void RF230DriverLayerP__PacketTimeStamp__set(
#line 73
message_t * msg, 




RF230DriverLayerP__PacketTimeStamp__size_type value);
# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void RF230DriverLayerP__RSTN__makeOutput(void );
#line 40
static void RF230DriverLayerP__RSTN__set(void );
static void RF230DriverLayerP__RSTN__clr(void );
# 50 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
static void RF230DriverLayerP__RadioAlarm__wait(tradio_size timeout);
#line 45
static bool RF230DriverLayerP__RadioAlarm__isFree(void );
#line 65
static tradio_size RF230DriverLayerP__RadioAlarm__getNow(void );
# 69 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioState.nc"
static void RF230DriverLayerP__RadioState__done(void );
# 61 "/opt/tinyos-2.x/tos/lib/timer/LocalTime.nc"
static uint32_t RF230DriverLayerP__LocalTime__get(void );
# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void RF230DriverLayerP__SLP_TR__makeOutput(void );
#line 40
static void RF230DriverLayerP__SLP_TR__set(void );
static void RF230DriverLayerP__SLP_TR__clr(void );
# 46 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverConfig.nc"
static uint8_t RF230DriverLayerP__Config__maxPayloadLength(void );
#line 40
static uint8_t RF230DriverLayerP__Config__headerLength(message_t *msg);
#line 52
static uint8_t RF230DriverLayerP__Config__metadataLength(message_t *msg);






static uint8_t RF230DriverLayerP__Config__headerPreloadLength(void );





static bool RF230DriverLayerP__Config__requiresRssiCca(message_t *msg);
# 53 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t *RF230DriverLayerP__RadioReceive__receive(message_t *msg);
#line 46
static bool RF230DriverLayerP__RadioReceive__header(message_t *msg);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t RF230DriverLayerP__releaseSpi__postTask(void );
# 120 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t RF230DriverLayerP__SpiResource__release(void );
#line 97
static error_t RF230DriverLayerP__SpiResource__immediateRequest(void );
#line 88
static error_t RF230DriverLayerP__SpiResource__request(void );
#line 128
static bool RF230DriverLayerP__SpiResource__isOwner(void );
# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void RF230DriverLayerP__SELN__makeOutput(void );
#line 40
static void RF230DriverLayerP__SELN__set(void );
static void RF230DriverLayerP__SELN__clr(void );
# 63 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
static void RF230DriverLayerP__RadioSend__ready(void );
#line 56
static void RF230DriverLayerP__RadioSend__sendDone(error_t error);
# 66 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static void RF230DriverLayerP__IRQ__disable(void );
#line 53
static error_t RF230DriverLayerP__IRQ__captureRisingEdge(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/FastSpiByte.nc"
static void RF230DriverLayerP__FastSpiByte__splitWrite(uint8_t data);
#line 74
static uint8_t RF230DriverLayerP__FastSpiByte__splitReadWrite(uint8_t data);
#line 68
static uint8_t RF230DriverLayerP__FastSpiByte__splitRead(void );
#line 81
static uint8_t RF230DriverLayerP__FastSpiByte__write(uint8_t data);
# 40 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
static bool RF230DriverLayerP__TimeSyncFlag__get(message_t *msg);









static void RF230DriverLayerP__TimeSyncFlag__set(message_t *msg);




static void RF230DriverLayerP__TransmitPowerFlag__clear(message_t *msg);
#line 40
static bool RF230DriverLayerP__TransmitPowerFlag__get(message_t *msg);
# 59 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
static void RF230DriverLayerP__Tasklet__schedule(void );
# 861 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayerP.nc"
enum RF230DriverLayerP____nesc_unnamed4387 {
#line 861
  RF230DriverLayerP__releaseSpi = 10U
};
#line 861
typedef int RF230DriverLayerP____nesc_sillytask_releaseSpi[RF230DriverLayerP__releaseSpi];
#line 96
static inline rf230_header_t *RF230DriverLayerP__getHeader(message_t *msg);




static void *RF230DriverLayerP__getPayload(message_t *msg);




static rf230_metadata_t *RF230DriverLayerP__getMeta(message_t *msg);






uint8_t RF230DriverLayerP__state;
enum RF230DriverLayerP____nesc_unnamed4388 {

  RF230DriverLayerP__STATE_P_ON = 0, 
  RF230DriverLayerP__STATE_SLEEP = 1, 
  RF230DriverLayerP__STATE_SLEEP_2_TRX_OFF = 2, 
  RF230DriverLayerP__STATE_TRX_OFF = 3, 
  RF230DriverLayerP__STATE_TRX_OFF_2_RX_ON = 4, 
  RF230DriverLayerP__STATE_RX_ON = 5, 
  RF230DriverLayerP__STATE_BUSY_TX_2_RX_ON = 6
};

uint8_t RF230DriverLayerP__cmd;
enum RF230DriverLayerP____nesc_unnamed4389 {

  RF230DriverLayerP__CMD_NONE = 0, 
  RF230DriverLayerP__CMD_TURNOFF = 1, 
  RF230DriverLayerP__CMD_STANDBY = 2, 
  RF230DriverLayerP__CMD_TURNON = 3, 
  RF230DriverLayerP__CMD_TRANSMIT = 4, 
  RF230DriverLayerP__CMD_RECEIVE = 5, 
  RF230DriverLayerP__CMD_CCA = 6, 
  RF230DriverLayerP__CMD_CHANNEL = 7, 
  RF230DriverLayerP__CMD_SIGNAL_DONE = 8, 
  RF230DriverLayerP__CMD_DOWNLOAD = 9
};

bool RF230DriverLayerP__radioIrq;

uint8_t RF230DriverLayerP__txPower;
uint8_t RF230DriverLayerP__channel;

message_t *RF230DriverLayerP__rxMsg;
message_t RF230DriverLayerP__rxMsgBuffer;

uint16_t RF230DriverLayerP__capturedTime;

uint8_t RF230DriverLayerP__rssiClear;
uint8_t RF230DriverLayerP__rssiBusy;



static __inline void RF230DriverLayerP__writeRegister(uint8_t reg, uint8_t value);
#line 167
static __inline uint8_t RF230DriverLayerP__readRegister(uint8_t reg);
#line 183
enum RF230DriverLayerP____nesc_unnamed4390 {

  RF230DriverLayerP__SLEEP_WAKEUP_TIME = (uint16_t )(880 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL), 
  RF230DriverLayerP__CCA_REQUEST_TIME = (uint16_t )(140 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL), 

  RF230DriverLayerP__TX_SFD_DELAY = (uint16_t )(176 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL), 
  RF230DriverLayerP__RX_SFD_DELAY = (uint16_t )(8 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL)
};

static inline void RF230DriverLayerP__RadioAlarm__fired(void );
#line 218
static inline error_t RF230DriverLayerP__PlatformInit__init(void );
#line 236
static inline error_t RF230DriverLayerP__SoftwareInit__init(void );





static inline void RF230DriverLayerP__initRadio(void );
#line 270
static inline void RF230DriverLayerP__SpiResource__granted(void );
#line 284
static bool RF230DriverLayerP__isSpiAcquired(void );
#line 324
static __inline void RF230DriverLayerP__changeChannel(void );
#line 342
static __inline void RF230DriverLayerP__changeState(void );
#line 398
static inline error_t RF230DriverLayerP__RadioState__turnOff(void );
#line 424
static inline error_t RF230DriverLayerP__RadioState__turnOn(void );
#line 441
static inline error_t RF230DriverLayerP__RadioSend__send(message_t *msg);
#line 613
static inline void RF230DriverLayerP__RadioCCA__default__done(error_t error);



static __inline void RF230DriverLayerP__downloadMessage(void );
#line 702
static inline void RF230DriverLayerP__IRQ__captured(uint16_t time);
#line 715
static inline void RF230DriverLayerP__serviceRadio(void );
#line 861
static inline void RF230DriverLayerP__releaseSpi__runTask(void );




static inline void RF230DriverLayerP__Tasklet__run(void );
#line 896
static inline uint8_t RF230DriverLayerP__RadioPacket__headerLength(message_t *msg);




static uint8_t RF230DriverLayerP__RadioPacket__payloadLength(message_t *msg);




static inline void RF230DriverLayerP__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);








static inline uint8_t RF230DriverLayerP__RadioPacket__maxPayloadLength(void );






static inline uint8_t RF230DriverLayerP__RadioPacket__metadataLength(message_t *msg);




static inline void RF230DriverLayerP__RadioPacket__clear(message_t *msg);






static inline bool RF230DriverLayerP__PacketTransmitPower__isSet(message_t *msg);




static inline uint8_t RF230DriverLayerP__PacketTransmitPower__get(message_t *msg);
#line 962
static inline uint8_t RF230DriverLayerP__PacketRSSI__get(message_t *msg);




static inline void RF230DriverLayerP__PacketRSSI__clear(message_t *msg);




static inline void RF230DriverLayerP__PacketRSSI__set(message_t *msg, uint8_t value);










static inline bool RF230DriverLayerP__PacketTimeSyncOffset__isSet(message_t *msg);




static inline uint8_t RF230DriverLayerP__PacketTimeSyncOffset__get(message_t *msg);









static inline void RF230DriverLayerP__PacketTimeSyncOffset__set(message_t *msg, uint8_t value);
#line 1022
static inline void RF230DriverLayerP__PacketLinkQuality__set(message_t *msg, uint8_t value);
# 44 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void HplRF230P__PortCLKM__makeInput(void );
#line 41
static void HplRF230P__PortCLKM__clr(void );
# 88 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplRF230P__Capture__setEdge(bool up);
#line 47
static HplRF230P__Capture__size_type HplRF230P__Capture__get(void );
#line 64
static void HplRF230P__Capture__reset(void );


static void HplRF230P__Capture__start(void );


static void HplRF230P__Capture__stop(void );
# 44 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void HplRF230P__PortIRQ__makeInput(void );
#line 41
static void HplRF230P__PortIRQ__clr(void );
# 61 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static void HplRF230P__IRQ__captured(uint16_t time);
# 53 "/opt/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline error_t HplRF230P__PlatformInit__init(void );










static inline void HplRF230P__Capture__captured(uint16_t time);









static inline error_t HplRF230P__IRQ__captureRisingEdge(void );
#line 89
static inline void HplRF230P__IRQ__disable(void );
# 82 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static void Atm128SpiP__SpiPacket__sendDone(
#line 75
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 89 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static void Atm128SpiP__Spi__sleep(void );
#line 83
static void Atm128SpiP__Spi__initMaster(void );
#line 113
static void Atm128SpiP__Spi__enableInterrupt(bool enabled);
#line 97
static uint8_t Atm128SpiP__Spi__read(void );
#line 141
static void Atm128SpiP__Spi__setMasterDoubleSpeed(bool on);
#line 131
static void Atm128SpiP__Spi__setClock(uint8_t speed);




static bool Atm128SpiP__Spi__isInterruptPending(void );
#line 125
static void Atm128SpiP__Spi__setClockPolarity(bool highWhenIdle);
#line 103
static void Atm128SpiP__Spi__write(uint8_t data);
#line 116
static void Atm128SpiP__Spi__enableSpi(bool busOn);
#line 128
static void Atm128SpiP__Spi__setClockPhase(bool sampleOnTrailing);
# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void Atm128SpiP__McuPowerState__update(void );
# 294 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
enum Atm128SpiP____nesc_unnamed4391 {
#line 294
  Atm128SpiP__zeroTask = 11U
};
#line 294
typedef int Atm128SpiP____nesc_sillytask_zeroTask[Atm128SpiP__zeroTask];
#line 103
uint16_t Atm128SpiP__len;
uint8_t * Atm128SpiP__txBuffer;
uint8_t * Atm128SpiP__rxBuffer;
uint16_t Atm128SpiP__pos;

enum Atm128SpiP____nesc_unnamed4392 {
  Atm128SpiP__SPI_IDLE, 
  Atm128SpiP__SPI_BUSY, 
  Atm128SpiP__SPI_ATOMIC_SIZE = 10
};
#line 124
enum Atm128SpiP____nesc_unnamed4393 {
  Atm128SpiP__PLATFORM_MHZ = 8
};


static void Atm128SpiP__startSpi(void );
#line 165
static inline void Atm128SpiP__stopSpi(void );







static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx);
#line 192
static __inline void Atm128SpiP__FastSpiByte__splitWrite(uint8_t data);



static __inline uint8_t Atm128SpiP__FastSpiByte__splitRead(void );





static __inline uint8_t Atm128SpiP__FastSpiByte__splitReadWrite(uint8_t data);
#line 214
static __inline uint8_t Atm128SpiP__FastSpiByte__write(uint8_t data);
#line 249
static inline error_t Atm128SpiP__sendNextPart(void );
#line 294
static inline void Atm128SpiP__zeroTask__runTask(void );
#line 349
static inline 
#line 348
void Atm128SpiP__SpiPacket__default__sendDone(
uint8_t *_txbuffer, uint8_t *_rxbuffer, 
uint16_t _length, error_t _success);

static inline void Atm128SpiP__Spi__dataReady(uint8_t data);
#line 392
static inline void Atm128SpiP__ResourceConfigure__configure(uint8_t id);



static inline void Atm128SpiP__ResourceConfigure__unconfigure(uint8_t id);
# 44 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void HplAtm128SpiP__MISO__makeInput(void );

static void HplAtm128SpiP__SCK__makeOutput(void );
#line 46
static void HplAtm128SpiP__SS__makeOutput(void );
# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void HplAtm128SpiP__Mcu__update(void );
# 109 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static void HplAtm128SpiP__SPI__dataReady(uint8_t data);
# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void HplAtm128SpiP__MOSI__makeOutput(void );
# 96 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__initMaster(void );
#line 112
static inline void HplAtm128SpiP__SPI__sleep(void );


static inline uint8_t HplAtm128SpiP__SPI__read(void );
static inline void HplAtm128SpiP__SPI__write(uint8_t d);


void __vector_24(void ) __attribute((signal))   ;




static inline bool HplAtm128SpiP__SPI__isInterruptPending(void );







static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled);
#line 147
static void HplAtm128SpiP__SPI__enableSpi(bool enabled);
#line 173
static inline void HplAtm128SpiP__SPI__setMasterBit(bool isMaster);
#line 186
static inline void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle);
#line 200
static inline void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing);
#line 217
static inline void HplAtm128SpiP__SPI__setClock(uint8_t v);
#line 230
static inline void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on);
# 49 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1____nesc_unnamed4394 {
#line 49
  FcfsResourceQueueC__1__NO_ENTRY = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[1U];
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init(void );




static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );



static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id);
# 53 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__requested(
# 52 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b010a7fd1a0);
# 61 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__immediateRequested(
# 52 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b010a7fd1a0);
# 65 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__unconfigure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b010a7fc6e0);
# 59 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__configure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b010a7fc6e0);
# 79 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__dequeue(void );
# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__granted(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b010a7ff020);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__postTask(void );
# 68 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1____nesc_unnamed4395 {
#line 68
  SimpleArbiterP__1__grantedTask = 12U
};
#line 68
typedef int /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1____nesc_sillytask_grantedTask[/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask];
#line 62
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1____nesc_unnamed4396 {
#line 62
  SimpleArbiterP__1__RES_IDLE = 0, SimpleArbiterP__1__RES_GRANTING = 1, SimpleArbiterP__1__RES_BUSY = 2
};
#line 63
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1____nesc_unnamed4397 {
#line 63
  SimpleArbiterP__1__NO_RES = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_IDLE;
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__NO_RES;



static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__request(uint8_t id);
#line 83
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__immediateRequest(uint8_t id);
#line 96
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__release(uint8_t id);
#line 142
static inline bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__isOwner(uint8_t id);






static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__runTask(void );








static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__default__granted(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__requested(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__immediateRequested(uint8_t id);
# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer1P__CompareA__fired(void );
# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm1281Timer1P__Capture__captured(HplAtm1281Timer1P__Capture__size_type t);
# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer1P__CompareB__fired(void );
#line 58
static void HplAtm1281Timer1P__CompareC__fired(void );
# 70 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm1281Timer1P__Timer__overflow(void );
# 90 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline uint16_t HplAtm1281Timer1P__Timer__get(void );


static inline void HplAtm1281Timer1P__Timer__set(uint16_t t);








static inline void HplAtm1281Timer1P__Timer__setScale(uint8_t s);










static inline uint8_t HplAtm1281Timer1P__TimerCtrl__getControlB(void );
#line 126
static inline void HplAtm1281Timer1P__TimerCtrl__setControlB(uint8_t x);
#line 145
static inline uint8_t HplAtm1281Timer1P__TimerCtrl__getInterruptFlag(void );









static inline void HplAtm1281Timer1P__Capture__setEdge(bool up);



static inline void HplAtm1281Timer1P__Capture__reset(void );
static inline void HplAtm1281Timer1P__CompareA__reset(void );



static inline void HplAtm1281Timer1P__Timer__start(void );
static inline void HplAtm1281Timer1P__Capture__start(void );
static inline void HplAtm1281Timer1P__CompareA__start(void );




static inline void HplAtm1281Timer1P__Capture__stop(void );
static inline void HplAtm1281Timer1P__CompareA__stop(void );



static inline bool HplAtm1281Timer1P__Timer__test(void );
#line 214
static inline void HplAtm1281Timer1P__CompareA__set(uint16_t t);




static inline uint16_t HplAtm1281Timer1P__Capture__get(void );






void __vector_17(void ) __attribute((interrupt))   ;


static inline void HplAtm1281Timer1P__CompareB__default__fired(void );
void __vector_18(void ) __attribute((interrupt))   ;


static inline void HplAtm1281Timer1P__CompareC__default__fired(void );
void __vector_19(void ) __attribute((interrupt))   ;



void __vector_16(void ) __attribute((interrupt))   ;



void __vector_20(void ) __attribute((interrupt))   ;
# 104 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale);
#line 67
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(/*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size t);










static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start(void );
# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void );








static inline void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void );
# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__fired(void );
# 62 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__reset(void );
#line 54
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__set(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__size_type t);










static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__start(void );


static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop(void );
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get(void );
# 62 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__getNow(void );
#line 78
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__start(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size dt);




static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size t0, /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size dt);
#line 119
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired(void );






static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow(void );
# 87 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test(void );
#line 61
static /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get(void );
# 50 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void );




static inline bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void );









static inline void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__overflow(void );
# 67 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__upper_count_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__m_upper;

enum /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0____nesc_unnamed4398 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_size_type ) - /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_size_type ) + 0, 



  TransformCounterC__0__OVERFLOW_MASK = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__upper_count_type )2 << (/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};
#line 133
static inline void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void );
# 58 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 40 "/opt/tinyos-2.x/tos/platforms/micaz/BusyWaitMicroC.nc"
static __inline void BusyWaitMicroC__BusyWait__wait(uint16_t dt);
# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__CounterFrom__size_type /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__CounterFrom__get(void );






static bool /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__CounterFrom__isOverflowPending(void );










static void /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__Counter__overflow(void );
# 67 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__upper_count_type /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__m_upper;

enum /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1____nesc_unnamed4399 {

  TransformCounterC__1__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__1__HIGH_SHIFT_LEFT = 8 * sizeof(/*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__from_size_type ) - /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__LOW_SHIFT_RIGHT, 
  TransformCounterC__1__NUM_UPPER_BITS = 8 * sizeof(/*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__to_size_type ) - 8 * sizeof(/*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__from_size_type ) + 0, 



  TransformCounterC__1__OVERFLOW_MASK = /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__NUM_UPPER_BITS ? ((/*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__upper_count_type )2 << (/*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__to_size_type /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__Counter__get(void );
#line 133
static inline void /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__CounterFrom__overflow(void );
# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*LocalTimeSyncedMicroC.CounterToLocalMicroC*/CounterToLocalMicroC__0__Counter__size_type /*LocalTimeSyncedMicroC.CounterToLocalMicroC*/CounterToLocalMicroC__0__Counter__get(void );
# 8 "../../../LocalTimeSyncedMicro/chips/atm1281/timer/CounterToLocalMicroC.nc"
uint64_t /*LocalTimeSyncedMicroC.CounterToLocalMicroC*/CounterToLocalMicroC__0__o = 0;

static uint32_t /*LocalTimeSyncedMicroC.CounterToLocalMicroC*/CounterToLocalMicroC__0__LocalTime__get(void );
#line 28
static inline void /*LocalTimeSyncedMicroC.CounterToLocalMicroC*/CounterToLocalMicroC__0__Counter__overflow(void );
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketField.nc"
static RF230SlimRadioP__PacketRSSI__value_type RF230SlimRadioP__PacketRSSI__get(message_t *msg);
# 14 "../../chips/rf230/RF230SlimRadioP.nc"
static inline bool RF230SlimRadioP__LinkPacketMetadata__highChannelQuality(message_t *msg);





static inline uint8_t RF230SlimRadioP__RF230DriverConfig__headerLength(message_t *msg);



static inline uint8_t RF230SlimRadioP__RF230DriverConfig__maxPayloadLength(void );



static inline uint8_t RF230SlimRadioP__RF230DriverConfig__metadataLength(message_t *msg);



static inline uint8_t RF230SlimRadioP__RF230DriverConfig__headerPreloadLength(void );




static inline bool RF230SlimRadioP__RF230DriverConfig__requiresRssiCca(message_t *msg);
# 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t OrinocoForwardLayerP__SubAMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 96
static error_t OrinocoForwardLayerP__SubAMSend__cancel(
#line 92
message_t * msg);
#line 110
static void OrinocoForwardLayerP__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 52 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t OrinocoForwardLayerP__Random__rand16(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t OrinocoForwardLayerP__doneTask__postTask(void );
# 44 "../../lib/net/orinoco/OrinocoBackoffConfig.nc"
static uint8_t OrinocoForwardLayerP__OrinocoBackoffConfig__getMaximumBackoff(void );
# 73 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void OrinocoForwardLayerP__Timer__startOneShot(uint32_t dt);




static void OrinocoForwardLayerP__Timer__stop(void );
# 31 "../../lib/net/orinoco/OrinocoForwardLayerP.nc"
enum OrinocoForwardLayerP____nesc_unnamed4400 {
#line 31
  OrinocoForwardLayerP__doneTask = 13U
};
#line 31
typedef int OrinocoForwardLayerP____nesc_sillytask_doneTask[OrinocoForwardLayerP__doneTask];
#line 13
enum OrinocoForwardLayerP____nesc_unnamed4401 {
  OrinocoForwardLayerP__STATE_READY, 
  OrinocoForwardLayerP__STATE_BACKOFF, 
  OrinocoForwardLayerP__STATE_SEND
};
uint8_t OrinocoForwardLayerP__state_ = OrinocoForwardLayerP__STATE_READY;


message_t *OrinocoForwardLayerP__txBuf_ = (void *)0;
error_t OrinocoForwardLayerP__txError_ = FAIL;
am_addr_t OrinocoForwardLayerP__txDst_;
uint8_t OrinocoForwardLayerP__txLen_;

static __inline uint16_t OrinocoForwardLayerP__getBackoff(void );




static inline void OrinocoForwardLayerP__doneTask__runTask(void );






static inline error_t OrinocoForwardLayerP__AMSend__send(am_addr_t dst, message_t *msg, uint8_t len);
#line 52
static inline error_t OrinocoForwardLayerP__AMSend__cancel(message_t *msg);
#line 86
static inline void OrinocoForwardLayerP__SubAMSend__sendDone(message_t *msg, error_t error);








static inline void OrinocoForwardLayerP__Timer__fired(void );
# 52 "/opt/tinyos-2.x/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC__seed;


static inline error_t RandomMlcgC__Init__init(void );
#line 69
static uint32_t RandomMlcgC__Random__rand32(void );
#line 89
static inline uint16_t RandomMlcgC__Random__rand16(void );
# 49 "../../lib/net/orinoco/OrinocoConfigP.nc"
uint16_t OrinocoConfigP__Ts_;
uint16_t OrinocoConfigP__Tsdev_;
uint8_t OrinocoConfigP__alpha_;
#line 51
uint8_t OrinocoConfigP__Tdmin_;
#line 51
uint8_t OrinocoConfigP__Tdmax_;
uint8_t OrinocoConfigP__waitIntvl_;
uint8_t OrinocoConfigP__qmLvl_;

static inline void OrinocoConfigP__updateAbsDeviation(void );



static inline error_t OrinocoConfigP__Init__init(void );










static inline void OrinocoConfigP__OrinocoConfig__setWakeUpInterval(uint16_t Ts);




static inline uint16_t OrinocoConfigP__OrinocoConfig__getWakeUpInterval(void );
#line 88
static inline uint16_t OrinocoConfigP__OrinocoConfig__getAbsWakeUpDeviation(void );







static inline uint8_t OrinocoConfigP__OrinocoConfig__getMinDwellTime(void );
#line 112
static inline uint8_t OrinocoConfigP__OrinocoConfig__getNumWaitingIntervals(void );
#line 124
static inline uint8_t OrinocoConfigP__OrinocoConfig__getMinQueueSize(void );
# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );
static void LedsP__Led0__clr(void );
static void LedsP__Led1__toggle(void );



static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );

static void LedsP__Led2__toggle(void );



static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
# 56 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 74
static inline void LedsP__Leds__led0On(void );




static inline void LedsP__Leds__led0Off(void );
#line 99
static inline void LedsP__Leds__led1Toggle(void );
#line 114
static inline void LedsP__Leds__led2Toggle(void );
# 43 "/opt/tinyos-2.x/tos/lib/net/RootControl.nc"
static bool OrinocoPathCostHopCountP__RootControl__isRoot(void );
# 47 "/opt/tinyos-2.x/tos/interfaces/LinkPacketMetadata.nc"
static bool OrinocoPathCostHopCountP__LinkPacketMetadata__highChannelQuality(
#line 44
message_t * msg);
# 12 "../../lib/net/orinoco/OrinocoPathCostHopCountP.nc"
orinoco_pathcost_t OrinocoPathCostHopCountP__curCost_ = ORINOCO_PATHCOST_INF;

orinoco_pathcost_t OrinocoPathCostHopCountP__altCost_ = ORINOCO_PATHCOST_INF;


static inline orinoco_pathcost_t OrinocoPathCostHopCountP__OrinocoPathCost__getCost(void );





static inline void OrinocoPathCostHopCountP__OrinocoPathCost__reviseCost(void );
#line 39
static inline bool OrinocoPathCostHopCountP__OrinocoPathCost__inspectBeacon(message_t *msg, orinoco_pathcost_t cost, bool update);
# 48 "/opt/tinyos-2.x/tos/system/QueueC.nc"
/*OrinocoP.SendQueue*/QueueC__0__queue_t  /*OrinocoP.SendQueue*/QueueC__0__queue[1];
uint8_t /*OrinocoP.SendQueue*/QueueC__0__head = 0;
uint8_t /*OrinocoP.SendQueue*/QueueC__0__tail = 0;
uint8_t /*OrinocoP.SendQueue*/QueueC__0__size = 0;

static inline bool /*OrinocoP.SendQueue*/QueueC__0__Queue__empty(void );



static inline uint8_t /*OrinocoP.SendQueue*/QueueC__0__Queue__size(void );



static inline uint8_t /*OrinocoP.SendQueue*/QueueC__0__Queue__maxSize(void );



static inline /*OrinocoP.SendQueue*/QueueC__0__queue_t /*OrinocoP.SendQueue*/QueueC__0__Queue__head(void );



static inline void /*OrinocoP.SendQueue*/QueueC__0__printQueue(void );
#line 85
static inline /*OrinocoP.SendQueue*/QueueC__0__queue_t /*OrinocoP.SendQueue*/QueueC__0__Queue__dequeue(void );
#line 97
static inline error_t /*OrinocoP.SendQueue*/QueueC__0__Queue__enqueue(/*OrinocoP.SendQueue*/QueueC__0__queue_t newVal);
# 60 "/opt/tinyos-2.x/tos/system/PoolP.nc"
uint8_t /*OrinocoP.MsgPool.PoolP*/PoolP__0__free;
uint8_t /*OrinocoP.MsgPool.PoolP*/PoolP__0__index;
/*OrinocoP.MsgPool.PoolP*/PoolP__0__pool_t * /*OrinocoP.MsgPool.PoolP*/PoolP__0__queue[1];
/*OrinocoP.MsgPool.PoolP*/PoolP__0__pool_t /*OrinocoP.MsgPool.PoolP*/PoolP__0__pool[1];

static inline error_t /*OrinocoP.MsgPool.PoolP*/PoolP__0__Init__init(void );









static inline bool /*OrinocoP.MsgPool.PoolP*/PoolP__0__Pool__empty(void );
#line 88
static inline /*OrinocoP.MsgPool.PoolP*/PoolP__0__pool_t */*OrinocoP.MsgPool.PoolP*/PoolP__0__Pool__get(void );
#line 103
static error_t /*OrinocoP.MsgPool.PoolP*/PoolP__0__Pool__put(/*OrinocoP.MsgPool.PoolP*/PoolP__0__pool_t *newVal);
# 50 "../../lib/net/orinoco/CacheCompare.nc"
static bool /*OrinocoP.PacketHistory*/OrinocoCacheC__0__CacheCompare__equal(/*OrinocoP.PacketHistory*/OrinocoCacheC__0__CacheCompare__cache_t ce, /*OrinocoP.PacketHistory*/OrinocoCacheC__0__CacheCompare__cache_t cmp);
# 54 "../../lib/net/orinoco/OrinocoCacheC.nc"
/*OrinocoP.PacketHistory*/OrinocoCacheC__0__cache_t /*OrinocoP.PacketHistory*/OrinocoCacheC__0__cache[30];
uint8_t /*OrinocoP.PacketHistory*/OrinocoCacheC__0__newest = 0;
#line 55
uint8_t /*OrinocoP.PacketHistory*/OrinocoCacheC__0__len = 0;

static inline void /*OrinocoP.PacketHistory*/OrinocoCacheC__0__Cache__flush(void );




static inline void /*OrinocoP.PacketHistory*/OrinocoCacheC__0__Cache__insert(/*OrinocoP.PacketHistory*/OrinocoCacheC__0__cache_t c);









static inline bool /*OrinocoP.PacketHistory*/OrinocoCacheC__0__Cache__lookup(/*OrinocoP.PacketHistory*/OrinocoCacheC__0__cache_t c);
# 61 "/opt/tinyos-2.x/tos/lib/timer/LocalTime.nc"
static uint32_t OrinocoTrafficStatisticsP__LocalTime__get(void );
# 8 "../../../EAJobs/interfaces/EAJob.nc"
static void OrinocoTrafficStatisticsP__PktRateJob__done(void );
# 59 "../../lib/net/orinoco/OrinocoTrafficStatisticsP.nc"
orinoco_traffic_statistics_t OrinocoTrafficStatisticsP__ts_ = { 0, 0, ORINOCO_DFLT_WAKEUP_INTERVAL / 2, 256, 256 };
#line 73
#line 65
struct OrinocoTrafficStatisticsP____nesc_unnamed4402 {


  uint16_t numPktCreated;
  uint16_t numPktReceived;
  uint32_t curForwardTime;
  uint8_t curTxBurstLen;
  uint8_t curRxBurstLen;
} OrinocoTrafficStatisticsP__tv_ = { 0 };

enum OrinocoTrafficStatisticsP____nesc_unnamed4403 {
  OrinocoTrafficStatisticsP__EWMA_FILTER = 243
};


static inline uint16_t OrinocoTrafficStatisticsP__Stats__getPktCreationIntvl(void );
#line 93
static inline uint16_t OrinocoTrafficStatisticsP__Stats__getPktReceptionIntvl(void );








static inline void OrinocoTrafficStatisticsP__Updates__updatePktReceptionIntvl(void );



static inline uint8_t OrinocoTrafficStatisticsP__Stats__getTxBurst(void );




static void OrinocoTrafficStatisticsP__Updates__updateTxBurst(bool end);








static inline uint8_t OrinocoTrafficStatisticsP__Stats__getRxBurst(void );




static void OrinocoTrafficStatisticsP__Updates__updateRxBurst(bool end);
#line 137
static inline uint32_t OrinocoTrafficStatisticsP__Stats__getForwardDelay(void );



static void OrinocoTrafficStatisticsP__Updates__updateForwardDelay(bool reset);
#line 157
static inline uint32_t OrinocoTrafficStatisticsP__PktRateJobConfig__getPeriod(void );



static inline void OrinocoTrafficStatisticsP__PktRateJob__run(void );
# 136 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t EASchedulerP__DispatchTimer__getNow(void );







static uint32_t EASchedulerP__DispatchTimer__gett0(void );
#line 92
static bool EASchedulerP__DispatchTimer__isRunning(void );
#line 73
static void EASchedulerP__DispatchTimer__startOneShot(uint32_t dt);
# 5 "../../../EAJobs/interfaces/EAScheduler.nc"
static void EASchedulerP__EAScheduler__jobStarted(jobid_t jobId);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t EASchedulerP__dispatch__postTask(void );
# 4 "../../../EAJobs/interfaces/EAJob.nc"
static void EASchedulerP__EAJob__run(
# 8 "../../../EAJobs/lib/EASchedulerP.nc"
uint8_t arg_0x2b010b019608);
#line 65
enum EASchedulerP____nesc_unnamed4404 {
#line 65
  EASchedulerP__dispatch = 14U
};
#line 65
typedef int EASchedulerP____nesc_sillytask_dispatch[EASchedulerP__dispatch];
#line 28
enum EASchedulerP____nesc_unnamed4405 {
  EASchedulerP__NUM_JOBS = 3U
};

uint8_t EASchedulerP__head_ = EASchedulerP__NUM_JOBS;

uint8_t EASchedulerP__schedule_[EASchedulerP__NUM_JOBS];


uint32_t EASchedulerP__dispatchTime_[EASchedulerP__NUM_JOBS];


static inline void EASchedulerP__printSchedule(void );
#line 53
static void EASchedulerP__restartDispatchTimer(void );

static inline jobid_t EASchedulerP__popJob(void );









static inline void EASchedulerP__dispatch__runTask(void );
#line 86
static __inline void EASchedulerP__restartDispatchTimer(void );









static void EASchedulerP__EAScheduler__scheduleJob(jobid_t jobId, uint32_t dt);
#line 136
static inline void EASchedulerP__DispatchTimer__fired(void );
#line 148
static inline void EASchedulerP__EAJob__done(uint8_t jobId);




static inline void EASchedulerP__EAJob__default__run(uint8_t jobId);
# 8 "../../../EAJobs/interfaces/EAJobConfig.nc"
static ea_generic_jobconfig_t *EAEnergyManagerP__EAJobConfig__getConfig(
# 6 "../../../EAJobs/lib/EAEnergyManagerP.nc"
uint8_t arg_0x2b010b038388);
# 4 "../../../EAJobs/interfaces/EAScheduler.nc"
static void EAEnergyManagerP__EAScheduler__scheduleJob(jobid_t jobId, uint32_t dt);
# 11 "../../../EAJobs/lib/EAEnergyManagerP.nc"
enum EAEnergyManagerP____nesc_unnamed4406 {
  EAEnergyManagerP__NUM_JOBS = 3U
};

static inline void EAEnergyManagerP__Boot__booted(void );
#line 27
static inline ea_generic_jobconfig_t *EAEnergyManagerP__EAJobConfig__default__getConfig(uint8_t jobId);




static inline void EAEnergyManagerP__EAScheduler__jobStarted(jobid_t jobid);
# 2 "../../../EAJobs/interfaces/EAPeriodicJobConfig.nc"
static uint32_t /*OrinocoTrafficStatisticsC.EAPeriodicJobConfigC*/EAPeriodicJobConfigC__0__SubJobConfig__getPeriod(void );
# 12 "../../../EAJobs/lib/EAPeriodicJobConfigC.nc"
ea_periodic_jobconfig_t /*OrinocoTrafficStatisticsC.EAPeriodicJobConfigC*/EAPeriodicJobConfigC__0__conf_;

static ea_generic_jobconfig_t */*OrinocoTrafficStatisticsC.EAPeriodicJobConfigC*/EAPeriodicJobConfigC__0__JobConfig__getConfig(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
# 110 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(
# 47 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x2b010b060e38, 
# 103 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(
# 48 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x2b010b05c020, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 60 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg);







static inline error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len);
#line 101
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result);







static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len);



static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__clear(message_t *msg);
#line 131
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );
#line 163
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setSource(message_t *amsg, am_addr_t addr);








static inline am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg);
# 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void SerialP__SplitControl__startDone(error_t error);
#line 138
static void SerialP__SplitControl__stopDone(error_t error);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP__stopDoneTask__postTask(void );
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t SerialP__SerialControl__start(void );









static error_t SerialP__SerialControl__stop(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP__RunTx__postTask(void );
# 49 "/opt/tinyos-2.x/tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flush(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP__startDoneTask__postTask(void );
# 56 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static error_t SerialP__SerialFrameComm__putDelimiter(void );
#line 79
static void SerialP__SerialFrameComm__resetReceive(void );
#line 65
static error_t SerialP__SerialFrameComm__putData(uint8_t data);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP__defaultSerialFlushTask__postTask(void );
# 81 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static uint8_t SerialP__SendBytePacket__nextByte(void );









static void SerialP__SendBytePacket__sendCompleted(error_t error);
# 62 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
static error_t SerialP__ReceiveBytePacket__startPacket(void );






static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data);










static void SerialP__ReceiveBytePacket__endPacket(error_t result);
# 191 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
enum SerialP____nesc_unnamed4407 {
#line 191
  SerialP__RunTx = 15U
};
#line 191
typedef int SerialP____nesc_sillytask_RunTx[SerialP__RunTx];
#line 322
enum SerialP____nesc_unnamed4408 {
#line 322
  SerialP__startDoneTask = 16U
};
#line 322
typedef int SerialP____nesc_sillytask_startDoneTask[SerialP__startDoneTask];









enum SerialP____nesc_unnamed4409 {
#line 332
  SerialP__stopDoneTask = 17U
};
#line 332
typedef int SerialP____nesc_sillytask_stopDoneTask[SerialP__stopDoneTask];








enum SerialP____nesc_unnamed4410 {
#line 341
  SerialP__defaultSerialFlushTask = 18U
};
#line 341
typedef int SerialP____nesc_sillytask_defaultSerialFlushTask[SerialP__defaultSerialFlushTask];
#line 81
enum SerialP____nesc_unnamed4411 {
  SerialP__RX_DATA_BUFFER_SIZE = 2, 
  SerialP__TX_DATA_BUFFER_SIZE = 4, 
  SerialP__SERIAL_MTU = 255, 
  SerialP__SERIAL_VERSION = 1, 
  SerialP__ACK_QUEUE_SIZE = 5
};

enum SerialP____nesc_unnamed4412 {
  SerialP__RXSTATE_NOSYNC, 
  SerialP__RXSTATE_PROTO, 
  SerialP__RXSTATE_TOKEN, 
  SerialP__RXSTATE_INFO, 
  SerialP__RXSTATE_INACTIVE
};

enum SerialP____nesc_unnamed4413 {
  SerialP__TXSTATE_IDLE, 
  SerialP__TXSTATE_PROTO, 
  SerialP__TXSTATE_SEQNO, 
  SerialP__TXSTATE_INFO, 
  SerialP__TXSTATE_FCS1, 
  SerialP__TXSTATE_FCS2, 
  SerialP__TXSTATE_ENDFLAG, 
  SerialP__TXSTATE_ENDWAIT, 
  SerialP__TXSTATE_FINISH, 
  SerialP__TXSTATE_ERROR, 
  SerialP__TXSTATE_INACTIVE
};





#line 111
typedef enum SerialP____nesc_unnamed4414 {
  SerialP__BUFFER_AVAILABLE, 
  SerialP__BUFFER_FILLING, 
  SerialP__BUFFER_COMPLETE
} SerialP__tx_data_buffer_states_t;

enum SerialP____nesc_unnamed4415 {
  SerialP__TX_ACK_INDEX = 0, 
  SerialP__TX_DATA_INDEX = 1, 
  SerialP__TX_BUFFER_COUNT = 2
};






#line 124
typedef struct SerialP____nesc_unnamed4416 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__RX_DATA_BUFFER_SIZE + 1];
} SerialP__rx_buf_t;




#line 130
typedef struct SerialP____nesc_unnamed4417 {
  uint8_t state;
  uint8_t buf;
} SerialP__tx_buf_t;





#line 135
typedef struct SerialP____nesc_unnamed4418 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__ACK_QUEUE_SIZE + 1];
} SerialP__ack_queue_t;



SerialP__rx_buf_t SerialP__rxBuf;
SerialP__tx_buf_t SerialP__txBuf[SerialP__TX_BUFFER_COUNT];



uint8_t SerialP__rxState;
uint8_t SerialP__rxByteCnt;
uint8_t SerialP__rxProto;
uint8_t SerialP__rxSeqno;
uint16_t SerialP__rxCRC;



uint8_t SerialP__txState;
uint8_t SerialP__txByteCnt;
uint8_t SerialP__txProto;
uint8_t SerialP__txSeqno;
uint16_t SerialP__txCRC;
uint8_t SerialP__txPending;
uint8_t SerialP__txIndex;


SerialP__ack_queue_t SerialP__ackQ;

bool SerialP__offPending = FALSE;



static __inline void SerialP__txInit(void );
static __inline void SerialP__rxInit(void );
static __inline void SerialP__ackInit(void );

static __inline bool SerialP__ack_queue_is_full(void );
static __inline bool SerialP__ack_queue_is_empty(void );
static __inline void SerialP__ack_queue_push(uint8_t token);
static __inline uint8_t SerialP__ack_queue_top(void );
static inline uint8_t SerialP__ack_queue_pop(void );




static __inline void SerialP__rx_buffer_push(uint8_t data);
static __inline uint8_t SerialP__rx_buffer_top(void );
static __inline uint8_t SerialP__rx_buffer_pop(void );
static __inline uint16_t SerialP__rx_current_crc(void );

static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
static void SerialP__MaybeScheduleTx(void );




static __inline void SerialP__txInit(void );
#line 207
static __inline void SerialP__rxInit(void );








static __inline void SerialP__ackInit(void );



static inline error_t SerialP__Init__init(void );
#line 234
static __inline bool SerialP__ack_queue_is_full(void );









static __inline bool SerialP__ack_queue_is_empty(void );





static __inline void SerialP__ack_queue_push(uint8_t token);









static __inline uint8_t SerialP__ack_queue_top(void );









static inline uint8_t SerialP__ack_queue_pop(void );
#line 297
static __inline void SerialP__rx_buffer_push(uint8_t data);



static __inline uint8_t SerialP__rx_buffer_top(void );



static __inline uint8_t SerialP__rx_buffer_pop(void );





static __inline uint16_t SerialP__rx_current_crc(void );










static inline void SerialP__startDoneTask__runTask(void );









static inline void SerialP__stopDoneTask__runTask(void );



static inline void SerialP__SerialFlush__flushDone(void );




static inline void SerialP__defaultSerialFlushTask__runTask(void );


static inline void SerialP__SerialFlush__default__flush(void );



static error_t SerialP__SplitControl__start(void );








static void SerialP__testOff(void );
#line 374
static inline error_t SerialP__SplitControl__stop(void );
#line 394
static inline void SerialP__SerialFrameComm__delimiterReceived(void );


static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data);



static inline bool SerialP__valid_rx_proto(uint8_t proto);










static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
#line 518
static void SerialP__MaybeScheduleTx(void );










static inline error_t SerialP__SendBytePacket__completeSend(void );








static inline error_t SerialP__SendBytePacket__startSend(uint8_t b);
#line 559
static inline void SerialP__RunTx__runTask(void );
#line 668
static inline void SerialP__SerialFrameComm__putDone(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void );
# 100 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(
# 51 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2b010b1c3020, 
# 96 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void );
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(
# 50 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2b010b1c43e0, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2b010b1c2308, 
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2b010b1c2308);
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2b010b1c2308, 
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 71 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void );
#line 62
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte);
# 158 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4419 {
#line 158
  SerialDispatcherP__0__signalSendDone = 19U
};
#line 158
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone];
#line 275
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4420 {
#line 275
  SerialDispatcherP__0__receiveTask = 20U
};
#line 275
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask];
#line 66
#line 62
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4421 {
  SerialDispatcherP__0__SEND_STATE_IDLE = 0, 
  SerialDispatcherP__0__SEND_STATE_BEGIN = 1, 
  SerialDispatcherP__0__SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4422 {
  SerialDispatcherP__0__RECV_STATE_IDLE = 0, 
  SerialDispatcherP__0__RECV_STATE_BEGIN = 1, 
  SerialDispatcherP__0__RECV_STATE_DATA = 2
};






#line 74
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4423 {
  uint8_t which : 1;
  uint8_t bufZeroLocked : 1;
  uint8_t bufOneLocked : 1;
  uint8_t state : 2;
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t;



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState = { 0, 0, 0, /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE };
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;


message_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[2];
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[2] = { &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0], &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[1] };




uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t * )&/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0];

uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (void *)0;
/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = 0;
error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = 0;


uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
uart_id_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (void *)0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = 0;

static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len);
#line 158
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
#line 178
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );
#line 194
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);




static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void );



static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void );








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which);








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void );




static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );
#line 244
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b);
#line 275
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
#line 296
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
#line 358
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen);




static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len);


static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error);
# 48 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static error_t HdlcTranslateC__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 94 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data);





static void HdlcTranslateC__SerialFrameComm__putDone(void );
#line 85
static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void );
# 59 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
#line 56
typedef struct HdlcTranslateC____nesc_unnamed4424 {
  uint8_t sendEscape : 1;
  uint8_t receiveEscape : 1;
} HdlcTranslateC__HdlcState;


HdlcTranslateC__HdlcState HdlcTranslateC__state = { 0, 0 };
uint8_t HdlcTranslateC__txTemp;
uint8_t HdlcTranslateC__m_data;


static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void );





static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data);
#line 98
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );







static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
#line 118
static inline void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error);
#line 132
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error);
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void );
# 79 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte);
#line 99
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 42 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void );
#line 40
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void );
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void );

static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void );


static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data);
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void );
# 62 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len;
#line 62
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len;
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf;
#line 63
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos;
#line 64
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr;

static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void );







static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void );
#line 93
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void );
#line 133
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 155
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len);
#line 173
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void );
#line 216
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart0__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart0__txDone(void );

static void HplAtm128UartP__HplUart1__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart1__txDone(void );
# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t HplAtm128UartP__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void HplAtm128UartP__McuPowerState__update(void );
# 130 "/opt/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0Init__init(void );
#line 150
static inline error_t HplAtm128UartP__Uart0TxControl__start(void );





static inline error_t HplAtm128UartP__Uart0TxControl__stop(void );





static inline error_t HplAtm128UartP__Uart0RxControl__start(void );





static inline error_t HplAtm128UartP__Uart0RxControl__stop(void );





static inline error_t HplAtm128UartP__HplUart0__enableTxIntr(void );





static inline error_t HplAtm128UartP__HplUart0__disableTxIntr(void );




static inline error_t HplAtm128UartP__HplUart0__enableRxIntr(void );




static inline error_t HplAtm128UartP__HplUart0__disableRxIntr(void );
#line 207
static void HplAtm128UartP__HplUart0__tx(uint8_t data);






void __vector_25(void ) __attribute((signal))   ;





void __vector_27(void ) __attribute((interrupt))   ;



static inline error_t HplAtm128UartP__Uart1Init__init(void );
#line 308
void __vector_36(void ) __attribute((signal))   ;




void __vector_38(void ) __attribute((interrupt))   ;





static inline void HplAtm128UartP__HplUart1__default__txDone(void );
static inline void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data);
# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer3P__CompareA__fired(void );
# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm1281Timer3P__Capture__captured(HplAtm1281Timer3P__Capture__size_type t);
# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer3P__CompareB__fired(void );
#line 58
static void HplAtm1281Timer3P__CompareC__fired(void );
# 70 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm1281Timer3P__Timer__overflow(void );
# 93 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P__Timer__set(uint16_t t);








static inline void HplAtm1281Timer3P__Timer__setScale(uint8_t s);










static inline uint8_t HplAtm1281Timer3P__TimerCtrl__getControlB(void );
#line 126
static inline void HplAtm1281Timer3P__TimerCtrl__setControlB(uint8_t x);
#line 164
static inline void HplAtm1281Timer3P__Timer__start(void );
#line 219
static inline uint16_t HplAtm1281Timer3P__Capture__get(void );





static inline void HplAtm1281Timer3P__CompareA__default__fired(void );
void __vector_32(void ) __attribute((interrupt))   ;


static inline void HplAtm1281Timer3P__CompareB__default__fired(void );
void __vector_33(void ) __attribute((interrupt))   ;


static inline void HplAtm1281Timer3P__CompareC__default__fired(void );
void __vector_34(void ) __attribute((interrupt))   ;


static inline void HplAtm1281Timer3P__Capture__default__captured(uint16_t time);
void __vector_31(void ) __attribute((interrupt))   ;



void __vector_35(void ) __attribute((interrupt))   ;
# 104 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__setScale(uint8_t scale);
#line 67
static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__set(/*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__timer_size t);










static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__start(void );
# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitThreeP.InitThree*/Atm128TimerInitC__1__Init__init(void );








static inline void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__overflow(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterThree16C.NCounter*/Atm128CounterC__1__Counter__overflow(void );
# 65 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterThree16C.NCounter*/Atm128CounterC__1__Timer__overflow(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.Transform32*/TransformCounterC__2__Counter__overflow(void );
# 67 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*CounterMicro32C.Transform32*/TransformCounterC__2__upper_count_type /*CounterMicro32C.Transform32*/TransformCounterC__2__m_upper;

enum /*CounterMicro32C.Transform32*/TransformCounterC__2____nesc_unnamed4425 {

  TransformCounterC__2__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__2__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__2__from_size_type ) - /*CounterMicro32C.Transform32*/TransformCounterC__2__LOW_SHIFT_RIGHT, 
  TransformCounterC__2__NUM_UPPER_BITS = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__2__to_size_type ) - 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__2__from_size_type ) + 0, 



  TransformCounterC__2__OVERFLOW_MASK = /*CounterMicro32C.Transform32*/TransformCounterC__2__NUM_UPPER_BITS ? ((/*CounterMicro32C.Transform32*/TransformCounterC__2__upper_count_type )2 << (/*CounterMicro32C.Transform32*/TransformCounterC__2__NUM_UPPER_BITS - 1)) - 1 : 0
};
#line 133
static inline void /*CounterMicro32C.Transform32*/TransformCounterC__2__CounterFrom__overflow(void );
# 51 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );


static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);


static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
# 65 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static void OrinocoStatsReportingJobP__Packet__clear(
#line 62
message_t * msg);
#line 126
static 
#line 123
void * 


OrinocoStatsReportingJobP__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
# 52 "../../interfaces/OrinocoTrafficStatistics.nc"
static uint8_t OrinocoStatsReportingJobP__TrafficStats__getRxBurst(void );
#line 50
static uint8_t OrinocoStatsReportingJobP__TrafficStats__getTxBurst(void );
#line 46
static uint16_t OrinocoStatsReportingJobP__TrafficStats__getPktCreationIntvl(void );

static uint16_t OrinocoStatsReportingJobP__TrafficStats__getPktReceptionIntvl(void );





static uint32_t OrinocoStatsReportingJobP__TrafficStats__getForwardDelay(void );
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



OrinocoStatsReportingJobP__Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 8 "../../../EAJobs/interfaces/EAJob.nc"
static void OrinocoStatsReportingJobP__EAJob__done(void );
# 14 "../../../Reporting/OrinocoStatsReportingJobP.nc"
message_t OrinocoStatsReportingJobP__msg_;
message_t *OrinocoStatsReportingJobP__pmsg_ = &OrinocoStatsReportingJobP__msg_;
data_seqno_t OrinocoStatsReportingJobP__seqno_ = 0;


static inline void OrinocoStatsReportingJobP__EAJob__run(void );
# 2 "../../../EAJobs/interfaces/EAPeriodicJobConfig.nc"
static uint32_t /*OrinocoStatsReportingJobC.EAPeriodicJobConfigC*/EAPeriodicJobConfigC__1__SubJobConfig__getPeriod(void );
# 12 "../../../EAJobs/lib/EAPeriodicJobConfigC.nc"
ea_periodic_jobconfig_t /*OrinocoStatsReportingJobC.EAPeriodicJobConfigC*/EAPeriodicJobConfigC__1__conf_;

static ea_generic_jobconfig_t */*OrinocoStatsReportingJobC.EAPeriodicJobConfigC*/EAPeriodicJobConfigC__1__JobConfig__getConfig(void );
# 7 "../../../Reporting/OrinocoStatsReportingJobConfigC.nc"
static inline uint32_t OrinocoStatsReportingJobConfigC__JobConfig__getPeriod(void );
# 65 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static void OrinocoDebugReportingJobP__Packet__clear(
#line 62
message_t * msg);
#line 126
static 
#line 123
void * 


OrinocoDebugReportingJobP__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
# 55 "/opt/tinyos-2.x/tos/interfaces/Get.nc"
static OrinocoDebugReportingJobP__QueueStats__val_t OrinocoDebugReportingJobP__QueueStats__get(void );
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



OrinocoDebugReportingJobP__Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 55 "/opt/tinyos-2.x/tos/interfaces/Get.nc"
static OrinocoDebugReportingJobP__PacketStats__val_t OrinocoDebugReportingJobP__PacketStats__get(void );
# 8 "../../../EAJobs/interfaces/EAJob.nc"
static void OrinocoDebugReportingJobP__EAJob__done(void );
# 16 "../../../Reporting/OrinocoDebugReportingJobP.nc"
message_t OrinocoDebugReportingJobP__msg_;
message_t *OrinocoDebugReportingJobP__pmsg_ = &OrinocoDebugReportingJobP__msg_;
data_seqno_t OrinocoDebugReportingJobP__seqno_ = 0;


static inline void OrinocoDebugReportingJobP__EAJob__run(void );
# 2 "../../../EAJobs/interfaces/EAPeriodicJobConfig.nc"
static uint32_t /*OrinocoDebugReportingJobC.EAPeriodicJobConfigC*/EAPeriodicJobConfigC__2__SubJobConfig__getPeriod(void );
# 12 "../../../EAJobs/lib/EAPeriodicJobConfigC.nc"
ea_periodic_jobconfig_t /*OrinocoDebugReportingJobC.EAPeriodicJobConfigC*/EAPeriodicJobConfigC__2__conf_;

static ea_generic_jobconfig_t */*OrinocoDebugReportingJobC.EAPeriodicJobConfigC*/EAPeriodicJobConfigC__2__JobConfig__getConfig(void );
# 9 "../../../Reporting/OrinocoDebugReportingJobConfigC.nc"
static inline uint32_t OrinocoDebugReportingJobConfigC__JobConfig__getPeriod(void );
# 94 "/opt/tinyos-2.x/tos/chips/atm1281/atm128hardware.h"
static __inline  void __nesc_disable_interrupt()
#line 94
{
   __asm volatile ("cli");}

#line 111
#line 110
__inline   __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 114
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



#line 120
__inline   void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
   __asm volatile ("" :  :  : "memory");
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

# 124 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 57 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 57
  SchedulerBasicP__Scheduler__init();
#line 57
}
#line 57
# 69 "/opt/tinyos-2.x/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 126 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__TimerCtrl__setControlB(uint8_t x)
#line 126
{
  * (volatile uint8_t *)0x81 = x;
}

#line 113
static inline uint8_t HplAtm1281Timer1P__TimerCtrl__getControlB(void )
#line 113
{
  return * (volatile uint8_t *)0x81;
}

#line 102
static inline void HplAtm1281Timer1P__Timer__setScale(uint8_t s)
#line 102
{
  Atm128_TCCRB_t x = (Atm128_TCCRB_t )HplAtm1281Timer1P__TimerCtrl__getControlB();

#line 104
  x.bits.cs = s;
  HplAtm1281Timer1P__TimerCtrl__setControlB(x.flat);
}

# 104 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale){
#line 104
  HplAtm1281Timer1P__Timer__setScale(scale);
#line 104
}
#line 104
# 164 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Timer__start(void )
#line 164
{
#line 164
  * (volatile uint8_t *)0x6F |= 1 << 0;
}

# 78 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start(void ){
#line 78
  HplAtm1281Timer1P__Timer__start();
#line 78
}
#line 78
# 93 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Timer__set(uint16_t t)
#line 93
{
#line 93
  * (volatile uint16_t *)0x84 = t;
}

# 67 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(/*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size t){
#line 67
  HplAtm1281Timer1P__Timer__set(t);
#line 67
}
#line 67
# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void )
#line 51
{
  /* atomic removed: atomic calls only */
#line 52
  {
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(0);
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start();
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(2);
  }
  return SUCCESS;
}

# 126 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P__TimerCtrl__setControlB(uint8_t x)
#line 126
{
  * (volatile uint8_t *)0x91 = x;
}

#line 113
static inline uint8_t HplAtm1281Timer3P__TimerCtrl__getControlB(void )
#line 113
{
  return * (volatile uint8_t *)0x91;
}

#line 102
static inline void HplAtm1281Timer3P__Timer__setScale(uint8_t s)
#line 102
{
  Atm128_TCCRB_t x = (Atm128_TCCRB_t )HplAtm1281Timer3P__TimerCtrl__getControlB();

#line 104
  x.bits.cs = s;
  HplAtm1281Timer3P__TimerCtrl__setControlB(x.flat);
}

# 104 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__setScale(uint8_t scale){
#line 104
  HplAtm1281Timer3P__Timer__setScale(scale);
#line 104
}
#line 104
# 164 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P__Timer__start(void )
#line 164
{
#line 164
  * (volatile uint8_t *)0x71 |= 1 << 0;
}

# 78 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__start(void ){
#line 78
  HplAtm1281Timer3P__Timer__start();
#line 78
}
#line 78
# 93 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P__Timer__set(uint16_t t)
#line 93
{
#line 93
  * (volatile uint16_t *)0x94 = t;
}

# 67 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__set(/*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__timer_size t){
#line 67
  HplAtm1281Timer3P__Timer__set(t);
#line 67
}
#line 67
# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitThreeP.InitThree*/Atm128TimerInitC__1__Init__init(void )
#line 51
{
  /* atomic removed: atomic calls only */
#line 52
  {
    /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__set(0);
    /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__start();
    /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__setScale(2);
  }
  return SUCCESS;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t MotePlatformP__SubInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*InitThreeP.InitThree*/Atm128TimerInitC__1__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 56 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )34U &= ~(1 << 4);
}

# 41 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr();
#line 41
}
#line 41
# 59 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )33U &= ~(1 << 4);
}

# 44 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput();
#line 44
}
#line 44
# 49 "/opt/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void )
#line 49
{

  * (volatile uint8_t *)(0x08 + 0x20) = 0;
  * (volatile uint8_t *)(0x07 + 0x20) = 0xff;


  MotePlatformP__SerialIdPin__makeInput();
  MotePlatformP__SerialIdPin__clr();

  return MotePlatformP__SubInit__init();
}

# 55 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )34U |= 1 << 0;
}

# 40 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set();
#line 40
}
#line 40
# 55 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )34U |= 1 << 1;
}

# 40 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set();
#line 40
}
#line 40
# 55 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )34U |= 1 << 2;
}

# 40 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set();
#line 40
}
#line 40
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )33U |= 1 << 0;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput();
#line 46
}
#line 46
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )33U |= 1 << 1;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput();
#line 46
}
#line 46
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )33U |= 1 << 2;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput();
#line 46
}
#line 46
# 56 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 57
  {
    ;
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = LedsP__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, MotePlatformP__PlatformInit__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 75 "/opt/tinyos-2.x/tos/platforms/iris/MeasureClockC.nc"
static inline error_t MeasureClockC__Init__init(void )
#line 75
{
  /* atomic removed: atomic calls only */



  {
    uint8_t now;
#line 81
    uint8_t wraps;
    uint16_t start;


    * (volatile uint8_t *)0x81 = 1 << 0;
    * (volatile uint8_t *)0xB6 = 1 << 5;
    * (volatile uint8_t *)0xB1 = (1 << 1) | (1 << 0);




    start = * (volatile uint16_t *)0x84;
    for (wraps = MeasureClockC__MAGIC / 2; wraps; ) 
      {
        uint16_t next = * (volatile uint16_t *)0x84;

        if (next < start) {
          wraps--;
          }
#line 99
        start = next;
      }


    now = * (volatile uint8_t *)0xB2;
    while (* (volatile uint8_t *)0xB2 == now) ;


    start = * (volatile uint16_t *)0x84;
    now = * (volatile uint8_t *)0xB2;
    while (* (volatile uint8_t *)0xB2 == now) ;
    MeasureClockC__cycles = * (volatile uint16_t *)0x84;

    MeasureClockC__cycles = (MeasureClockC__cycles - start + 16) >> 5;


    * (volatile uint8_t *)0xB6 = * (volatile uint8_t *)0x81 = * (volatile uint8_t *)0xB1 = 0;
    * (volatile uint8_t *)0xB2 = 0;
    * (volatile uint16_t *)0x84 = 0;
    * (volatile uint8_t *)(0x16 + 0x20) = * (volatile uint8_t *)(0x17 + 0x20) = 0xff;
    while (* (volatile uint8_t *)0xB6 & (((1 << 4) | (1 << 2)) | (1 << 0))) 
      ;
  }
  return SUCCESS;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t PlatformP__MeasureClock__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MeasureClockC__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 51 "/opt/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
{
  error_t ok;


  ok = PlatformP__MeasureClock__init();
  ok = ecombine(ok, PlatformP__MoteInit__init());

  return ok;
}

# 55 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )34U |= 1 << 6;
}

# 40 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__RSTN__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set();
#line 40
}
#line 40
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )33U |= 1 << 6;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__RSTN__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput();
#line 46
}
#line 46
# 56 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )37U &= ~(1 << 7);
}

# 41 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__SLP_TR__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__clr();
#line 41
}
#line 41
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )36U |= 1 << 7;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__SLP_TR__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeOutput();
#line 46
}
#line 46
# 55 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )37U |= 1 << 0;
}

# 40 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__SELN__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set();
#line 40
}
#line 40
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )36U |= 1 << 0;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__SELN__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput();
#line 46
}
#line 46
# 218 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayerP.nc"
static inline error_t RF230DriverLayerP__PlatformInit__init(void )
{
  RF230DriverLayerP__SELN__makeOutput();
  RF230DriverLayerP__SELN__set();
  RF230DriverLayerP__SLP_TR__makeOutput();
  RF230DriverLayerP__SLP_TR__clr();
  RF230DriverLayerP__RSTN__makeOutput();
  RF230DriverLayerP__RSTN__set();

  RF230DriverLayerP__rxMsg = &RF230DriverLayerP__rxMsgBuffer;


  RF230DriverLayerP__rssiClear = 0;
  RF230DriverLayerP__rssiBusy = 90;

  return SUCCESS;
}

# 171 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Capture__stop(void )
#line 171
{
#line 171
  * (volatile uint8_t *)0x6F &= ~(1 << 5);
}

# 70 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplRF230P__Capture__stop(void ){
#line 70
  HplAtm1281Timer1P__Capture__stop();
#line 70
}
#line 70
# 56 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )43U &= ~(1 << 4);
}

# 41 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplRF230P__PortIRQ__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__clr();
#line 41
}
#line 41
# 59 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )42U &= ~(1 << 4);
}

# 44 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplRF230P__PortIRQ__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput();
#line 44
}
#line 44
# 56 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )43U &= ~(1 << 6);
}

# 41 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplRF230P__PortCLKM__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr();
#line 41
}
#line 41
# 59 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )42U &= ~(1 << 6);
}

# 44 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplRF230P__PortCLKM__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput();
#line 44
}
#line 44
# 53 "/opt/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline error_t HplRF230P__PlatformInit__init(void )
{
  HplRF230P__PortCLKM__makeInput();
  HplRF230P__PortCLKM__clr();
  HplRF230P__PortIRQ__makeInput();
  HplRF230P__PortIRQ__clr();
  HplRF230P__Capture__stop();

  return SUCCESS;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplRF230P__PlatformInit__init();
#line 62
  __nesc_result = ecombine(__nesc_result, RF230DriverLayerP__PlatformInit__init());
#line 62
  __nesc_result = ecombine(__nesc_result, PlatformP__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 65 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static bool RealMainP__Scheduler__runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

# 60 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg)
#line 60
{
  return (serial_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(serial_header_t ));
}

#line 172
static inline am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg)
#line 172
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 174
  return __nesc_ntoh_uint8(header->type.nxdata);
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SinkP__uartSendTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SinkP__uartSendTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 42 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__toggle(void ){
#line 42
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle();
#line 42
}
#line 42
# 114 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP__Leds__led2Toggle(void )
#line 114
{
  LedsP__Led2__toggle();
  ;
#line 116
  ;
}

# 100 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void SinkP__Leds__led2Toggle(void ){
#line 100
  LedsP__Leds__led2Toggle();
#line 100
}
#line 100
# 68 "SinkP.nc"
static inline void SinkP__failBlink(void )
#line 68
{
  SinkP__numFail++;
  SinkP__Leds__led2Toggle();
}

#line 200
static inline void SinkP__UartSend__sendDone(am_id_t id, message_t *msg, error_t error)
#line 200
{
  if (error != SUCCESS) {
      SinkP__failBlink();
    }
  else 
#line 203
    {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 204
        {
          if (msg == SinkP__uartQueue[SinkP__uartOut]) {
              if (++SinkP__uartOut >= SinkP__UART_QUEUE_LEN) {
                  SinkP__uartOut = 0;
                }
              if (SinkP__uartFull) {
                  SinkP__uartFull = FALSE;
                }
            }
        }
#line 213
        __nesc_atomic_end(__nesc_atomic); }
    }
  SinkP__uartSendTask__postTask();
}

# 110 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(am_id_t arg_0x2b010b060e38, message_t * msg, error_t error){
#line 110
  SinkP__UartSend__sendDone(arg_0x2b010b060e38, msg, error);
#line 110
}
#line 110
# 101 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result)
#line 101
{
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, result);
}

# 376 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error)
#line 376
{
  return;
}

# 100 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(uart_id_t arg_0x2b010b1c3020, message_t * msg, error_t error){
#line 100
  switch (arg_0x2b010b1c3020) {
#line 100
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 100
      /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(arg_0x2b010b1c3020, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 158 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void )
#line 158
{
  error_t error;

  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 162
    error = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError;
#line 162
    __nesc_atomic_end(__nesc_atomic); }

  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled) {
#line 164
    error = ECANCEL;
    }
#line 165
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId, (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer, error);
}

# 97 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__isWaiting(uint8_t id)
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}

static inline bool SchedulerBasicP__pushTask(uint8_t id)
{
  if (!SchedulerBasicP__isWaiting(id)) 
    {
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_head = id;
          SchedulerBasicP__m_tail = id;
        }
      else 
        {
          SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
          SchedulerBasicP__m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 212 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which)
#line 212
{
  if (which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 0;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 0;
    }
}

# 109 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len)
#line 109
{
  return msg;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(am_id_t arg_0x2b010b05c020, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(arg_0x2b010b05c020, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 113 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 113
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, msg->data, len);
}

# 371 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len)
#line 373
{
  return msg;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(uart_id_t arg_0x2b010b1c43e0, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x2b010b1c43e0) {
#line 78
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 78
      __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(arg_0x2b010b1c43e0, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 57 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen)
#line 57
{
  return dataLinkLen - sizeof(serial_header_t );
}

# 365 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen)
#line 366
{
  return 0;
}

# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(uart_id_t arg_0x2b010b1c2308, message_t *msg, uint8_t dataLinkLen){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  switch (arg_0x2b010b1c2308) {
#line 31
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 31
      __nesc_result = SerialPacketInfoActiveMessageP__Info__upperLength(msg, dataLinkLen);
#line 31
      break;
#line 31
    default:
#line 31
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(arg_0x2b010b1c2308, msg, dataLinkLen);
#line 31
      break;
#line 31
    }
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 51 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void )
#line 51
{
  return (uint8_t )(sizeof(message_header_t ) - sizeof(serial_header_t ));
}

# 358 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id)
#line 358
{
  return 0;
}

# 15 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(uart_id_t arg_0x2b010b1c2308){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  switch (arg_0x2b010b1c2308) {
#line 15
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 15
      __nesc_result = SerialPacketInfoActiveMessageP__Info__offset();
#line 15
      break;
#line 15
    default:
#line 15
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(arg_0x2b010b1c2308);
#line 15
      break;
#line 15
    }
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 275 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void )
#line 275
{
  uart_id_t myType;
  message_t *myBuf;
  uint8_t mySize;
  uint8_t myWhich;

#line 280
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 280
    {
      myType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType;
      myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf;
      mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize;
      myWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
    }
#line 285
    __nesc_atomic_end(__nesc_atomic); }
  mySize -= /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(myType);
  mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(myType, myBuf, mySize);
  myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(myType, myBuf, myBuf, mySize);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 289
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[myWhich] = myBuf;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(myWhich);
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
    }
#line 293
    __nesc_atomic_end(__nesc_atomic); }
}

# 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t SinkP__SerialControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = SerialP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 152 "SinkP.nc"
static inline void SinkP__SerialControl__stopDone(error_t error)
#line 152
{
  SinkP__SerialControl__start();
}

# 138 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__stopDone(error_t error){
#line 138
  SinkP__SerialControl__stopDone(error);
#line 138
}
#line 138
# 172 "../../../LocalTimeSyncedMicro/chips/atm1281/McuSleepC.nc"
static inline void McuSleepC__McuPowerState__update(void )
#line 172
{
}

# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128UartP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 168 "/opt/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0RxControl__stop(void )
#line 168
{
  * (volatile uint8_t *)0XC1 &= ~(1 << 4);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 105 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = HplAtm128UartP__Uart0RxControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 156 "/opt/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0TxControl__stop(void )
#line 156
{
  * (volatile uint8_t *)0XC1 &= ~(1 << 3);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 105 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = HplAtm128UartP__Uart0TxControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 93 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void )
#line 93
{
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop();
  return SUCCESS;
}

# 105 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 336 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__flushDone(void )
#line 336
{
  SerialP__SerialControl__stop();
  SerialP__SplitControl__stopDone(SUCCESS);
}

static inline void SerialP__defaultSerialFlushTask__runTask(void )
#line 341
{
  SerialP__SerialFlush__flushDone();
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__startDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__startDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t SerialP__defaultSerialFlushTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__defaultSerialFlushTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 344 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__default__flush(void )
#line 344
{
  SerialP__defaultSerialFlushTask__postTask();
}

# 49 "/opt/tinyos-2.x/tos/lib/serial/SerialFlush.nc"
inline static void SerialP__SerialFlush__flush(void ){
#line 49
  SerialP__SerialFlush__default__flush();
#line 49
}
#line 49
# 332 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__stopDoneTask__runTask(void )
#line 332
{
  SerialP__SerialFlush__flush();
}

# 145 "SinkP.nc"
static inline void SinkP__SerialControl__startDone(error_t error)
#line 145
{
  if (error == SUCCESS) {
      SinkP__uartFull = FALSE;
      SinkP__uartBusy = FALSE;
    }
}

# 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__startDone(error_t error){
#line 113
  SinkP__SerialControl__startDone(error);
#line 113
}
#line 113
# 185 "/opt/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__enableRxIntr(void )
#line 185
{
  * (volatile uint8_t *)0XC1 |= 1 << 7;
  return SUCCESS;
}

# 42 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = HplAtm128UartP__HplUart0__enableRxIntr();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 162 "/opt/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0RxControl__start(void )
#line 162
{
  * (volatile uint8_t *)0XC1 |= 1 << 4;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = HplAtm128UartP__Uart0RxControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 150 "/opt/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0TxControl__start(void )
#line 150
{
  * (volatile uint8_t *)0XC1 |= 1 << 3;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = HplAtm128UartP__Uart0TxControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 190 "/opt/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__disableRxIntr(void )
#line 190
{
  * (volatile uint8_t *)0XC1 &= ~(1 << 7);
  return SUCCESS;
}

# 43 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = HplAtm128UartP__HplUart0__disableRxIntr();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 180 "/opt/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__disableTxIntr(void )
#line 180
{
  * (volatile uint8_t *)0XC1 &= ~(1 << 6);
  return SUCCESS;
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void ){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = HplAtm128UartP__HplUart0__disableTxIntr();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 77 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void )
#line 77
{

  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 0;


  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start();


  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr();
  return SUCCESS;
}

# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 322 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__startDoneTask__runTask(void )
#line 322
{
  SerialP__SerialControl__start();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 324
    {
      SerialP__txState = SerialP__TXSTATE_IDLE;
      SerialP__rxState = SerialP__RXSTATE_NOSYNC;
    }
#line 327
    __nesc_atomic_end(__nesc_atomic); }
  SerialP__SplitControl__startDone(SUCCESS);
}

# 56 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putDelimiter(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = HdlcTranslateC__SerialFrameComm__putDelimiter();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 194 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error)
#line 194
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 195
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = error;
#line 195
    __nesc_atomic_end(__nesc_atomic); }
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask();
}

# 91 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static void SerialP__SendBytePacket__sendCompleted(error_t error){
#line 91
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error);
#line 91
}
#line 91
# 244 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_empty(void )
#line 244
{
  bool ret;

#line 246
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 246
    ret = SerialP__ackQ.writePtr == SerialP__ackQ.readPtr;
#line 246
    __nesc_atomic_end(__nesc_atomic); }
  return ret;
}











static __inline uint8_t SerialP__ack_queue_top(void )
#line 260
{
  uint8_t tmp = 0;

  /* atomic removed: atomic calls only */
#line 262
  {
    if (!SerialP__ack_queue_is_empty()) {
        tmp = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
      }
  }
  return tmp;
}

static inline uint8_t SerialP__ack_queue_pop(void )
#line 270
{
  uint8_t retval = 0;

  /* atomic removed: atomic calls only */
#line 272
  {
    if (SerialP__ackQ.writePtr != SerialP__ackQ.readPtr) {
        retval = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
        if (++ SerialP__ackQ.readPtr > SerialP__ACK_QUEUE_SIZE) {
#line 275
          SerialP__ackQ.readPtr = 0;
          }
      }
  }
#line 278
  return retval;
}

#line 559
static inline void SerialP__RunTx__runTask(void )
#line 559
{
  uint8_t idle;
  uint8_t done;
  uint8_t fail;









  error_t result = SUCCESS;
  bool send_completed = FALSE;
  bool start_it = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 576
    {
      SerialP__txPending = 0;
      idle = SerialP__txState == SerialP__TXSTATE_IDLE;
      done = SerialP__txState == SerialP__TXSTATE_FINISH;
      fail = SerialP__txState == SerialP__TXSTATE_ERROR;
      if (done || fail) {
          SerialP__txState = SerialP__TXSTATE_IDLE;
          SerialP__txBuf[SerialP__txIndex].state = SerialP__BUFFER_AVAILABLE;
        }
    }
#line 585
    __nesc_atomic_end(__nesc_atomic); }


  if (done || fail) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 589
        {
          SerialP__txSeqno++;
          if (SerialP__txProto == SERIAL_PROTO_ACK) {
              SerialP__ack_queue_pop();
            }
          else {
              result = done ? SUCCESS : FAIL;
              send_completed = TRUE;
            }
        }
#line 598
        __nesc_atomic_end(__nesc_atomic); }
      idle = TRUE;
    }


  if (idle) {
      bool goInactive;

#line 605
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 605
        goInactive = SerialP__offPending;
#line 605
        __nesc_atomic_end(__nesc_atomic); }
      if (goInactive) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 607
            SerialP__txState = SerialP__TXSTATE_INACTIVE;
#line 607
            __nesc_atomic_end(__nesc_atomic); }
        }
      else {

          uint8_t myAckState;
          uint8_t myDataState;

#line 613
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 613
            {
              myAckState = SerialP__txBuf[SerialP__TX_ACK_INDEX].state;
              myDataState = SerialP__txBuf[SerialP__TX_DATA_INDEX].state;
            }
#line 616
            __nesc_atomic_end(__nesc_atomic); }
          if (!SerialP__ack_queue_is_empty() && myAckState == SerialP__BUFFER_AVAILABLE) {
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 618
                {
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].state = SerialP__BUFFER_COMPLETE;
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].buf = SerialP__ack_queue_top();

                  SerialP__txProto = SERIAL_PROTO_ACK;
                  SerialP__txIndex = SerialP__TX_ACK_INDEX;
                  start_it = TRUE;
                }
#line 625
                __nesc_atomic_end(__nesc_atomic); }
            }
          else {
#line 627
            if (myDataState == SerialP__BUFFER_FILLING || myDataState == SerialP__BUFFER_COMPLETE) {
                { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 628
                  {
                    SerialP__txProto = SERIAL_PROTO_PACKET_NOACK;
                    SerialP__txIndex = SerialP__TX_DATA_INDEX;
                    start_it = TRUE;
                  }
#line 632
                  __nesc_atomic_end(__nesc_atomic); }
              }
            else {
              }
            }
        }
    }
  else {
    }


  if (send_completed) {
      SerialP__SendBytePacket__sendCompleted(result);
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 646
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) {
          SerialP__testOff();
          {
#line 649
            __nesc_atomic_end(__nesc_atomic); 
#line 649
            return;
          }
        }
    }
#line 652
    __nesc_atomic_end(__nesc_atomic); }
  if (start_it) {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 655
        {
          SerialP__txCRC = 0;
          SerialP__txByteCnt = 0;
          SerialP__txState = SerialP__TXSTATE_PROTO;
        }
#line 659
        __nesc_atomic_end(__nesc_atomic); }
      if (SerialP__SerialFrameComm__putDelimiter() != SUCCESS) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 661
            SerialP__txState = SerialP__TXSTATE_ERROR;
#line 661
            __nesc_atomic_end(__nesc_atomic); }
          SerialP__MaybeScheduleTx();
        }
    }
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__stopDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__stopDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 174 "/opt/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__enableTxIntr(void )
#line 174
{
  * (volatile uint8_t *)0xC0 |= 1 << 6;
  * (volatile uint8_t *)0XC1 |= 1 << 6;
  return SUCCESS;
}

# 40 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void ){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtm128UartP__HplUart0__enableTxIntr();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__RunTx__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__RunTx);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 148 "../../../EAJobs/lib/EASchedulerP.nc"
static inline void EASchedulerP__EAJob__done(uint8_t jobId)
#line 148
{
}

# 8 "../../../EAJobs/interfaces/EAJob.nc"
inline static void OrinocoTrafficStatisticsP__PktRateJob__done(void ){
#line 8
  EASchedulerP__EAJob__done(/*OrinocoTrafficStatisticsC.Job*/EAJobC__0__JOB_ID);
#line 8
}
#line 8
# 161 "../../lib/net/orinoco/OrinocoTrafficStatisticsP.nc"
static inline void OrinocoTrafficStatisticsP__PktRateJob__run(void )
#line 161
{



  OrinocoTrafficStatisticsP__ts_.avgCreationRate = ewmaFilter32(OrinocoTrafficStatisticsP__ts_.avgCreationRate, (uint32_t )OrinocoTrafficStatisticsP__tv_.numPktCreated * 1024, OrinocoTrafficStatisticsP__EWMA_FILTER);
  OrinocoTrafficStatisticsP__tv_.numPktCreated = 0;

  OrinocoTrafficStatisticsP__ts_.avgReceptionRate = ewmaFilter32(OrinocoTrafficStatisticsP__ts_.avgReceptionRate, (uint32_t )OrinocoTrafficStatisticsP__tv_.numPktReceived * 1024, OrinocoTrafficStatisticsP__EWMA_FILTER);
  OrinocoTrafficStatisticsP__tv_.numPktReceived = 0;


  OrinocoTrafficStatisticsP__PktRateJob__done();
}

# 286 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

#line 347
static __inline  uint32_t __nesc_hton_uint32(void * target, uint32_t value)
#line 347
{
  uint8_t *base = target;

#line 349
  base[3] = value;
  base[2] = value >> 8;
  base[1] = value >> 16;
  base[0] = value >> 24;
  return value;
}

#line 315
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 8 "../../../EAJobs/interfaces/EAJob.nc"
inline static void OrinocoStatsReportingJobP__EAJob__done(void ){
#line 8
  EASchedulerP__EAJob__done(/*OrinocoStatsReportingJobC.Job*/EAJobC__1__JOB_ID);
#line 8
}
#line 8
# 135 "SinkP.nc"
static inline message_t *SinkP__OrinocoStatsReportingMsg__receive(message_t *msg, void *payload, uint8_t len)
#line 135
{

  return msg;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * OrinocoStatsReportingJobP__Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = SinkP__OrinocoStatsReportingMsg__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 120 "../../lib/net/orinoco/OrinocoTrafficStatisticsP.nc"
static inline uint8_t OrinocoTrafficStatisticsP__Stats__getRxBurst(void )
#line 120
{
  return OrinocoTrafficStatisticsP__ts_.avgRxBurstLen >> 8;
}

# 52 "../../interfaces/OrinocoTrafficStatistics.nc"
inline static uint8_t OrinocoStatsReportingJobP__TrafficStats__getRxBurst(void ){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = OrinocoTrafficStatisticsP__Stats__getRxBurst();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 106 "../../lib/net/orinoco/OrinocoTrafficStatisticsP.nc"
static inline uint8_t OrinocoTrafficStatisticsP__Stats__getTxBurst(void )
#line 106
{
  return OrinocoTrafficStatisticsP__ts_.avgTxBurstLen >> 8;
}

# 50 "../../interfaces/OrinocoTrafficStatistics.nc"
inline static uint8_t OrinocoStatsReportingJobP__TrafficStats__getTxBurst(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = OrinocoTrafficStatisticsP__Stats__getTxBurst();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 137 "../../lib/net/orinoco/OrinocoTrafficStatisticsP.nc"
static inline uint32_t OrinocoTrafficStatisticsP__Stats__getForwardDelay(void )
#line 137
{
  return OrinocoTrafficStatisticsP__ts_.avgForwardDelay;
}

# 54 "../../interfaces/OrinocoTrafficStatistics.nc"
inline static uint32_t OrinocoStatsReportingJobP__TrafficStats__getForwardDelay(void ){
#line 54
  unsigned long __nesc_result;
#line 54

#line 54
  __nesc_result = OrinocoTrafficStatisticsP__Stats__getForwardDelay();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 93 "../../lib/net/orinoco/OrinocoTrafficStatisticsP.nc"
static inline uint16_t OrinocoTrafficStatisticsP__Stats__getPktReceptionIntvl(void )
#line 93
{

  if (OrinocoTrafficStatisticsP__ts_.avgReceptionRate > (180 * 1024UL >> 16)) {
      return (uint16_t )(180 * 1024UL / OrinocoTrafficStatisticsP__ts_.avgReceptionRate);
    }
  else 
#line 97
    {
      return 0xFFFF;
    }
}

# 48 "../../interfaces/OrinocoTrafficStatistics.nc"
inline static uint16_t OrinocoStatsReportingJobP__TrafficStats__getPktReceptionIntvl(void ){
#line 48
  unsigned short __nesc_result;
#line 48

#line 48
  __nesc_result = OrinocoTrafficStatisticsP__Stats__getPktReceptionIntvl();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 80 "../../lib/net/orinoco/OrinocoTrafficStatisticsP.nc"
static inline uint16_t OrinocoTrafficStatisticsP__Stats__getPktCreationIntvl(void )
#line 80
{

  if (OrinocoTrafficStatisticsP__ts_.avgCreationRate > (180 * 1024UL >> 16)) {
      return (uint16_t )(180 * 1024UL / OrinocoTrafficStatisticsP__ts_.avgCreationRate);
    }
  else 
#line 84
    {
      return 0xFFFF;
    }
}

# 46 "../../interfaces/OrinocoTrafficStatistics.nc"
inline static uint16_t OrinocoStatsReportingJobP__TrafficStats__getPktCreationIntvl(void ){
#line 46
  unsigned short __nesc_result;
#line 46

#line 46
  __nesc_result = OrinocoTrafficStatisticsP__Stats__getPktCreationIntvl();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 927 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__RadioPacket__clear(message_t *msg)
{
}

# 70 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__clear(message_t *msg){
#line 70
  RF230DriverLayerP__RadioPacket__clear(msg);
#line 70
}
#line 70
# 28 "../../chips/rf230/RF230SlimRadioP.nc"
static inline uint8_t RF230SlimRadioP__RF230DriverConfig__metadataLength(message_t *msg)
#line 28
{
  return 0;
}

# 52 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverConfig.nc"
inline static uint8_t RF230DriverLayerP__Config__metadataLength(message_t *msg){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = RF230SlimRadioP__RF230DriverConfig__metadataLength(msg);
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 922 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayerP.nc"
static inline uint8_t RF230DriverLayerP__RadioPacket__metadataLength(message_t *msg)
{
  return RF230DriverLayerP__Config__metadataLength(msg) + sizeof(rf230_metadata_t );
}

# 65 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__metadataLength(message_t *msg){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = RF230DriverLayerP__RadioPacket__metadataLength(msg);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 110 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(message_t *msg)
{
  return /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__metadataLength(msg) + sizeof(flags_metadata_t );
}

#line 54
static inline flags_metadata_t */*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(msg);
}

#line 115
static inline void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__clear(message_t *msg)
{
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(msg)->flags = 0;
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__clear(msg);
}

# 70 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__clear(message_t *msg){
#line 70
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__clear(msg);
#line 70
}
#line 70
# 141 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__clear(message_t *msg)
{

  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__clear(msg);
}

# 70 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__clear(message_t *msg){
#line 70
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__clear(msg);
#line 70
}
#line 70
# 307 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__clear(message_t *msg)
{
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(msg);
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__clear(msg);
}

# 70 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__clear(message_t *msg){
#line 70
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__clear(msg);
#line 70
}
#line 70
# 179 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__clear(message_t *msg)
{
  /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__clear(msg);
}

# 70 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__clear(message_t *msg){
#line 70
  /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__clear(msg);
#line 70
}
#line 70
# 250 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__clear(message_t *msg)
{
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__clear(msg);
}



static inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__clear(message_t *msg)
{
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__clear(msg);
}

# 65 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void OrinocoRadioP__SubPacket__clear(message_t * msg){
#line 65
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__clear(msg);
#line 65
}
#line 65
# 749 "../../lib/net/orinoco/OrinocoRadioP.nc"
static inline void OrinocoRadioP__Packet__clear(message_t *msg)
#line 749
{
  return OrinocoRadioP__SubPacket__clear(msg);
}

# 65 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void OrinocoQueueP__SubPacket__clear(message_t * msg){
#line 65
  OrinocoRadioP__Packet__clear(msg);
#line 65
}
#line 65
# 375 "../../lib/net/orinoco/OrinocoQueueP.nc"
static inline void OrinocoQueueP__Packet__clear(message_t *msg)
#line 375
{
  OrinocoQueueP__SubPacket__clear(msg);
}

# 65 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void OrinocoStatsReportingJobP__Packet__clear(message_t * msg){
#line 65
  OrinocoQueueP__Packet__clear(msg);
#line 65
}
#line 65
#line 126
inline static void * OrinocoRadioP__SubPacket__getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 765 "../../lib/net/orinoco/OrinocoRadioP.nc"
static inline void *OrinocoRadioP__Packet__getPayload(message_t *msg, uint8_t len)
#line 765
{
  return OrinocoRadioP__SubPacket__getPayload(msg, len);
}

# 126 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void * OrinocoQueueP__SubPacket__getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = OrinocoRadioP__Packet__getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 391 "../../lib/net/orinoco/OrinocoQueueP.nc"
static inline void *OrinocoQueueP__Packet__getPayload(message_t *msg, uint8_t len)
#line 391
{

  return OrinocoQueueP__SubPacket__getPayload(msg, len + sizeof(orinoco_data_header_t ));
}

# 126 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void * OrinocoStatsReportingJobP__Packet__getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = OrinocoQueueP__Packet__getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 19 "../../../Reporting/OrinocoStatsReportingJobP.nc"
static inline void OrinocoStatsReportingJobP__EAJob__run(void )
#line 19
{
  OrinocoStatsReportingMsg *p = (OrinocoStatsReportingMsg *)
  OrinocoStatsReportingJobP__Packet__getPayload(OrinocoStatsReportingJobP__pmsg_, sizeof(OrinocoStatsReportingMsg ));


  OrinocoStatsReportingJobP__Packet__clear(OrinocoStatsReportingJobP__pmsg_);
  __nesc_hton_uint16(p->seqno.nxdata, OrinocoStatsReportingJobP__seqno_++);

  __nesc_hton_uint16(p->ts.avgCreationIntvl.nxdata, OrinocoStatsReportingJobP__TrafficStats__getPktCreationIntvl());
  __nesc_hton_uint16(p->ts.avgReceptionIntvl.nxdata, OrinocoStatsReportingJobP__TrafficStats__getPktReceptionIntvl());
  __nesc_hton_uint32(p->ts.avgForwardDelay.nxdata, OrinocoStatsReportingJobP__TrafficStats__getForwardDelay());
  __nesc_hton_uint8(p->ts.avgTxBurstLen.nxdata, OrinocoStatsReportingJobP__TrafficStats__getTxBurst());
  __nesc_hton_uint8(p->ts.avgRxBurstLen.nxdata, OrinocoStatsReportingJobP__TrafficStats__getRxBurst());


  OrinocoStatsReportingJobP__pmsg_ = OrinocoStatsReportingJobP__Receive__receive(OrinocoStatsReportingJobP__pmsg_, p, sizeof(OrinocoStatsReportingMsg ));


  OrinocoStatsReportingJobP__EAJob__done();
}

# 8 "../../../EAJobs/interfaces/EAJob.nc"
inline static void OrinocoDebugReportingJobP__EAJob__done(void ){
#line 8
  EASchedulerP__EAJob__done(/*OrinocoDebugReportingJobC.Job*/EAJobC__2__JOB_ID);
#line 8
}
#line 8
# 140 "SinkP.nc"
static inline message_t *SinkP__OrinocoDebugReportingMsg__receive(message_t *msg, void *payload, uint8_t len)
#line 140
{

  return msg;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * OrinocoDebugReportingJobP__Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = SinkP__OrinocoDebugReportingMsg__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 371 "../../lib/net/orinoco/OrinocoRadioP.nc"
static inline const orinoco_packet_statistics_t *OrinocoRadioP__PacketStatistics__get(void )
#line 371
{
  return &OrinocoRadioP__ps_;
}

# 55 "/opt/tinyos-2.x/tos/interfaces/Get.nc"
inline static OrinocoDebugReportingJobP__PacketStats__val_t OrinocoDebugReportingJobP__PacketStats__get(void ){
#line 55
  struct __nesc_unnamed4338 const *__nesc_result;
#line 55

#line 55
  __nesc_result = OrinocoRadioP__PacketStatistics__get();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 452 "../../lib/net/orinoco/OrinocoQueueP.nc"
static inline const orinoco_queue_statistics_t *OrinocoQueueP__QueueStatistics__get(void )
#line 452
{
  return &OrinocoQueueP__qs_;
}

# 55 "/opt/tinyos-2.x/tos/interfaces/Get.nc"
inline static OrinocoDebugReportingJobP__QueueStats__val_t OrinocoDebugReportingJobP__QueueStats__get(void ){
#line 55
  struct __nesc_unnamed4336 const *__nesc_result;
#line 55

#line 55
  __nesc_result = OrinocoQueueP__QueueStatistics__get();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 65 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void OrinocoDebugReportingJobP__Packet__clear(message_t * msg){
#line 65
  OrinocoQueueP__Packet__clear(msg);
#line 65
}
#line 65
#line 126
inline static void * OrinocoDebugReportingJobP__Packet__getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = OrinocoQueueP__Packet__getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 21 "../../../Reporting/OrinocoDebugReportingJobP.nc"
static inline void OrinocoDebugReportingJobP__EAJob__run(void )
#line 21
{
  const orinoco_queue_statistics_t *qs;
  const orinoco_packet_statistics_t *ps;
  OrinocoDebugReportingMsg *p = (OrinocoDebugReportingMsg *)
  OrinocoDebugReportingJobP__Packet__getPayload(OrinocoDebugReportingJobP__pmsg_, sizeof(OrinocoDebugReportingMsg ));


  OrinocoDebugReportingJobP__Packet__clear(OrinocoDebugReportingJobP__pmsg_);
  __nesc_hton_uint16(p->seqno.nxdata, OrinocoDebugReportingJobP__seqno_++);

  qs = OrinocoDebugReportingJobP__QueueStats__get();
  __nesc_hton_uint16(p->qs.numPacketsDropped.nxdata, qs->numPacketsDropped);
  __nesc_hton_uint16(p->qs.numDuplicates.nxdata, qs->numDuplicates);

  ps = OrinocoDebugReportingJobP__PacketStats__get();
  __nesc_hton_uint32(p->ps.numTxBeacons.nxdata, ps->numTxBeacons);
  __nesc_hton_uint32(p->ps.numTxAckBeacons.nxdata, ps->numTxAckBeacons);
  __nesc_hton_uint16(p->ps.numTxBeaconsFail.nxdata, ps->numTxBeaconsFail);
  __nesc_hton_uint32(p->ps.numRxBeacons.nxdata, ps->numRxBeacons);
  __nesc_hton_uint32(p->ps.numIgnoredBeacons.nxdata, ps->numIgnoredBeacons);
  __nesc_hton_uint32(p->ps.numTxPackets.nxdata, ps->numTxPackets);
  __nesc_hton_uint16(p->ps.numTxPacketsFail.nxdata, ps->numTxPacketsFail);
  __nesc_hton_uint32(p->ps.numRxPackets.nxdata, ps->numRxPackets);
  __nesc_hton_uint16(p->ps.numTxTimeouts.nxdata, ps->numTxTimeouts);
  __nesc_hton_uint16(p->ps.numMetricResets.nxdata, ps->numMetricResets);


  OrinocoDebugReportingJobP__pmsg_ = OrinocoDebugReportingJobP__Receive__receive(OrinocoDebugReportingJobP__pmsg_, p, sizeof(OrinocoDebugReportingMsg ));


  OrinocoDebugReportingJobP__EAJob__done();
}

# 153 "../../../EAJobs/lib/EASchedulerP.nc"
static inline void EASchedulerP__EAJob__default__run(uint8_t jobId)
#line 153
{
}

# 4 "../../../EAJobs/interfaces/EAJob.nc"
inline static void EASchedulerP__EAJob__run(uint8_t arg_0x2b010b019608){
#line 4
  switch (arg_0x2b010b019608) {
#line 4
    case /*OrinocoTrafficStatisticsC.Job*/EAJobC__0__JOB_ID:
#line 4
      OrinocoTrafficStatisticsP__PktRateJob__run();
#line 4
      break;
#line 4
    case /*OrinocoStatsReportingJobC.Job*/EAJobC__1__JOB_ID:
#line 4
      OrinocoStatsReportingJobP__EAJob__run();
#line 4
      break;
#line 4
    case /*OrinocoDebugReportingJobC.Job*/EAJobC__2__JOB_ID:
#line 4
      OrinocoDebugReportingJobP__EAJob__run();
#line 4
      break;
#line 4
    default:
#line 4
      EASchedulerP__EAJob__default__run(arg_0x2b010b019608);
#line 4
      break;
#line 4
    }
#line 4
}
#line 4
# 4 "../../../EAJobs/interfaces/EAScheduler.nc"
inline static void EAEnergyManagerP__EAScheduler__scheduleJob(jobid_t jobId, uint32_t dt){
#line 4
  EASchedulerP__EAScheduler__scheduleJob(jobId, dt);
#line 4
}
#line 4
# 27 "../../../EAJobs/lib/EAEnergyManagerP.nc"
static inline ea_generic_jobconfig_t *EAEnergyManagerP__EAJobConfig__default__getConfig(uint8_t jobId)
#line 27
{
  return (void *)0;
}

# 8 "../../../EAJobs/interfaces/EAJobConfig.nc"
inline static ea_generic_jobconfig_t *EAEnergyManagerP__EAJobConfig__getConfig(uint8_t arg_0x2b010b038388){
#line 8
  struct ea_generic_jobconfig_t *__nesc_result;
#line 8

#line 8
  switch (arg_0x2b010b038388) {
#line 8
    case /*OrinocoTrafficStatisticsC.Job*/EAJobC__0__JOB_ID:
#line 8
      __nesc_result = /*OrinocoTrafficStatisticsC.EAPeriodicJobConfigC*/EAPeriodicJobConfigC__0__JobConfig__getConfig();
#line 8
      break;
#line 8
    case /*OrinocoStatsReportingJobC.Job*/EAJobC__1__JOB_ID:
#line 8
      __nesc_result = /*OrinocoStatsReportingJobC.EAPeriodicJobConfigC*/EAPeriodicJobConfigC__1__JobConfig__getConfig();
#line 8
      break;
#line 8
    case /*OrinocoDebugReportingJobC.Job*/EAJobC__2__JOB_ID:
#line 8
      __nesc_result = /*OrinocoDebugReportingJobC.EAPeriodicJobConfigC*/EAPeriodicJobConfigC__2__JobConfig__getConfig();
#line 8
      break;
#line 8
    default:
#line 8
      __nesc_result = EAEnergyManagerP__EAJobConfig__default__getConfig(arg_0x2b010b038388);
#line 8
      break;
#line 8
    }
#line 8

#line 8
  return __nesc_result;
#line 8
}
#line 8
# 32 "../../../EAJobs/lib/EAEnergyManagerP.nc"
static inline void EAEnergyManagerP__EAScheduler__jobStarted(jobid_t jobid)
#line 32
{
  ea_generic_jobconfig_t *jc = EAEnergyManagerP__EAJobConfig__getConfig(jobid);

#line 34
  EAEnergyManagerP__EAScheduler__scheduleJob(jobid, ((ea_periodic_jobconfig_t *)jc)->period);
}

# 5 "../../../EAJobs/interfaces/EAScheduler.nc"
inline static void EASchedulerP__EAScheduler__jobStarted(jobid_t jobId){
#line 5
  EAEnergyManagerP__EAScheduler__jobStarted(jobId);
#line 5
}
#line 5
# 286 "../../../LocalTimeSyncedMicro/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getNow(void )
#line 286
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__get();
}

# 109 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 97
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 136 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 159 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

# 73 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void EASchedulerP__DispatchTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(3U, dt);
#line 73
}
#line 73
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t EASchedulerP__dispatch__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(EASchedulerP__dispatch);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 86 "../../../EAJobs/lib/EASchedulerP.nc"
static __inline void EASchedulerP__restartDispatchTimer(void )
#line 86
{
  if (EASchedulerP__head_ != EASchedulerP__NUM_JOBS) {
      if (EASchedulerP__dispatchTime_[EASchedulerP__head_] == 0) {
          EASchedulerP__dispatch__postTask();
        }
      else 
#line 90
        {
          EASchedulerP__DispatchTimer__startOneShot(EASchedulerP__dispatchTime_[EASchedulerP__head_]);
        }
    }
}

#line 55
static inline jobid_t EASchedulerP__popJob(void )
#line 55
{
  jobid_t curJob;

#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    {
      curJob = EASchedulerP__head_;
      EASchedulerP__head_ = EASchedulerP__schedule_[EASchedulerP__head_];
    }
#line 60
    __nesc_atomic_end(__nesc_atomic); }
  return curJob;
}


static inline void EASchedulerP__dispatch__runTask(void )
#line 65
{
  uint8_t i;
  jobid_t curJob = EASchedulerP__popJob();





  for (i = EASchedulerP__head_; i != EASchedulerP__NUM_JOBS; i = EASchedulerP__schedule_[i]) {
      EASchedulerP__dispatchTime_[i] -= EASchedulerP__dispatchTime_[curJob];
    }
  EASchedulerP__restartDispatchTimer();



  EASchedulerP__EAScheduler__jobStarted(curJob);


  EASchedulerP__EAJob__run(curJob);
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 154 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline uint8_t HplAtm1281Timer2AsyncP__TimerCtrl__getInterruptFlag(void )
#line 154
{
  return * (volatile uint8_t *)(0x17 + 0x20);
}

# 89 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
inline static uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void ){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = HplAtm1281Timer2AsyncP__TimerCtrl__getInterruptFlag();
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 9 "../../../Reporting/OrinocoDebugReportingJobConfigC.nc"
static inline uint32_t OrinocoDebugReportingJobConfigC__JobConfig__getPeriod(void )
#line 9
{
  return 921600UL;
}

# 2 "../../../EAJobs/interfaces/EAPeriodicJobConfig.nc"
inline static uint32_t /*OrinocoDebugReportingJobC.EAPeriodicJobConfigC*/EAPeriodicJobConfigC__2__SubJobConfig__getPeriod(void ){
#line 2
  unsigned long __nesc_result;
#line 2

#line 2
  __nesc_result = OrinocoDebugReportingJobConfigC__JobConfig__getPeriod();
#line 2

#line 2
  return __nesc_result;
#line 2
}
#line 2
# 7 "../../../Reporting/OrinocoStatsReportingJobConfigC.nc"
static inline uint32_t OrinocoStatsReportingJobConfigC__JobConfig__getPeriod(void )
#line 7
{
  return 614400UL;
}

# 2 "../../../EAJobs/interfaces/EAPeriodicJobConfig.nc"
inline static uint32_t /*OrinocoStatsReportingJobC.EAPeriodicJobConfigC*/EAPeriodicJobConfigC__1__SubJobConfig__getPeriod(void ){
#line 2
  unsigned long __nesc_result;
#line 2

#line 2
  __nesc_result = OrinocoStatsReportingJobConfigC__JobConfig__getPeriod();
#line 2

#line 2
  return __nesc_result;
#line 2
}
#line 2
# 157 "../../lib/net/orinoco/OrinocoTrafficStatisticsP.nc"
static inline uint32_t OrinocoTrafficStatisticsP__PktRateJobConfig__getPeriod(void )
#line 157
{
  return 180 * 1024UL;
}

# 2 "../../../EAJobs/interfaces/EAPeriodicJobConfig.nc"
inline static uint32_t /*OrinocoTrafficStatisticsC.EAPeriodicJobConfigC*/EAPeriodicJobConfigC__0__SubJobConfig__getPeriod(void ){
#line 2
  unsigned long __nesc_result;
#line 2

#line 2
  __nesc_result = OrinocoTrafficStatisticsP__PktRateJobConfig__getPeriod();
#line 2

#line 2
  return __nesc_result;
#line 2
}
#line 2
# 169 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning;
}

# 92 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static bool EASchedulerP__DispatchTimer__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(3U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
# 189 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
}

# 136 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static uint32_t EASchedulerP__DispatchTimer__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(3U);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 194 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__gett0(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].t0;
}

# 144 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static uint32_t EASchedulerP__DispatchTimer__gett0(void ){
#line 144
  unsigned long __nesc_result;
#line 144

#line 144
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__gett0(3U);
#line 144

#line 144
  return __nesc_result;
#line 144
}
#line 144
# 40 "../../../EAJobs/lib/EASchedulerP.nc"
static inline void EASchedulerP__printSchedule(void )
#line 40
{
}

# 24 "../../chips/rf230/RF230SlimRadioP.nc"
static inline uint8_t RF230SlimRadioP__RF230DriverConfig__maxPayloadLength(void )
#line 24
{
  return sizeof(rf230packet_header_t ) + 80;
}

# 46 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverConfig.nc"
inline static uint8_t RF230DriverLayerP__Config__maxPayloadLength(void ){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = RF230SlimRadioP__RF230DriverConfig__maxPayloadLength();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 915 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayerP.nc"
static inline uint8_t RF230DriverLayerP__RadioPacket__maxPayloadLength(void )
{
  for (; 0; ) ;

  return RF230DriverLayerP__Config__maxPayloadLength() - sizeof(rf230_header_t );
}

# 59 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = RF230DriverLayerP__RadioPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 105 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__maxPayloadLength(void )
{
  return /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__maxPayloadLength();
}

# 59 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 131 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__maxPayloadLength(void )
{
  return /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__maxPayloadLength();
}

# 59 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 297 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__maxPayloadLength(void )
{
  return /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__maxPayloadLength() - sizeof(ieee154_simple_header_t );
}

# 59 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 169 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__maxPayloadLength(void )
{
  return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__maxPayloadLength() - /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET;
}

# 59 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 240 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength(void )
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__maxPayloadLength() - sizeof(activemessage_header_t );
}

# 110 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void OrinocoForwardLayerP__AMSend__sendDone(message_t * msg, error_t error){
#line 110
  OrinocoRadioP__DataSubSend__sendDone(msg, error);
#line 110
}
#line 110
# 31 "../../lib/net/orinoco/OrinocoForwardLayerP.nc"
static inline void OrinocoForwardLayerP__doneTask__runTask(void )
#line 31
{
  OrinocoForwardLayerP__state_ = OrinocoForwardLayerP__STATE_READY;
  OrinocoForwardLayerP__AMSend__sendDone(OrinocoForwardLayerP__txBuf_, OrinocoForwardLayerP__txError_);
}

# 92 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static bool OrinocoRadioP__Timer__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(2U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
# 59 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
inline static void RF230DriverLayerP__Tasklet__schedule(void ){
#line 59
  TaskletC__Tasklet__schedule();
#line 59
}
#line 59
# 120 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t RF230DriverLayerP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__release(0U);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 55 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )37U |= 1 << 7;
}

# 40 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__SLP_TR__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__set();
#line 40
}
#line 40
# 115 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline uint8_t HplAtm128SpiP__SPI__read(void )
#line 115
{
#line 115
  return * (volatile uint8_t *)(0X2E + 0x20);
}

# 97 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static uint8_t Atm128SpiP__Spi__read(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = HplAtm128SpiP__SPI__read();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 124 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline bool HplAtm128SpiP__SPI__isInterruptPending(void )
#line 124
{
  return (* (volatile uint8_t *)(0x2D + 0x20) & (1 << 7)) != 0;
}

# 136 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static bool Atm128SpiP__Spi__isInterruptPending(void ){
#line 136
  unsigned char __nesc_result;
#line 136

#line 136
  __nesc_result = HplAtm128SpiP__SPI__isInterruptPending();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 196 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static __inline uint8_t Atm128SpiP__FastSpiByte__splitRead(void )
#line 196
{
  while (!Atm128SpiP__Spi__isInterruptPending()) 
    ;
  return Atm128SpiP__Spi__read();
}

# 68 "/opt/tinyos-2.x/tos/interfaces/FastSpiByte.nc"
inline static uint8_t RF230DriverLayerP__FastSpiByte__splitRead(void ){
#line 68
  unsigned char __nesc_result;
#line 68

#line 68
  __nesc_result = Atm128SpiP__FastSpiByte__splitRead();
#line 68

#line 68
  return __nesc_result;
#line 68
}
#line 68
# 116 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__write(uint8_t d)
#line 116
{
#line 116
  * (volatile uint8_t *)(0X2E + 0x20) = d;
}

# 103 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__write(uint8_t data){
#line 103
  HplAtm128SpiP__SPI__write(data);
#line 103
}
#line 103
# 202 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static __inline uint8_t Atm128SpiP__FastSpiByte__splitReadWrite(uint8_t data)
#line 202
{
  uint8_t b;

  while (!Atm128SpiP__Spi__isInterruptPending()) 
    ;

  b = Atm128SpiP__Spi__read();
  Atm128SpiP__Spi__write(data);

  return b;
}

# 74 "/opt/tinyos-2.x/tos/interfaces/FastSpiByte.nc"
inline static uint8_t RF230DriverLayerP__FastSpiByte__splitReadWrite(uint8_t data){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = Atm128SpiP__FastSpiByte__splitReadWrite(data);
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 192 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static __inline void Atm128SpiP__FastSpiByte__splitWrite(uint8_t data)
#line 192
{
  Atm128SpiP__Spi__write(data);
}

# 62 "/opt/tinyos-2.x/tos/interfaces/FastSpiByte.nc"
inline static void RF230DriverLayerP__FastSpiByte__splitWrite(uint8_t data){
#line 62
  Atm128SpiP__FastSpiByte__splitWrite(data);
#line 62
}
#line 62
# 56 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )37U &= ~(1 << 0);
}

# 41 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__SELN__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr();
#line 41
}
#line 41
# 155 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayerP.nc"
static __inline void RF230DriverLayerP__writeRegister(uint8_t reg, uint8_t value)
{
  for (; 0; ) ;
  for (; 0; ) ;

  RF230DriverLayerP__SELN__clr();
  RF230DriverLayerP__FastSpiByte__splitWrite(RF230_CMD_REGISTER_WRITE | reg);
  RF230DriverLayerP__FastSpiByte__splitReadWrite(value);
  RF230DriverLayerP__FastSpiByte__splitRead();
  RF230DriverLayerP__SELN__set();
}

# 40 "/opt/tinyos-2.x/tos/platforms/micaz/BusyWaitMicroC.nc"
static __inline void BusyWaitMicroC__BusyWait__wait(uint16_t dt)
#line 40
{

  if (dt) {


     __asm volatile (
    "1:	sbiw	%0,1\n"
    "	adiw	%0,1\n"
    "	sbiw	%0,1\n"
    "	brne	1b" : "+w"(dt));
    }
}

# 66 "/opt/tinyos-2.x/tos/lib/timer/BusyWait.nc"
inline static void RF230DriverLayerP__BusyWait__wait(RF230DriverLayerP__BusyWait__size_type dt){
#line 66
  BusyWaitMicroC__BusyWait__wait(dt);
#line 66
}
#line 66
# 56 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )34U &= ~(1 << 6);
}

# 41 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__RSTN__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr();
#line 41
}
#line 41
# 242 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__initRadio(void )
{
  RF230DriverLayerP__BusyWait__wait(510);

  RF230DriverLayerP__RSTN__clr();
  RF230DriverLayerP__SLP_TR__clr();
  RF230DriverLayerP__BusyWait__wait(6);
  RF230DriverLayerP__RSTN__set();

  RF230DriverLayerP__writeRegister(RF230_TRX_CTRL_0, RF230_TRX_CTRL_0_VALUE);
  RF230DriverLayerP__writeRegister(RF230_TRX_STATE, RF230_TRX_OFF);

  RF230DriverLayerP__BusyWait__wait(510);

  RF230DriverLayerP__writeRegister(RF230_IRQ_MASK, ((RF230_IRQ_TRX_UR | RF230_IRQ_PLL_LOCK) | RF230_IRQ_TRX_END) | RF230_IRQ_RX_START);
  RF230DriverLayerP__writeRegister(RF230_CCA_THRES, RF230_CCA_THRES_VALUE);
  RF230DriverLayerP__writeRegister(RF230_PHY_TX_PWR, RF230_TX_AUTO_CRC_ON | (0 & RF230_TX_PWR_MASK));

  RF230DriverLayerP__txPower = 0 & RF230_TX_PWR_MASK;
  RF230DriverLayerP__channel = 19 & RF230_CHANNEL_MASK;
  RF230DriverLayerP__writeRegister(RF230_PHY_CC_CCA, RF230_CCA_MODE_VALUE | RF230DriverLayerP__channel);

  RF230DriverLayerP__SLP_TR__set();
  RF230DriverLayerP__state = RF230DriverLayerP__STATE_SLEEP;
}



static inline void RF230DriverLayerP__SpiResource__granted(void )
{
  RF230DriverLayerP__SELN__makeOutput();
  RF230DriverLayerP__SELN__set();

  if (RF230DriverLayerP__state == RF230DriverLayerP__STATE_P_ON) 
    {
      RF230DriverLayerP__initRadio();
      RF230DriverLayerP__SpiResource__release();
    }
  else {
    RF230DriverLayerP__Tasklet__schedule();
    }
}

# 158 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__default__granted(uint8_t id)
#line 158
{
}

# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__granted(uint8_t arg_0x2b010a7ff020){
#line 102
  switch (arg_0x2b010a7ff020) {
#line 102
    case 0U:
#line 102
      RF230DriverLayerP__SpiResource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__default__granted(arg_0x2b010a7ff020);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 392 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__ResourceConfigure__configure(uint8_t id)
#line 392
{
  Atm128SpiP__startSpi();
}

# 59 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__configure(uint8_t arg_0x2b010a7fc6e0){
#line 59
  Atm128SpiP__ResourceConfigure__configure(arg_0x2b010a7fc6e0);
#line 59
}
#line 59
# 149 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__runTask(void )
#line 149
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 150
    {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_BUSY;
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId);
    }
#line 153
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__granted(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId);
}

# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128SpiP__Mcu__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 173 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setMasterBit(bool isMaster)
#line 173
{
  if (isMaster) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 4;
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 4);
    }
}

# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__SS__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput();
#line 46
}
#line 46
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )36U |= 1 << 1;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__SCK__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput();
#line 46
}
#line 46
# 59 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )36U &= ~(1 << 3);
}

# 44 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__MISO__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput();
#line 44
}
#line 44
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )36U |= 1 << 2;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__MOSI__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput();
#line 46
}
#line 46
# 96 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__initMaster(void )
#line 96
{
  HplAtm128SpiP__MOSI__makeOutput();
  HplAtm128SpiP__MISO__makeInput();
  HplAtm128SpiP__SCK__makeOutput();
  HplAtm128SpiP__SS__makeOutput();
  HplAtm128SpiP__SPI__setMasterBit(TRUE);
}

# 83 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__initMaster(void ){
#line 83
  HplAtm128SpiP__SPI__initMaster();
#line 83
}
#line 83
# 186 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle)
#line 186
{
  if (highWhenIdle) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 3;
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 3);
    }
}

# 125 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClockPolarity(bool highWhenIdle){
#line 125
  HplAtm128SpiP__SPI__setClockPolarity(highWhenIdle);
#line 125
}
#line 125
# 200 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing)
#line 200
{
  if (sampleOnTrailing) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 2;
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 2);
    }
}

# 128 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClockPhase(bool sampleOnTrailing){
#line 128
  HplAtm128SpiP__SPI__setClockPhase(sampleOnTrailing);
#line 128
}
#line 128
# 230 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on)
#line 230
{
  if (on) {
      * (volatile uint8_t *)(0x2D + 0x20) |= 1 << 0;
    }
  else {
      * (volatile uint8_t *)(0x2D + 0x20) &= ~(1 << 0);
    }
}

# 141 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setMasterDoubleSpeed(bool on){
#line 141
  HplAtm128SpiP__SPI__setMasterDoubleSpeed(on);
#line 141
}
#line 141
# 217 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClock(uint8_t v)
#line 217
{
  v &= (1 << 1) | (1 << 0);
  * (volatile uint8_t *)(0x2C + 0x20) = (* (volatile uint8_t *)(0x2C + 0x20) & ~((1 << 1) | (1 << 0))) | v;
}

# 131 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClock(uint8_t speed){
#line 131
  HplAtm128SpiP__SPI__setClock(speed);
#line 131
}
#line 131
# 60 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 68 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
        uint8_t id = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead;

#line 72
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead];
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
          }
#line 75
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[id] = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static void Atm128SpiP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 112 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__sleep(void )
#line 112
{
}

# 89 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__sleep(void ){
#line 89
  HplAtm128SpiP__SPI__sleep();
#line 89
}
#line 89
#line 116
inline static void Atm128SpiP__Spi__enableSpi(bool busOn){
#line 116
  HplAtm128SpiP__SPI__enableSpi(busOn);
#line 116
}
#line 116
# 165 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__stopSpi(void )
#line 165
{
  Atm128SpiP__Spi__enableSpi(FALSE);
  /* atomic removed: atomic calls only */
#line 167
  {
    Atm128SpiP__Spi__sleep();
  }
  Atm128SpiP__McuPowerState__update();
}

#line 396
static inline void Atm128SpiP__ResourceConfigure__unconfigure(uint8_t id)
#line 396
{
  Atm128SpiP__stopSpi();
}

# 65 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__unconfigure(uint8_t arg_0x2b010a7fc6e0){
#line 65
  Atm128SpiP__ResourceConfigure__unconfigure(arg_0x2b010a7fc6e0);
#line 65
}
#line 65
# 613 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__RadioCCA__default__done(error_t error)
#line 613
{
}

# 52 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioCCA.nc"
inline static void RF230DriverLayerP__RadioCCA__done(error_t error){
#line 52
  RF230DriverLayerP__RadioCCA__default__done(error);
#line 52
}
#line 52
# 167 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayerP.nc"
static __inline uint8_t RF230DriverLayerP__readRegister(uint8_t reg)
{
  for (; 0; ) ;
  for (; 0; ) ;

  RF230DriverLayerP__SELN__clr();
  RF230DriverLayerP__FastSpiByte__splitWrite(RF230_CMD_REGISTER_READ | reg);
  RF230DriverLayerP__FastSpiByte__splitReadWrite(0);
  reg = RF230DriverLayerP__FastSpiByte__splitRead();
  RF230DriverLayerP__SELN__set();

  return reg;
}

#line 192
static inline void RF230DriverLayerP__RadioAlarm__fired(void )
{
  if (RF230DriverLayerP__state == RF230DriverLayerP__STATE_SLEEP_2_TRX_OFF) {
    RF230DriverLayerP__state = RF230DriverLayerP__STATE_TRX_OFF;
    }
  else {
#line 196
    if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_CCA) 
      {
        uint8_t cca;

        for (; 0; ) ;

        RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_NONE;
        cca = RF230DriverLayerP__readRegister(RF230_TRX_STATUS);

        for (; 0; ) ;

        RF230DriverLayerP__RadioCCA__done(cca & RF230_CCA_DONE ? cca & RF230_CCA_STATUS ? SUCCESS : EBUSY : FAIL);
      }
    else {
      for (; 0; ) ;
      }
    }
  RF230DriverLayerP__Tasklet__schedule();
}

# 285 "/opt/tinyos-2.x/tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__RadioAlarm__fired(void )
{
}

# 90 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(uint8_t id)
{
}

# 60 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__fired(uint8_t arg_0x2b010a6ca908){
#line 60
  switch (arg_0x2b010a6ca908) {
#line 60
    case 0U:
#line 60
      RF230RadioP__RadioAlarm__fired();
#line 60
      break;
#line 60
    case 1U:
#line 60
      RF230DriverLayerP__RadioAlarm__fired();
#line 60
      break;
#line 60
    default:
#line 60
      /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(arg_0x2b010a6ca908);
#line 60
      break;
#line 60
    }
#line 60
}
#line 60
# 81 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run(void )
{
  if (/*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state == /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_FIRED) 
    {
      /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_READY;
      /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__fired(/*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__alarm);
    }
}

# 261 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run(void )
{
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t RF230DriverLayerP__releaseSpi__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(RF230DriverLayerP__releaseSpi);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 252 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready(void )
{
  if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state == /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_RETRY) 
    {
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING;
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask();
    }
}

# 63 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
inline static void RF230DriverLayerP__RadioSend__ready(void ){
#line 63
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready();
#line 63
}
#line 63
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 163 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done(void )
{
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__postTask();
}

# 69 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioState.nc"
inline static void RF230DriverLayerP__RadioState__done(void ){
#line 69
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done();
#line 69
}
#line 69
# 324 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayerP.nc"
static __inline void RF230DriverLayerP__changeChannel(void )
{
  for (; 0; ) ;
  for (; 0; ) ;

  if (RF230DriverLayerP__isSpiAcquired()) 
    {
      RF230DriverLayerP__writeRegister(RF230_PHY_CC_CCA, RF230_CCA_MODE_VALUE | RF230DriverLayerP__channel);

      if (RF230DriverLayerP__state == RF230DriverLayerP__STATE_RX_ON) {
        RF230DriverLayerP__state = RF230DriverLayerP__STATE_TRX_OFF_2_RX_ON;
        }
      else {
#line 336
        RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_SIGNAL_DONE;
        }
    }
}

# 89 "/opt/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline void HplRF230P__IRQ__disable(void )
{
  HplRF230P__Capture__stop();
}

# 66 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static void RF230DriverLayerP__IRQ__disable(void ){
#line 66
  HplRF230P__IRQ__disable();
#line 66
}
#line 66
# 165 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Capture__start(void )
#line 165
{
#line 165
  * (volatile uint8_t *)0x6F |= 1 << 5;
}

# 67 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplRF230P__Capture__start(void ){
#line 67
  HplAtm1281Timer1P__Capture__start();
#line 67
}
#line 67
# 159 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Capture__reset(void )
#line 159
{
#line 159
  * (volatile uint8_t *)(0x16 + 0x20) = 1 << 5;
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplRF230P__Capture__reset(void ){
#line 64
  HplAtm1281Timer1P__Capture__reset();
#line 64
}
#line 64
# 155 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Capture__setEdge(bool up)
#line 155
{
#line 155
  if (up) {
#line 155
    * (volatile uint8_t *)0x81 |= 1 << 6;
    }
  else {
#line 155
    * (volatile uint8_t *)0x81 &= ~(1 << 6);
    }
}

# 88 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplRF230P__Capture__setEdge(bool up){
#line 88
  HplAtm1281Timer1P__Capture__setEdge(up);
#line 88
}
#line 88
# 74 "/opt/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline error_t HplRF230P__IRQ__captureRisingEdge(void )
{
  HplRF230P__Capture__setEdge(TRUE);
  HplRF230P__Capture__reset();
  HplRF230P__Capture__start();

  return SUCCESS;
}

# 53 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static error_t RF230DriverLayerP__IRQ__captureRisingEdge(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = HplRF230P__IRQ__captureRisingEdge();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 90 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline uint16_t HplAtm1281Timer1P__Timer__get(void )
#line 90
{
#line 90
  return * (volatile uint16_t *)0x84;
}

# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get(void ){
#line 61
  unsigned short __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm1281Timer1P__Timer__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 166 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareA__start(void )
#line 166
{
#line 166
  * (volatile uint8_t *)0x6F |= 1 << 1;
}

# 65 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__start(void ){
#line 65
  HplAtm1281Timer1P__CompareA__start();
#line 65
}
#line 65
# 160 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareA__reset(void )
#line 160
{
#line 160
  * (volatile uint8_t *)(0x16 + 0x20) = 1 << 1;
}

# 62 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__reset(void ){
#line 62
  HplAtm1281Timer1P__CompareA__reset();
#line 62
}
#line 62
# 214 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareA__set(uint16_t t)
#line 214
{
#line 214
  * (volatile uint16_t *)0x88 = t;
}

# 54 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__set(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__size_type t){
#line 54
  HplAtm1281Timer1P__CompareA__set(t);
#line 54
}
#line 54
# 83 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size t0, /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size dt)
#line 83
{






  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size now;
#line 92
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size elapsed;
#line 92
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size expires;

      ;


      now = /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get();
      elapsed = now + 3 - t0;
      if (elapsed >= dt) {
        expires = now + 3;
        }
      else {
#line 102
        expires = t0 + dt;
        }



      if (expires == 0) {
        expires = 1;
        }



      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__set(expires - 1);
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__reset();
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__start();
    }
#line 116
    __nesc_atomic_end(__nesc_atomic); }
}

#line 78
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__start(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size dt)
{
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get(), dt);
}

# 66 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__start(/*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type dt){
#line 66
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__start(dt);
#line 66
}
#line 66
# 99 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(uint8_t id, tradio_size timeout)
{
  for (; 0; ) ;

  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__alarm = id;
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_WAIT;
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__start(timeout);
}

# 50 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void RF230DriverLayerP__RadioAlarm__wait(tradio_size timeout){
#line 50
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(1U, timeout);
#line 50
}
#line 50
# 94 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
static __inline bool /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(uint8_t id)
{
  return /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state == /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_READY;
}

# 45 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static bool RF230DriverLayerP__RadioAlarm__isFree(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(1U);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 342 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayerP.nc"
static __inline void RF230DriverLayerP__changeState(void )
{

  if ((
#line 344
  RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_STANDBY || RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_TURNON)
   && RF230DriverLayerP__state == RF230DriverLayerP__STATE_SLEEP && RF230DriverLayerP__RadioAlarm__isFree()) 
    {
      RF230DriverLayerP__SLP_TR__clr();

      RF230DriverLayerP__RadioAlarm__wait(RF230DriverLayerP__SLEEP_WAKEUP_TIME);
      RF230DriverLayerP__state = RF230DriverLayerP__STATE_SLEEP_2_TRX_OFF;
    }
  else {
#line 352
    if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_TURNON && RF230DriverLayerP__state == RF230DriverLayerP__STATE_TRX_OFF && RF230DriverLayerP__isSpiAcquired()) 
      {
        for (; 0; ) ;

        RF230DriverLayerP__readRegister(RF230_IRQ_STATUS);
        RF230DriverLayerP__IRQ__captureRisingEdge();


        RF230DriverLayerP__writeRegister(RF230_PHY_CC_CCA, RF230_CCA_MODE_VALUE | RF230DriverLayerP__channel);

        RF230DriverLayerP__writeRegister(RF230_TRX_STATE, RF230_RX_ON);
        RF230DriverLayerP__state = RF230DriverLayerP__STATE_TRX_OFF_2_RX_ON;
      }
    else {
#line 378
      if ((
#line 377
      RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_TURNOFF || RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_STANDBY)
       && RF230DriverLayerP__state == RF230DriverLayerP__STATE_RX_ON && RF230DriverLayerP__isSpiAcquired()) 
        {
          RF230DriverLayerP__writeRegister(RF230_TRX_STATE, RF230_FORCE_TRX_OFF);

          RF230DriverLayerP__IRQ__disable();
          RF230DriverLayerP__radioIrq = FALSE;

          RF230DriverLayerP__state = RF230DriverLayerP__STATE_TRX_OFF;
        }
      }
    }
#line 388
  if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_TURNOFF && RF230DriverLayerP__state == RF230DriverLayerP__STATE_TRX_OFF) 
    {
      RF230DriverLayerP__SLP_TR__set();
      RF230DriverLayerP__state = RF230DriverLayerP__STATE_SLEEP;
      RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_SIGNAL_DONE;
    }
  else {
#line 394
    if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_STANDBY && RF230DriverLayerP__state == RF230DriverLayerP__STATE_TRX_OFF) {
      RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_SIGNAL_DONE;
      }
    }
}

# 297 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_leuint8(void * target, uint8_t value)
#line 297
{
  uint8_t *base = target;

#line 299
  base[0] = value;
  return value;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 351 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(message_t *msg)
{
  message_t *m;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize >= /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE) {
        m = msg;
        }
      else {
          uint8_t idx = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead + /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;

#line 362
          if (idx >= /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE) {
            idx -= /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE;
            }
          m = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[idx];
          /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[idx] = msg;

          ++/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;
          /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__postTask();
        }
    }
#line 371
    __nesc_atomic_end(__nesc_atomic); }

  return m;
}

# 53 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t */*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 163 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodP.nc"
static __inline void NeighborhoodP__NeighborhoodFlag__set(uint8_t bit, uint8_t idx)
{
  NeighborhoodP__flags[idx] |= 1 << bit;
}

# 51 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
inline static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__set(uint8_t idx){
#line 51
  NeighborhoodP__NeighborhoodFlag__set(0U, idx);
#line 51
}
#line 51
# 164 "/opt/tinyos-2.x/tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__UniqueConfig__reportChannelError(void )
{
}

# 58 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__reportChannelError(void ){
#line 58
  RF230RadioP__UniqueConfig__reportChannelError();
#line 58
}
#line 58
# 158 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodP.nc"
static __inline bool NeighborhoodP__NeighborhoodFlag__get(uint8_t bit, uint8_t idx)
{
  return NeighborhoodP__flags[idx] & (1 << bit);
}

# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
inline static bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__get(uint8_t idx){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = NeighborhoodP__NeighborhoodFlag__get(0U, idx);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 292 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_leuint8(const void * source)
#line 292
{
  const uint8_t *base = source;

#line 294
  return base[0];
}

# 158 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(message_t *msg)
{
  return __nesc_ntoh_leuint8(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dsn.nxdata);
}

# 120 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint8_t RF230RadioP__Ieee154PacketLayer__getDSN(message_t *msg){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(msg);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 149 "/opt/tinyos-2.x/tos/chips/rf230/RF230RadioP.nc"
static inline uint8_t RF230RadioP__UniqueConfig__getSequenceNumber(message_t *msg)
{
  return RF230RadioP__Ieee154PacketLayer__getDSN(msg);
}

# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static uint8_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSequenceNumber(message_t *msg){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = RF230RadioP__UniqueConfig__getSequenceNumber(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 322 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_leuint16(const void * source)
#line 322
{
  const uint8_t *base = source;

#line 324
  return ((uint16_t )base[1] << 8) | base[0];
}

# 188 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->src.nxdata);
}

# 151 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint16_t RF230RadioP__Ieee154PacketLayer__getSrcAddr(message_t *msg){
#line 151
  unsigned short __nesc_result;
#line 151

#line 151
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(msg);
#line 151

#line 151
  return __nesc_result;
#line 151
}
#line 151
# 159 "/opt/tinyos-2.x/tos/chips/rf230/RF230RadioP.nc"
static inline am_addr_t RF230RadioP__UniqueConfig__getSender(message_t *msg)
{
  return RF230RadioP__Ieee154PacketLayer__getSrcAddr(msg);
}

# 47 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static am_addr_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSender(message_t *msg){
#line 47
  unsigned short __nesc_result;
#line 47

#line 47
  __nesc_result = RF230RadioP__UniqueConfig__getSender(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 116 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(uint8_t idx)
#line 116
{
}

# 80 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Neighborhood.nc"
inline static void NeighborhoodP__Neighborhood__evicted(uint8_t idx){
#line 80
  /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(idx);
#line 80
}
#line 80
# 94 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodP.nc"
static inline uint8_t NeighborhoodP__Neighborhood__insertNode(am_addr_t node)
{
  uint8_t i;
  uint8_t maxAge;

  if (NeighborhoodP__nodes[NeighborhoodP__last] == node) 
    {
      if (NeighborhoodP__ages[NeighborhoodP__last] == NeighborhoodP__time) {
        return NeighborhoodP__last;
        }
      NeighborhoodP__ages[NeighborhoodP__last] = ++NeighborhoodP__time;
      maxAge = 0x80;
    }
  else 
    {
      uint8_t oldest = 0;

#line 110
      maxAge = 0;

      for (i = 0; i < 5; ++i) 
        {
          uint8_t age;

          if (NeighborhoodP__nodes[i] == node) 
            {
              NeighborhoodP__last = i;
              if (NeighborhoodP__ages[i] == NeighborhoodP__time) {
                return i;
                }
              NeighborhoodP__ages[i] = ++NeighborhoodP__time;
              maxAge = 0x80;
              break;
            }

          age = NeighborhoodP__time - NeighborhoodP__ages[i];
          if (age > maxAge) 
            {
              maxAge = age;
              oldest = i;
            }
        }

      if (i == 5) 
        {
          NeighborhoodP__Neighborhood__evicted(oldest);

          NeighborhoodP__last = oldest;
          NeighborhoodP__nodes[oldest] = node;
          NeighborhoodP__ages[oldest] = ++NeighborhoodP__time;
          NeighborhoodP__flags[oldest] = 0;
        }
    }

  if ((NeighborhoodP__time & 0x7F) == 0x7F && maxAge >= 0x7F) 
    {
      for (i = 0; i < 5; ++i) 
        {
          if ((NeighborhoodP__ages[i] | 0x7F) != NeighborhoodP__time) {
            NeighborhoodP__ages[i] = NeighborhoodP__time & 0x80;
            }
        }
    }
  return NeighborhoodP__last;
}

# 71 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Neighborhood.nc"
inline static uint8_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__insertNode(am_addr_t id){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = NeighborhoodP__Neighborhood__insertNode(id);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 93 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline message_t */*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(message_t *msg)
{
  uint8_t idx = /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__insertNode(/*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSender(msg));
  uint8_t dsn = /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSequenceNumber(msg);

  if (/*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__get(idx)) 
    {
      uint8_t diff = dsn - /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[idx];

      if (diff == 0) 
        {
          /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__reportChannelError();
          return msg;
        }
    }
  else {
    /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__set(idx);
    }
  /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[idx] = dsn;

  return /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__receive(msg);
}

# 53 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t *RF230DriverLayerP__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 1022 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__PacketLinkQuality__set(message_t *msg, uint8_t value)
{
  RF230DriverLayerP__getMeta(msg)->lqi = value;
}

# 251 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/util/crc16.h" 3
#line 250
static __inline uint16_t 
_crc_ccitt_update(uint16_t __crc, uint8_t __data)
{
  uint16_t __ret;

   __asm volatile (
  "eor    %A0,%1""\n\t"

  "mov    __tmp_reg__,%A0""\n\t"
  "swap   %A0""\n\t"
  "andi   %A0,0xf0""\n\t"
  "eor    %A0,__tmp_reg__""\n\t"

  "mov    __tmp_reg__,%B0""\n\t"

  "mov    %B0,%A0""\n\t"

  "swap   %A0""\n\t"
  "andi   %A0,0x0f""\n\t"
  "eor    __tmp_reg__,%A0""\n\t"

  "lsr    %A0""\n\t"
  "eor    %B0,%A0""\n\t"

  "eor    %A0,%B0""\n\t"
  "lsl    %A0""\n\t"
  "lsl    %A0""\n\t"
  "lsl    %A0""\n\t"
  "eor    %A0,__tmp_reg__" : 

  "=d"(__ret) : 
  "r"(__data), "0"(__crc) : 
  "r0");

  return __ret;
}

# 82 "/opt/tinyos-2.x/tos/platforms/iris/chips/rf230/RadioConfig.h"
static __inline uint16_t RF230_CRCBYTE_COMMAND(uint16_t crc, uint8_t data)
{
  return _crc_ccitt_update(crc, data);
}

# 312 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline bool /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(message_t *msg)
{
  bool notFull;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 317
    notFull = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize < /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE;
#line 317
    __nesc_atomic_end(__nesc_atomic); }

  return notFull;
}

# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 85 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(message_t *msg)
{

  return /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__header(msg);
}

# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool RF230DriverLayerP__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 32 "../../chips/rf230/RF230SlimRadioP.nc"
static inline uint8_t RF230SlimRadioP__RF230DriverConfig__headerPreloadLength(void )
#line 32
{

  return 7;
}

# 59 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverConfig.nc"
inline static uint8_t RF230DriverLayerP__Config__headerPreloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = RF230SlimRadioP__RF230DriverConfig__headerPreloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 20 "../../chips/rf230/RF230SlimRadioP.nc"
static inline uint8_t RF230SlimRadioP__RF230DriverConfig__headerLength(message_t *msg)
#line 20
{
  return (unsigned short )& ((message_t *)0)->data - sizeof(rf230packet_header_t );
}

# 40 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverConfig.nc"
inline static uint8_t RF230DriverLayerP__Config__headerLength(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = RF230SlimRadioP__RF230DriverConfig__headerLength(msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 96 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayerP.nc"
static inline rf230_header_t *RF230DriverLayerP__getHeader(message_t *msg)
{
  return (void *)msg + RF230DriverLayerP__Config__headerLength(msg);
}

# 214 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static __inline uint8_t Atm128SpiP__FastSpiByte__write(uint8_t data)
#line 214
{
  Atm128SpiP__Spi__write(data);

  while (!Atm128SpiP__Spi__isInterruptPending()) 
    ;

  return Atm128SpiP__Spi__read();
}

# 81 "/opt/tinyos-2.x/tos/interfaces/FastSpiByte.nc"
inline static uint8_t RF230DriverLayerP__FastSpiByte__write(uint8_t data){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = Atm128SpiP__FastSpiByte__write(data);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 617 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayerP.nc"
static __inline void RF230DriverLayerP__downloadMessage(void )
{
  uint8_t length;
  uint16_t crc;

  RF230DriverLayerP__SELN__clr();
  RF230DriverLayerP__FastSpiByte__write(RF230_CMD_FRAME_READ);


  length = RF230DriverLayerP__FastSpiByte__write(0);


  if (length >= 3 && length <= RF230DriverLayerP__RadioPacket__maxPayloadLength() + 2) 
    {
      uint8_t read;
      uint8_t *data;


      RF230DriverLayerP__FastSpiByte__splitWrite(0);

      data = RF230DriverLayerP__getPayload(RF230DriverLayerP__rxMsg);
      __nesc_hton_leuint8(RF230DriverLayerP__getHeader(RF230DriverLayerP__rxMsg)->length.nxdata, length);
      crc = 0;


      length -= 2;

      read = RF230DriverLayerP__Config__headerPreloadLength();
      if (length < read) {
        read = length;
        }
      length -= read;

      do {
          crc = RF230_CRCBYTE_COMMAND(crc, * data++ = RF230DriverLayerP__FastSpiByte__splitReadWrite(0));
        }
      while (--read != 0);

      if (RF230DriverLayerP__RadioReceive__header(RF230DriverLayerP__rxMsg)) 
        {
          while (length-- != 0) 
            crc = RF230_CRCBYTE_COMMAND(crc, * data++ = RF230DriverLayerP__FastSpiByte__splitReadWrite(0));

          crc = RF230_CRCBYTE_COMMAND(crc, RF230DriverLayerP__FastSpiByte__splitReadWrite(0));
          crc = RF230_CRCBYTE_COMMAND(crc, RF230DriverLayerP__FastSpiByte__splitReadWrite(0));

          RF230DriverLayerP__PacketLinkQuality__set(RF230DriverLayerP__rxMsg, RF230DriverLayerP__FastSpiByte__splitRead());
        }
      else 
        {
          RF230DriverLayerP__FastSpiByte__splitRead();
          crc = 1;
        }
    }
  else {
    crc = 1;
    }
  RF230DriverLayerP__SELN__set();
  RF230DriverLayerP__state = RF230DriverLayerP__STATE_RX_ON;
#line 693
  RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_NONE;


  if (crc == 0) {
    RF230DriverLayerP__rxMsg = RF230DriverLayerP__RadioReceive__receive(RF230DriverLayerP__rxMsg);
    }
}

# 217 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error_t error)
{
  for (; 0; ) ;

  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError = error;
  if (error == SUCCESS) {
    /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_DONE;
    }
  else {
#line 225
    /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING;
    }
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask();
}

# 56 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
inline static void RF230DriverLayerP__RadioSend__sendDone(error_t error){
#line 56
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error);
#line 56
}
#line 56
# 55 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__clear(message_t *msg){
#line 55
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(0U, msg);
#line 55
}
#line 55
# 77 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(message_t *msg)
{
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__clear(msg);
}

# 70 "/opt/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static void RF230DriverLayerP__PacketTimeStamp__clear(message_t * msg){
#line 70
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(msg);
#line 70
}
#line 70
# 136 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(message_t *msg)
{
  return /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__metadataLength(msg) + sizeof(timestamp_metadata_t );
}

#line 60
static inline timestamp_metadata_t */*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(msg);
}

# 50 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__set(message_t *msg){
#line 50
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(0U, msg);
#line 50
}
#line 50
# 82 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(message_t *msg, uint32_t value)
{
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__set(msg);
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__getMeta(msg)->timestamp = value;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static void RF230DriverLayerP__PacketTimeStamp__set(message_t * msg, RF230DriverLayerP__PacketTimeStamp__size_type value){
#line 78
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(msg, value);
#line 78
}
#line 78
# 61 "/opt/tinyos-2.x/tos/lib/timer/LocalTime.nc"
inline static uint32_t RF230DriverLayerP__LocalTime__get(void ){
#line 61
  unsigned long __nesc_result;
#line 61

#line 61
  __nesc_result = /*LocalTimeSyncedMicroC.CounterToLocalMicroC*/CounterToLocalMicroC__0__LocalTime__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 55 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void RF230DriverLayerP__RSSIFlag__clear(message_t *msg){
#line 55
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(2U, msg);
#line 55
}
#line 55
# 967 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__PacketRSSI__clear(message_t *msg)
{
  RF230DriverLayerP__RSSIFlag__clear(msg);
}

# 50 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void RF230DriverLayerP__RSSIFlag__set(message_t *msg){
#line 50
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(2U, msg);
#line 50
}
#line 50





inline static void RF230DriverLayerP__TransmitPowerFlag__clear(message_t *msg){
#line 55
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(1U, msg);
#line 55
}
#line 55
# 972 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__PacketRSSI__set(message_t *msg, uint8_t value)
{

  RF230DriverLayerP__TransmitPowerFlag__clear(msg);

  RF230DriverLayerP__RSSIFlag__set(msg);
  RF230DriverLayerP__getMeta(msg)->rssi = value;
}

#line 715
static inline void RF230DriverLayerP__serviceRadio(void )
{
  if (RF230DriverLayerP__state != RF230DriverLayerP__STATE_SLEEP && RF230DriverLayerP__isSpiAcquired()) 
    {
      uint16_t time;
      uint32_t time32;
      uint8_t irq;
      uint8_t temp;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 724
        time = RF230DriverLayerP__capturedTime;
#line 724
        __nesc_atomic_end(__nesc_atomic); }
      RF230DriverLayerP__radioIrq = FALSE;
      irq = RF230DriverLayerP__readRegister(RF230_IRQ_STATUS);
#line 758
      if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_TURNON || RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_CHANNEL) 
        {
          for (; 0; ) ;
          for (; 0; ) ;

          RF230DriverLayerP__state = RF230DriverLayerP__STATE_RX_ON;
          RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_SIGNAL_DONE;
        }
      else {
#line 766
        if (irq & RF230_IRQ_PLL_LOCK) 
          {
            for (; 0; ) ;
            for (; 0; ) ;
          }
        }
      if (irq & RF230_IRQ_RX_START) 
        {
          if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_CCA) 
            {
              RF230DriverLayerP__RadioCCA__done(FAIL);
              RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_NONE;
            }

          if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_NONE) 
            {
              for (; 0; ) ;


              if (irq == RF230_IRQ_RX_START) 
                {
                  temp = RF230DriverLayerP__readRegister(RF230_PHY_RSSI) & RF230_RSSI_MASK;
                  RF230DriverLayerP__rssiBusy += temp - (RF230DriverLayerP__rssiBusy >> 2);

                  RF230DriverLayerP__PacketRSSI__set(RF230DriverLayerP__rxMsg, temp);
                }
              else 
                {
                  RF230DriverLayerP__PacketRSSI__clear(RF230DriverLayerP__rxMsg);
                }










              if (irq == RF230_IRQ_RX_START) 
                {
                  time32 = RF230DriverLayerP__LocalTime__get();
                  time32 += (int16_t )(time - RF230DriverLayerP__RX_SFD_DELAY) - (int16_t )time32;
                  RF230DriverLayerP__PacketTimeStamp__set(RF230DriverLayerP__rxMsg, time32);
                }
              else {
                RF230DriverLayerP__PacketTimeStamp__clear(RF230DriverLayerP__rxMsg);
                }
              RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_RECEIVE;
            }
          else {
            for (; 0; ) ;
            }
        }
      if (irq & RF230_IRQ_TRX_END) 
        {
          if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_TRANSMIT) 
            {
              for (; 0; ) ;

              RF230DriverLayerP__state = RF230DriverLayerP__STATE_RX_ON;
              RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_NONE;
              RF230DriverLayerP__RadioSend__sendDone(SUCCESS);


              for (; 0; ) ;
            }
          else {
#line 834
            if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_RECEIVE) 
              {
                for (; 0; ) ;


                RF230DriverLayerP__rssiClear += (RF230DriverLayerP__readRegister(RF230_PHY_RSSI) & RF230_RSSI_MASK) - (RF230DriverLayerP__rssiClear >> 2);

                RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_DOWNLOAD;
              }
            else {
              for (; 0; ) ;
              }
            }
        }
    }
}

#line 866
static inline void RF230DriverLayerP__Tasklet__run(void )
{
  if (RF230DriverLayerP__radioIrq) {
    RF230DriverLayerP__serviceRadio();
    }
  if (RF230DriverLayerP__cmd != RF230DriverLayerP__CMD_NONE) 
    {
      if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_DOWNLOAD) {
        RF230DriverLayerP__downloadMessage();
        }
      else {
#line 875
        if (RF230DriverLayerP__CMD_TURNOFF <= RF230DriverLayerP__cmd && RF230DriverLayerP__cmd <= RF230DriverLayerP__CMD_TURNON) {
          RF230DriverLayerP__changeState();
          }
        else {
#line 877
          if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_CHANNEL) {
            RF230DriverLayerP__changeChannel();
            }
          }
        }
#line 880
      if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_SIGNAL_DONE) 
        {
          RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_NONE;
          RF230DriverLayerP__RadioState__done();
        }
    }

  if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_NONE && RF230DriverLayerP__state == RF230DriverLayerP__STATE_RX_ON && !RF230DriverLayerP__radioIrq) {
    RF230DriverLayerP__RadioSend__ready();
    }
  if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_NONE) {
    RF230DriverLayerP__releaseSpi__postTask();
    }
}

# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
inline static void TaskletC__Tasklet__run(void ){
#line 48
  RF230DriverLayerP__Tasklet__run();
#line 48
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run();
#line 48
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run();
#line 48
}
#line 48
# 142 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__isOwner(uint8_t id)
#line 142
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 143
    {
      if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId == id && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_BUSY) {
          unsigned char __nesc_temp = 
#line 144
          TRUE;

          {
#line 144
            __nesc_atomic_end(__nesc_atomic); 
#line 144
            return __nesc_temp;
          }
        }
      else 
#line 145
        {
          unsigned char __nesc_temp = 
#line 145
          FALSE;

          {
#line 145
            __nesc_atomic_end(__nesc_atomic); 
#line 145
            return __nesc_temp;
          }
        }
    }
#line 148
    __nesc_atomic_end(__nesc_atomic); }
}

# 128 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static bool RF230DriverLayerP__SpiResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__isOwner(0U);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 162 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__immediateRequested(uint8_t id)
#line 162
{
}

# 61 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__immediateRequested(uint8_t arg_0x2b010a7fd1a0){
#line 61
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__immediateRequested(arg_0x2b010a7fd1a0);
#line 61
}
#line 61
# 83 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__immediateRequest(uint8_t id)
#line 83
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__immediateRequested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 85
    {
      if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_IDLE) {
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_BUSY;
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId = id;
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId);
          {
            unsigned char __nesc_temp = 
#line 90
            SUCCESS;

            {
#line 90
              __nesc_atomic_end(__nesc_atomic); 
#line 90
              return __nesc_temp;
            }
          }
        }
#line 92
      {
        unsigned char __nesc_temp = 
#line 92
        FAIL;

        {
#line 92
          __nesc_atomic_end(__nesc_atomic); 
#line 92
          return __nesc_temp;
        }
      }
    }
#line 95
    __nesc_atomic_end(__nesc_atomic); }
}

# 97 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t RF230DriverLayerP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__immediateRequest(0U);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 160 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__requested(uint8_t id)
#line 160
{
}

# 53 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__requested(uint8_t arg_0x2b010a7fd1a0){
#line 53
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__requested(arg_0x2b010a7fd1a0);
#line 53
}
#line 53
# 64 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[id] != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY || /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(id)) {
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead = id;
          }
        else {
#line 88
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail] = id;
          }
#line 89
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail = id;
        {
          unsigned char __nesc_temp = 
#line 90
          SUCCESS;

#line 90
          return __nesc_temp;
        }
      }
#line 92
    {
      unsigned char __nesc_temp = 
#line 92
      EBUSY;

#line 92
      return __nesc_temp;
    }
  }
}

# 79 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*LocalTimeSyncedMicroC.CounterToLocalMicroC*/CounterToLocalMicroC__0__Counter__size_type /*LocalTimeSyncedMicroC.CounterToLocalMicroC*/CounterToLocalMicroC__0__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get(void ){
#line 61
  unsigned short __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm1281Timer1P__Timer__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 50 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void )
{
  return /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get();
}

# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__CounterFrom__size_type /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__CounterFrom__get(void ){
#line 64
  unsigned short __nesc_result;
#line 64

#line 64
  __nesc_result = /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 145 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline uint8_t HplAtm1281Timer1P__TimerCtrl__getInterruptFlag(void )
#line 145
{
  return * (volatile uint8_t *)(0x16 + 0x20);
}

#line 176
static inline bool HplAtm1281Timer1P__Timer__test(void )
#line 176
{
  return ((Atm128_TIFR_t )HplAtm1281Timer1P__TimerCtrl__getInterruptFlag()).bits.tov;
}

# 87 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test(void ){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = HplAtm1281Timer1P__Timer__test();
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 55 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void )
{
  return /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test();
}

# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static bool /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__CounterFrom__isOverflowPending(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 349 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline 
#line 348
void Atm128SpiP__SpiPacket__default__sendDone(
uint8_t *_txbuffer, uint8_t *_rxbuffer, 
uint16_t _length, error_t _success)
#line 350
{
}

# 82 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
inline static void Atm128SpiP__SpiPacket__sendDone(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len, error_t error){
#line 82
  Atm128SpiP__SpiPacket__default__sendDone(txBuf, rxBuf, len, error);
#line 82
}
#line 82
# 294 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__zeroTask__runTask(void )
#line 294
{
  uint16_t myLen;
  uint8_t * rx;
  uint8_t * tx;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 299
    {
      myLen = Atm128SpiP__len;
      rx = Atm128SpiP__rxBuffer;
      tx = Atm128SpiP__txBuffer;
      Atm128SpiP__rxBuffer = (void *)0;
      Atm128SpiP__txBuffer = (void *)0;
      Atm128SpiP__len = 0;
      Atm128SpiP__pos = 0;
      Atm128SpiP__SpiPacket__sendDone(tx, rx, myLen, SUCCESS);
    }
#line 308
    __nesc_atomic_end(__nesc_atomic); }
}

# 861 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__releaseSpi__runTask(void )
{
  RF230DriverLayerP__SpiResource__release();
}

# 176 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone(void )
{
}

# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioChannel.nc"
inline static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannelDone(void ){
#line 48
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone();
#line 48
}
#line 48
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t OrinocoRadioP__transition__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(OrinocoRadioP__transition);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 79 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP__Leds__led0Off(void )
#line 79
{
  LedsP__Led0__set();
  ;
#line 81
  ;
}

# 61 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void OrinocoRadioP__Leds__led0Off(void ){
#line 61
  LedsP__Leds__led0Off();
#line 61
}
#line 61
# 393 "../../lib/net/orinoco/OrinocoRadioP.nc"
static inline void OrinocoRadioP__SubControl__stopDone(error_t error)
#line 393
{
  for (; 0; ) ;
  for (; 0; ) ;

  if (error == SUCCESS) {
      OrinocoRadioP__Leds__led0Off();
      OrinocoRadioP__state_++;
    }
  else 
#line 400
    {
      OrinocoRadioP__state_--;
    }

  OrinocoRadioP__transition__postTask();
}

# 138 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stopDone(error_t error){
#line 138
  OrinocoRadioP__SubControl__stopDone(error);
#line 138
}
#line 138
# 56 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )34U &= ~(1 << 2);
}

# 41 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr();
#line 41
}
#line 41
# 74 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP__Leds__led0On(void )
#line 74
{
  LedsP__Led0__clr();
  ;
#line 76
  ;
}

# 56 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void OrinocoRadioP__Leds__led0On(void ){
#line 56
  LedsP__Leds__led0On();
#line 56
}
#line 56
# 378 "../../lib/net/orinoco/OrinocoRadioP.nc"
static inline void OrinocoRadioP__SubControl__startDone(error_t error)
#line 378
{
  for (; 0; ) ;
  for (; 0; ) ;

  if (error == SUCCESS) {
      OrinocoRadioP__Leds__led0On();
      OrinocoRadioP__state_++;
    }
  else 
#line 385
    {
      OrinocoRadioP__state_--;
    }

  OrinocoRadioP__transition__postTask();
}

# 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__startDone(error_t error){
#line 113
  OrinocoRadioP__SubControl__startDone(error);
#line 113
}
#line 113
# 144 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask(void )
{
  uint8_t s;

  s = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state;


  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY;

  if (s == /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_ON) {
    /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__startDone(SUCCESS);
    }
  else {
#line 155
    if (s == /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_OFF) {
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stopDone(SUCCESS);
      }
    else {
#line 157
      if (s == /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_CHANNEL) {
        /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannelDone();
        }
      else {
#line 160
        /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = s;
        }
      }
    }
}

# 132 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(message_t *msg, error_t error)
{
}

# 97 "/opt/tinyos-2.x/tos/interfaces/Ieee154Send.nc"
inline static void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error){
#line 97
  /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(msg, error);
#line 97
}
#line 97
# 127 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(message_t *msg, error_t error)
{
  /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__sendDone(msg, error);
}

# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error){
#line 54
  /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 199 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_id_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(message_t *msg)
{
  return __nesc_ntoh_uint8(/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(msg)->type.nxdata);
}

# 86 "../../lib/net/orinoco/OrinocoForwardLayerP.nc"
static inline void OrinocoForwardLayerP__SubAMSend__sendDone(message_t *msg, error_t error)
#line 86
{
  for (; 0; ) ;

  OrinocoForwardLayerP__state_ = OrinocoForwardLayerP__STATE_READY;
  OrinocoForwardLayerP__AMSend__sendDone(OrinocoForwardLayerP__txBuf_, error);
}

# 178 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dest.nxdata);
}

# 141 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint16_t RF230RadioP__Ieee154PacketLayer__getDestAddr(message_t *msg){
#line 141
  unsigned short __nesc_result;
#line 141

#line 141
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg);
#line 141

#line 141
  return __nesc_result;
#line 141
}
#line 141
# 173 "/opt/tinyos-2.x/tos/chips/rf230/RF230RadioP.nc"
static inline am_addr_t RF230RadioP__ActiveMessageConfig__destination(message_t *msg)
{
  return RF230RadioP__Ieee154PacketLayer__getDestAddr(msg);
}

# 40 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__destination(message_t *msg){
#line 40
  unsigned short __nesc_result;
#line 40

#line 40
  __nesc_result = RF230RadioP__ActiveMessageConfig__destination(msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 179 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(message_t *msg)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__destination(msg);
}

# 78 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t OrinocoRadioP__SubAMPacket__destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 603 "../../lib/net/orinoco/OrinocoRadioP.nc"
static inline void OrinocoRadioP__BeaconSubSend__sendDone(message_t *msg, error_t error)
#line 603
{
  for (; 0; ) ;
  for (; 0; ) ;


  if (error == SUCCESS) {
      if (OrinocoRadioP__SubAMPacket__destination(msg) != AM_BROADCAST_ADDR) {
          OrinocoRadioP__ps_.numTxAckBeacons++;
        }
      OrinocoRadioP__ps_.numTxBeacons++;
    }
  else 
#line 613
    {
      OrinocoRadioP__ps_.numTxBeaconsFail++;
    }


  if (error == SUCCESS) {

      OrinocoRadioP__state_++;
    }
  else 
#line 621
    {
      OrinocoRadioP__state_ = OrinocoRadioP__SLEEP_SUBSTOP;
    }

  OrinocoRadioP__transition__postTask();
}

# 108 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__default__sendDone(am_id_t id, message_t *msg, error_t error)
{
}

# 110 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__sendDone(am_id_t arg_0x2b010a703cc8, message_t * msg, error_t error){
#line 110
  switch (arg_0x2b010a703cc8) {
#line 110
    case ORINOCO_AM_BEACON:
#line 110
      OrinocoRadioP__BeaconSubSend__sendDone(msg, error);
#line 110
      break;
#line 110
    case ORINOCO_AM_DATA:
#line 110
      OrinocoForwardLayerP__SubAMSend__sendDone(msg, error);
#line 110
      break;
#line 110
    default:
#line 110
      /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__default__sendDone(arg_0x2b010a703cc8, msg, error);
#line 110
      break;
#line 110
    }
#line 110
}
#line 110
# 98 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(message_t *msg, error_t error)
{
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__sendDone(/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(msg), msg, error);
}

# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(message_t *msg, error_t error){
#line 54
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 120 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(0U);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 78 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
static inline void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(message_t *msg, error_t result)
{
  /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release();
  /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(msg, result);
}

# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__sendDone(message_t *msg, error_t error){
#line 54
  /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 214 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(message_t *msg, error_t result)
{
  if (__nesc_ntoh_leuint8(/*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(msg)->network.nxdata) == 0x3f) {
    /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__sendDone(msg, result);
    }
  else {
#line 219
    /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__sendDone(msg, result);
    }
}

# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__sendDone(message_t *msg, error_t error){
#line 54
  /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 80 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(message_t *msg, error_t error)
{
  /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__sendDone(msg, error);
}

# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__sendDone(message_t *msg, error_t error){
#line 54
  /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 79 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume(void ){
#line 79
  TaskletC__Tasklet__resume();
#line 79
}
#line 79
# 372 "/usr/lib/ncc/nesc_nx.h"
static __inline  int32_t __nesc_hton_int32(void * target, int32_t value)
#line 372
{
#line 372
  __nesc_hton_uint32(target, value);
#line 372
  return value;
}

#line 340
static __inline  uint32_t __nesc_ntoh_uint32(const void * source)
#line 340
{
  const uint8_t *base = source;

#line 342
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

# 62 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__getNow(void )
#line 62
{
  return /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get();
}

# 109 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__getNow(void ){
#line 109
  unsigned short __nesc_result;
#line 109

#line 109
  __nesc_result = /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 76 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
static __inline tradio_size /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(uint8_t id)
{
  return /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__getNow();
}

# 65 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static tradio_size RF230DriverLayerP__RadioAlarm__getNow(void ){
#line 65
  unsigned short __nesc_result;
#line 65

#line 65
  __nesc_result = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(1U);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 896 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayerP.nc"
static inline uint8_t RF230DriverLayerP__RadioPacket__headerLength(message_t *msg)
{
  return RF230DriverLayerP__Config__headerLength(msg) + sizeof(rf230_header_t );
}

#line 988
static inline uint8_t RF230DriverLayerP__PacketTimeSyncOffset__get(message_t *msg)
{
  return RF230DriverLayerP__RadioPacket__headerLength(msg) + RF230DriverLayerP__RadioPacket__payloadLength(msg) - sizeof(timesync_absolute_t );
}

# 40 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
inline static bool RF230DriverLayerP__TimeSyncFlag__get(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(3U, msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 983 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayerP.nc"
static inline bool RF230DriverLayerP__PacketTimeSyncOffset__isSet(message_t *msg)
{
  return RF230DriverLayerP__TimeSyncFlag__get(msg);
}

# 37 "../../chips/rf230/RF230SlimRadioP.nc"
static inline bool RF230SlimRadioP__RF230DriverConfig__requiresRssiCca(message_t *msg)
#line 37
{


  return FALSE;
}

# 65 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverConfig.nc"
inline static bool RF230DriverLayerP__Config__requiresRssiCca(message_t *msg){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = RF230SlimRadioP__RF230DriverConfig__requiresRssiCca(msg);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 939 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayerP.nc"
static inline uint8_t RF230DriverLayerP__PacketTransmitPower__get(message_t *msg)
{
  return RF230DriverLayerP__getMeta(msg)->power;
}

# 40 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
inline static bool RF230DriverLayerP__TransmitPowerFlag__get(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(1U, msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 934 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayerP.nc"
static inline bool RF230DriverLayerP__PacketTransmitPower__isSet(message_t *msg)
{
  return RF230DriverLayerP__TransmitPowerFlag__get(msg);
}

#line 441
static inline error_t RF230DriverLayerP__RadioSend__send(message_t *msg)
{
  uint16_t time;
  uint32_t time32;
  uint8_t *data;
  uint8_t length;
  uint8_t upload1;
  uint8_t upload2;

  if (((RF230DriverLayerP__cmd != RF230DriverLayerP__CMD_NONE || RF230DriverLayerP__state != RF230DriverLayerP__STATE_RX_ON) || RF230DriverLayerP__radioIrq) || !RF230DriverLayerP__isSpiAcquired()) {
    return EBUSY;
    }
  length = (RF230DriverLayerP__PacketTransmitPower__isSet(msg) ? 
  RF230DriverLayerP__PacketTransmitPower__get(msg) : 0) & RF230_TX_PWR_MASK;

  if (length != RF230DriverLayerP__txPower) 
    {
      RF230DriverLayerP__txPower = length;
      RF230DriverLayerP__writeRegister(RF230_PHY_TX_PWR, RF230_TX_AUTO_CRC_ON | RF230DriverLayerP__txPower);
    }


  if (
#line 462
  RF230DriverLayerP__Config__requiresRssiCca(msg)
   && (RF230DriverLayerP__readRegister(RF230_PHY_RSSI) & RF230_RSSI_MASK) > ((RF230DriverLayerP__rssiClear + RF230DriverLayerP__rssiBusy) >> 3)) 
    {
      RF230DriverLayerP__SpiResource__release();
      return EBUSY;
    }

  RF230DriverLayerP__writeRegister(RF230_TRX_STATE, RF230_PLL_ON);


  time32 = RF230DriverLayerP__LocalTime__get();
  data = RF230DriverLayerP__getPayload(msg);
  length = __nesc_ntoh_leuint8(RF230DriverLayerP__getHeader(msg)->length.nxdata);

  if (RF230DriverLayerP__PacketTimeSyncOffset__isSet(msg)) 
    {

      upload1 = (void *)msg - (void *)data + RF230DriverLayerP__PacketTimeSyncOffset__get(msg);


      upload2 = length - 2 - upload1;


      for (; 0; ) ;
    }
  else 
    {
      upload1 = length - 2;
      upload2 = 0;
    }
  for (; 0; ) ;


  if ((RF230DriverLayerP__readRegister(RF230_TRX_STATUS) & RF230_TRX_STATUS_MASK) != RF230_PLL_ON) 
    {
      for (; 0; ) ;

      RF230DriverLayerP__writeRegister(RF230_TRX_STATE, RF230_RX_ON);
      RF230DriverLayerP__SpiResource__release();
      return EBUSY;
    }


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      RF230DriverLayerP__SLP_TR__set();
      time = RF230DriverLayerP__RadioAlarm__getNow();
    }
#line 509
    __nesc_atomic_end(__nesc_atomic); }
  RF230DriverLayerP__SLP_TR__clr();


  for (; 0; ) ;

  RF230DriverLayerP__SELN__clr();
  RF230DriverLayerP__FastSpiByte__splitWrite(RF230_CMD_FRAME_WRITE);


  RF230DriverLayerP__FastSpiByte__splitReadWrite(length);

  do {
      RF230DriverLayerP__FastSpiByte__splitReadWrite(* data++);
    }
  while (--upload1 != 0);










  time32 += (int16_t )(time + RF230DriverLayerP__TX_SFD_DELAY) - (int16_t )time32;

  if (upload2 != 0) 
    {
      uint32_t absolute = __nesc_ntoh_uint32((* (timesync_absolute_t *)data).nxdata);

#line 540
      __nesc_hton_int32((* (timesync_relative_t *)data).nxdata, absolute - time32);


      for (; 0; ) ;
      do {
          RF230DriverLayerP__FastSpiByte__splitReadWrite(data[upload1]);
        }
      while (++upload1 != upload2);

      __nesc_hton_uint32((* (timesync_absolute_t *)data).nxdata, absolute);
    }


  RF230DriverLayerP__FastSpiByte__splitRead();
  RF230DriverLayerP__SELN__set();
#line 569
  RF230DriverLayerP__writeRegister(RF230_TRX_STATE, RF230_RX_ON);

  RF230DriverLayerP__PacketTimeStamp__set(msg, time32);
#line 586
  RF230DriverLayerP__state = RF230DriverLayerP__STATE_BUSY_TX_2_RX_ON;
  RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_TRANSMIT;

  return SUCCESS;
}

# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
inline static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__send(message_t *msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = RF230DriverLayerP__RadioSend__send(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 94 "/opt/tinyos-2.x/tos/lib/rfxlink/util/TaskletC.nc"
static __inline void TaskletC__Tasklet__suspend(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 96
    ++TaskletC__state;
#line 96
    __nesc_atomic_end(__nesc_atomic); }
}

# 72 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend(void ){
#line 72
  TaskletC__Tasklet__suspend();
#line 72
}
#line 72
# 189 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask(void )
{
  bool done = FALSE;

  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  for (; 0; ) ;

  if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state == /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING && ++/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries <= /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__MAX_RETRIES) 
    {
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__send(/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg);
      if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError == SUCCESS) {
        /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_SEND;
        }
      else {
#line 203
        /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_RETRY;
        }
    }
  else {
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY;
      done = TRUE;
    }

  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  if (done) {
    /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__sendDone(/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg, /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError);
    }
}

# 60 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead == /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static bool /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 68 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead != /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
        uint8_t id = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead;

#line 72
        /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[/*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead];
        if (/*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead == /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
          }
#line 75
        /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[id] = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 166 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 166
{
}

# 65 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x2b010a7fc6e0){
#line 65
    /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x2b010a7fc6e0);
#line 65
}
#line 65
# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = RF230DriverLayerP__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 95 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__payloadLength(msg);
}

# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 121 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__payloadLength(msg);
}

# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 287 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__payloadLength(msg) - sizeof(ieee154_simple_header_t );
}

# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 96 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(message_t *msg)
{
  return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(msg);
}

# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 68 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(message_t *msg)
{
  return /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__payloadLength(msg);
}

# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = RF230DriverLayerP__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 90 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__headerLength(msg);
}

# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 116 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__headerLength(msg);
}

# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 282 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(msg) + sizeof(ieee154_simple_header_t );
}

# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 91 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(message_t *msg)
{
  return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(msg);
}

# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 56 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__getPayload(message_t *msg)
{
  return (void *)msg + /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__headerLength(msg);
}

#line 151
static inline message_t */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 55 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static am_group_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amGroup(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amGroup();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 217 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline ieee154_panid_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan(void )
{
  return /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amGroup();
}

#line 168
static inline uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->destpan.nxdata);
}

# 72 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void )
#line 72
{
  return ActiveMessageAddressC__amAddress();
}

# 50 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 212 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline ieee154_saddr_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr(void )
{
  return /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress();
}






static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(message_t *msg)
{
  ieee154_saddr_t addr = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg);

#line 225
  return (addr == /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr() || addr == IEEE154_BROADCAST_ADDR)
   && /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(msg) == /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan();
}

# 185 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__isForMe(message_t *msg){
#line 185
  unsigned char __nesc_result;
#line 185

#line 185
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(msg);
#line 185

#line 185
  return __nesc_result;
#line 185
}
#line 185
# 142 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline message_t */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(message_t *msg)
{
  if (/*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__isForMe(msg)) {
    return /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__receive(msg, 
    /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__getPayload(msg), /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(msg));
    }
  else {
#line 148
    return msg;
    }
}

# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Receive__receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 156 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__receive(am_id_t arg_0x2b010a72cdb0, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__default__receive(arg_0x2b010a72cdb0, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 151 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__receive(id, msg, payload, len);
#line 153
  ;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__receive(am_id_t arg_0x2b010a7009c0, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x2b010a7009c0) {
#line 78
    case ORINOCO_AM_BEACON:
#line 78
      __nesc_result = OrinocoRadioP__BeaconSubReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(arg_0x2b010a7009c0, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 146 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__receive(am_id_t arg_0x2b010a72c220, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__default__receive(arg_0x2b010a72c220, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 310 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

#line 372
static __inline  int32_t __nesc_ntoh_int32(const void * source)
#line 372
{
#line 372
  return __nesc_ntoh_uint32(source);
}

# 88 "/opt/tinyos-2.x/tos/system/PoolP.nc"
static inline /*OrinocoP.MsgPool.PoolP*/PoolP__0__pool_t */*OrinocoP.MsgPool.PoolP*/PoolP__0__Pool__get(void )
#line 88
{
  if (/*OrinocoP.MsgPool.PoolP*/PoolP__0__free) {
      /*OrinocoP.MsgPool.PoolP*/PoolP__0__pool_t *rval = /*OrinocoP.MsgPool.PoolP*/PoolP__0__queue[/*OrinocoP.MsgPool.PoolP*/PoolP__0__index];

#line 91
      /*OrinocoP.MsgPool.PoolP*/PoolP__0__queue[/*OrinocoP.MsgPool.PoolP*/PoolP__0__index] = (void *)0;
      /*OrinocoP.MsgPool.PoolP*/PoolP__0__free--;
      /*OrinocoP.MsgPool.PoolP*/PoolP__0__index++;
      if (/*OrinocoP.MsgPool.PoolP*/PoolP__0__index == 1) {
          /*OrinocoP.MsgPool.PoolP*/PoolP__0__index = 0;
        }
      ;
      return rval;
    }
  return (void *)0;
}

# 97 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
inline static OrinocoQueueP__MsgPool__t * OrinocoQueueP__MsgPool__get(void ){
#line 97
  nx_struct message_t *__nesc_result;
#line 97

#line 97
  __nesc_result = /*OrinocoP.MsgPool.PoolP*/PoolP__0__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t OrinocoQueueP__sendTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(OrinocoQueueP__sendTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 69 "/opt/tinyos-2.x/tos/system/QueueC.nc"
static inline void /*OrinocoP.SendQueue*/QueueC__0__printQueue(void )
#line 69
{
}

#line 61
static inline uint8_t /*OrinocoP.SendQueue*/QueueC__0__Queue__maxSize(void )
#line 61
{
  return 1;
}

#line 57
static inline uint8_t /*OrinocoP.SendQueue*/QueueC__0__Queue__size(void )
#line 57
{
  return /*OrinocoP.SendQueue*/QueueC__0__size;
}

#line 97
static inline error_t /*OrinocoP.SendQueue*/QueueC__0__Queue__enqueue(/*OrinocoP.SendQueue*/QueueC__0__queue_t newVal)
#line 97
{
  if (/*OrinocoP.SendQueue*/QueueC__0__Queue__size() < /*OrinocoP.SendQueue*/QueueC__0__Queue__maxSize()) {
      ;
      /*OrinocoP.SendQueue*/QueueC__0__queue[/*OrinocoP.SendQueue*/QueueC__0__tail] = newVal;
      /*OrinocoP.SendQueue*/QueueC__0__tail++;
      if (/*OrinocoP.SendQueue*/QueueC__0__tail == 1) {
#line 102
        /*OrinocoP.SendQueue*/QueueC__0__tail = 0;
        }
#line 103
      /*OrinocoP.SendQueue*/QueueC__0__size++;
      /*OrinocoP.SendQueue*/QueueC__0__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 90 "/opt/tinyos-2.x/tos/interfaces/Queue.nc"
inline static error_t OrinocoQueueP__SendQueue__enqueue(OrinocoQueueP__SendQueue__t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*OrinocoP.SendQueue*/QueueC__0__Queue__enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
#line 65
inline static uint8_t OrinocoQueueP__SendQueue__maxSize(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*OrinocoP.SendQueue*/QueueC__0__Queue__maxSize();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
#line 58
inline static uint8_t OrinocoQueueP__SendQueue__size(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = /*OrinocoP.SendQueue*/QueueC__0__Queue__size();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 75 "/opt/tinyos-2.x/tos/system/PoolP.nc"
static inline bool /*OrinocoP.MsgPool.PoolP*/PoolP__0__Pool__empty(void )
#line 75
{
  ;
  return /*OrinocoP.MsgPool.PoolP*/PoolP__0__free == 0;
}

# 61 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
inline static bool OrinocoQueueP__MsgPool__empty(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*OrinocoP.MsgPool.PoolP*/PoolP__0__Pool__empty();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 113 "../../lib/net/orinoco/OrinocoQueueP.nc"
static inline message_t * OrinocoQueueP__forward(message_t * msg)
#line 113
{
  mq_entry_t qe;


  if (OrinocoQueueP__MsgPool__empty() || 
  OrinocoQueueP__SendQueue__size() == OrinocoQueueP__SendQueue__maxSize()) 
    {

      OrinocoQueueP__qs_.numPacketsDropped++;

      return msg;
    }


  qe.msg = msg;

  OrinocoQueueP__SendQueue__enqueue(qe);


  OrinocoQueueP__sendTask__postTask();


  return OrinocoQueueP__MsgPool__get();
}

#line 292
static inline bool OrinocoQueueP__Intercept__default__forward(collection_id_t collectid, message_t *msg, void *payload, uint8_t len)
#line 292
{
  return TRUE;
}

# 31 "/opt/tinyos-2.x/tos/interfaces/Intercept.nc"
inline static bool OrinocoQueueP__Intercept__forward(collection_id_t arg_0x2b010a415b58, message_t * msg, void * payload, uint8_t len){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
    __nesc_result = OrinocoQueueP__Intercept__default__forward(arg_0x2b010a415b58, msg, payload, len);
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 57 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle(void )
#line 57
{
  /* atomic removed: atomic calls only */
#line 57
  * (volatile uint8_t * )34U ^= 1 << 1;
}

# 42 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__toggle(void ){
#line 42
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle();
#line 42
}
#line 42
# 99 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP__Leds__led1Toggle(void )
#line 99
{
  LedsP__Led1__toggle();
  ;
#line 101
  ;
}

# 83 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void SinkP__Leds__led1Toggle(void ){
#line 83
  LedsP__Leds__led1Toggle();
#line 83
}
#line 83
# 63 "SinkP.nc"
static inline void SinkP__dropBlink(void )
#line 63
{
  SinkP__numDrop++;
  SinkP__Leds__led1Toggle();
}









static inline message_t *SinkP__qInsert(message_t *msg)
#line 76
{
  message_t *ret = msg;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 79
    {
      if (!SinkP__uartFull) {
          ret = SinkP__uartQueue[SinkP__uartIn];
          SinkP__uartQueue[SinkP__uartIn] = msg;
          SinkP__uartIn = (SinkP__uartIn + 1) % SinkP__UART_QUEUE_LEN;

          if (SinkP__uartIn == SinkP__uartOut) {
#line 85
            SinkP__uartFull = TRUE;
            }
#line 86
          if (!SinkP__uartBusy) {
              SinkP__uartSendTask__postTask();
              SinkP__uartBusy = TRUE;
            }
        }
      else 
#line 90
        {

          SinkP__dropBlink();
        }
    }
#line 94
    __nesc_atomic_end(__nesc_atomic); }

  return ret;
}

#line 163
static inline message_t *
SinkP__RadioReceive__receive(collection_id_t arg_0x2b010a049180, message_t *msg, void *payload, uint8_t len)
#line 164
{
  return SinkP__qInsert(msg);
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * OrinocoQueueP__Receive__receive(collection_id_t arg_0x2b010a416390, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = SinkP__RadioReceive__receive(arg_0x2b010a416390, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 181 "../../lib/net/orinoco/OrinocoQueueP.nc"
static inline error_t OrinocoQueueP__RootControl__isRoot(void )
#line 181
{
  return OrinocoQueueP__isRoot_;
}

# 102 "../../lib/net/orinoco/OrinocoTrafficStatisticsP.nc"
static inline void OrinocoTrafficStatisticsP__Updates__updatePktReceptionIntvl(void )
#line 102
{
  OrinocoTrafficStatisticsP__tv_.numPktReceived++;
}

# 48 "../../lib/net/orinoco/OrinocoTrafficUpdates.nc"
inline static void OrinocoQueueP__TrafficUpdates__updatePktReceptionIntvl(void ){
#line 48
  OrinocoTrafficStatisticsP__Updates__updatePktReceptionIntvl();
#line 48
}
#line 48
# 62 "../../lib/net/orinoco/OrinocoCacheC.nc"
static inline void /*OrinocoP.PacketHistory*/OrinocoCacheC__0__Cache__insert(/*OrinocoP.PacketHistory*/OrinocoCacheC__0__cache_t c)
#line 62
{
  if (/*OrinocoP.PacketHistory*/OrinocoCacheC__0__newest == 0) {
      /*OrinocoP.PacketHistory*/OrinocoCacheC__0__newest = 30 - 1;
    }
  else 
#line 65
    {
      /*OrinocoP.PacketHistory*/OrinocoCacheC__0__newest--;
    }
  /*OrinocoP.PacketHistory*/OrinocoCacheC__0__cache[/*OrinocoP.PacketHistory*/OrinocoCacheC__0__newest] = c;
  if (/*OrinocoP.PacketHistory*/OrinocoCacheC__0__len < 30) {
#line 69
    /*OrinocoP.PacketHistory*/OrinocoCacheC__0__len++;
    }
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Cache.nc"
inline static void OrinocoQueueP__PacketHistory__insert(OrinocoQueueP__PacketHistory__t item){
#line 51
  /*OrinocoP.PacketHistory*/OrinocoCacheC__0__Cache__insert(item);
#line 51
}
#line 51
# 445 "../../lib/net/orinoco/OrinocoQueueP.nc"
static inline bool OrinocoQueueP__CacheCompare__equal(mc_entry_t ce, mc_entry_t cmp)
#line 445
{
  return ce.origin == cmp.origin && ce.seqno == cmp.seqno && ce.hopCnt >= cmp.hopCnt;
}

# 50 "../../lib/net/orinoco/CacheCompare.nc"
inline static bool /*OrinocoP.PacketHistory*/OrinocoCacheC__0__CacheCompare__equal(/*OrinocoP.PacketHistory*/OrinocoCacheC__0__CacheCompare__cache_t ce, /*OrinocoP.PacketHistory*/OrinocoCacheC__0__CacheCompare__cache_t cmp){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = OrinocoQueueP__CacheCompare__equal(ce, cmp);
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 72 "../../lib/net/orinoco/OrinocoCacheC.nc"
static inline bool /*OrinocoP.PacketHistory*/OrinocoCacheC__0__Cache__lookup(/*OrinocoP.PacketHistory*/OrinocoCacheC__0__cache_t c)
#line 72
{
  uint8_t i;
#line 73
  uint8_t pos = /*OrinocoP.PacketHistory*/OrinocoCacheC__0__newest;

#line 74
  for (i = 0; i < /*OrinocoP.PacketHistory*/OrinocoCacheC__0__len; i++) {
      if (/*OrinocoP.PacketHistory*/OrinocoCacheC__0__CacheCompare__equal(/*OrinocoP.PacketHistory*/OrinocoCacheC__0__cache[pos], c)) {
          return TRUE;
        }
      if (++pos >= 30) {
#line 78
          pos = 0;
        }
    }
#line 80
  return FALSE;
}

# 59 "/opt/tinyos-2.x/tos/interfaces/Cache.nc"
inline static bool OrinocoQueueP__PacketHistory__lookup(OrinocoQueueP__PacketHistory__t item){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*OrinocoP.PacketHistory*/OrinocoCacheC__0__Cache__lookup(item);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 753 "../../lib/net/orinoco/OrinocoRadioP.nc"
static inline uint8_t OrinocoRadioP__Packet__payloadLength(message_t *msg)
#line 753
{
  return OrinocoRadioP__SubPacket__payloadLength(msg);
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t OrinocoQueueP__SubPacket__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = OrinocoRadioP__Packet__payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 379 "../../lib/net/orinoco/OrinocoQueueP.nc"
static inline uint8_t OrinocoQueueP__Packet__payloadLength(message_t *msg)
#line 379
{
  return OrinocoQueueP__SubPacket__payloadLength(msg) - sizeof(orinoco_data_header_t );
}

# 50 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void RF230DriverLayerP__TimeSyncFlag__set(message_t *msg){
#line 50
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(3U, msg);
#line 50
}
#line 50
# 998 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__PacketTimeSyncOffset__set(message_t *msg, uint8_t value)
{

  for (; 0; ) ;

  RF230DriverLayerP__TimeSyncFlag__set(msg);
}

# 57 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketField.nc"
inline static void OrinocoQueueP__PacketTimeSyncOffset__set(message_t *msg, OrinocoQueueP__PacketTimeSyncOffset__value_type value){
#line 57
  RF230DriverLayerP__PacketTimeSyncOffset__set(msg, value);
#line 57
}
#line 57
# 63 "/opt/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static OrinocoQueueP__PacketTimeStampRadio__size_type OrinocoQueueP__PacketTimeStampRadio__timestamp(message_t * msg){
#line 63
  unsigned long __nesc_result;
#line 63

#line 63
  __nesc_result = /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__timestamp(msg);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 317 "../../lib/net/orinoco/OrinocoQueueP.nc"
static inline message_t *
OrinocoQueueP__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 318
{
  unsigned char __nesc_temp43;
  unsigned char *__nesc_temp42;
#line 319
  mc_entry_t mc;
  orinoco_data_header_t *h;


  h = OrinocoQueueP__getHeader(msg);
  if (__nesc_ntoh_uint8(h->hopCnt.nxdata) < ORINOCO_MAX_PATH_RECORD && !OrinocoQueueP__RootControl__isRoot()) {
      __nesc_hton_uint8(h->path[__nesc_ntoh_uint8(h->hopCnt.nxdata)].nxdata, TOS_NODE_ID);
    }
  (__nesc_temp42 = h->hopCnt.nxdata, __nesc_hton_uint8(__nesc_temp42, (__nesc_temp43 = __nesc_ntoh_uint8(__nesc_temp42)) + 1), __nesc_temp43);



  if (__nesc_ntoh_int32(h->timestamp.relative.nxdata) <= 0) {
      __nesc_hton_uint32(h->timestamp.absolute.nxdata, __nesc_ntoh_int32(h->timestamp.relative.nxdata) + OrinocoQueueP__PacketTimeStampRadio__timestamp(msg));
    }
  else 
#line 333
    {
      __nesc_hton_uint32(h->timestamp.absolute.nxdata, OrinocoQueueP__PacketTimeStampRadio__timestamp(msg));
    }
  OrinocoQueueP__PacketTimeSyncOffset__set(msg, (unsigned short )& ((message_t *)0)->data + len + (unsigned short )& ((orinoco_data_header_t *)0)->timestamp.absolute);


  len = OrinocoQueueP__Packet__payloadLength(msg);





  mc.origin = __nesc_ntoh_uint16(h->origin.nxdata);
  mc.seqno = __nesc_ntoh_uint8(h->seqno.nxdata);
  mc.hopCnt = OrinocoQueueP__RootControl__isRoot() ? 0 : __nesc_ntoh_uint8(h->hopCnt.nxdata);

  if (OrinocoQueueP__PacketHistory__lookup(mc)) {
      ;

      OrinocoQueueP__qs_.numDuplicates++;

      return msg;
    }
  else 
#line 355
    {
      OrinocoQueueP__PacketHistory__insert(mc);
    }



  OrinocoQueueP__TrafficUpdates__updatePktReceptionIntvl();


  if (OrinocoQueueP__RootControl__isRoot()) {
      return OrinocoQueueP__Receive__receive(__nesc_ntoh_uint8(h->type.nxdata), msg, OrinocoQueueP__Packet__getPayload(msg, len), len);
    }
  else {
#line 366
    if (!OrinocoQueueP__Intercept__forward(__nesc_ntoh_uint8(h->type.nxdata), msg, OrinocoQueueP__Packet__getPayload(msg, len), len)) {
        return msg;
      }
    else 
#line 368
      {
        return OrinocoQueueP__forward(msg);
      }
    }
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * OrinocoRadioP__Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = OrinocoQueueP__SubReceive__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 52 "../../lib/net/orinoco/OrinocoTrafficUpdates.nc"
inline static void OrinocoRadioP__TrafficUpdates__updateRxBurst(bool end){
#line 52
  OrinocoTrafficStatisticsP__Updates__updateRxBurst(end);
#line 52
}
#line 52
# 183 "/opt/tinyos-2.x/tos/chips/rf230/RF230RadioP.nc"
static inline am_addr_t RF230RadioP__ActiveMessageConfig__source(message_t *msg)
{
  return RF230RadioP__Ieee154PacketLayer__getSrcAddr(msg);
}

# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__source(message_t *msg){
#line 46
  unsigned short __nesc_result;
#line 46

#line 46
  __nesc_result = RF230RadioP__ActiveMessageConfig__source(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 189 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__source(message_t *msg)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__source(msg);
}

# 88 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t OrinocoRadioP__SubAMPacket__source(message_t * amsg){
#line 88
  unsigned short __nesc_result;
#line 88

#line 88
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__source(amsg);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 164 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning = FALSE;
}

# 78 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void OrinocoRadioP__Timer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(2U);
#line 78
}
#line 78
# 565 "../../lib/net/orinoco/OrinocoRadioP.nc"
static inline message_t *OrinocoRadioP__DataSubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 565
{

  if (OrinocoRadioP__state_ == OrinocoRadioP__RECEIVE) {
      OrinocoRadioP__Timer__stop();

      OrinocoRadioP__txBeaconDst_ = OrinocoRadioP__SubAMPacket__source(msg);

      OrinocoRadioP__state_ = OrinocoRadioP__RECEIVE_SUBSEND;
      OrinocoRadioP__transition__postTask();


      OrinocoRadioP__ps_.numRxPackets++;



      OrinocoRadioP__TrafficUpdates__updateRxBurst(FALSE);


      msg = OrinocoRadioP__Receive__receive(msg, payload, len);
    }
  else {
#line 584
    if (OrinocoRadioP__state_ == OrinocoRadioP__RECEIVE_SUBSEND || OrinocoRadioP__state_ == OrinocoRadioP__RECEIVE_SUBSEND_DONE) {
      }
    }
#line 598
  return msg;
}

# 141 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__receive(id, msg, payload, len);
#line 143
  ;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__receive(am_id_t arg_0x2b010a702de0, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x2b010a702de0) {
#line 78
    case ORINOCO_AM_BEACON:
#line 78
      __nesc_result = OrinocoRadioP__BeaconSubReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    case ORINOCO_AM_DATA:
#line 78
      __nesc_result = OrinocoRadioP__DataSubReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__default__receive(arg_0x2b010a702de0, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 50 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 163 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address(void )
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amAddress();
}






static __inline bool /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(message_t *msg)
{
  am_addr_t addr = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(msg);

#line 176
  return addr == /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address() || addr == AM_BROADCAST_ADDR;
}

# 159 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(message_t *msg)
{
  return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(msg) - /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET;
}

# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 230 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__payloadLength(msg) - sizeof(activemessage_header_t );
}

#line 262
static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(message_t *msg)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(msg);
}

# 154 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(message_t *msg)
{
  return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(msg) + /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET;
}

# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 225 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(msg) + sizeof(activemessage_header_t );
}

#line 72
static inline void */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getPayload(message_t *msg)
{
  return (void *)msg + /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(msg);
}

#line 128
static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(message_t *msg)
{
  am_id_t id = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(msg);
  void *payload = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getPayload(msg);
  uint8_t len = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(msg);

  msg = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(msg) ? 
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__receive(id, msg, payload, len) : 
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__receive(id, msg, payload, len);

  return msg;
}

# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosReceive__receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 222 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(message_t *msg)
{
  if (__nesc_ntoh_leuint8(/*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(msg)->network.nxdata) == 0x3f) {
    return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosReceive__receive(msg);
    }
  else {
#line 227
    return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Receive__receive(msg);
    }
}

# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Receive__receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 322 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask(void )
{

  for (; ; ) 
    {
      message_t *msg;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize == 0) {
            {
#line 332
              __nesc_atomic_end(__nesc_atomic); 
#line 332
              return;
            }
            }
#line 334
          msg = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead];
        }
#line 335
        __nesc_atomic_end(__nesc_atomic); }

      msg = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Receive__receive(msg);

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead] = msg;

          if (++/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead >= /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE) {
            /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead = 0;
            }
          --/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;
        }
#line 347
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 68 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t OrinocoRadioP__SubAMPacket__address(void ){
#line 68
  unsigned short __nesc_result;
#line 68

#line 68
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address();
#line 68

#line 68
  return __nesc_result;
#line 68
}
#line 68
# 53 "/opt/tinyos-2.x/tos/system/QueueC.nc"
static inline bool /*OrinocoP.SendQueue*/QueueC__0__Queue__empty(void )
#line 53
{
  return /*OrinocoP.SendQueue*/QueueC__0__size == 0;
}









static inline /*OrinocoP.SendQueue*/QueueC__0__queue_t /*OrinocoP.SendQueue*/QueueC__0__Queue__head(void )
#line 65
{
  return /*OrinocoP.SendQueue*/QueueC__0__queue[/*OrinocoP.SendQueue*/QueueC__0__head];
}

#line 85
static inline /*OrinocoP.SendQueue*/QueueC__0__queue_t /*OrinocoP.SendQueue*/QueueC__0__Queue__dequeue(void )
#line 85
{
  /*OrinocoP.SendQueue*/QueueC__0__queue_t t = /*OrinocoP.SendQueue*/QueueC__0__Queue__head();

#line 87
  ;
  if (!/*OrinocoP.SendQueue*/QueueC__0__Queue__empty()) {
      /*OrinocoP.SendQueue*/QueueC__0__head++;
      if (/*OrinocoP.SendQueue*/QueueC__0__head == 1) {
#line 90
        /*OrinocoP.SendQueue*/QueueC__0__head = 0;
        }
#line 91
      /*OrinocoP.SendQueue*/QueueC__0__size--;
      /*OrinocoP.SendQueue*/QueueC__0__printQueue();
    }
  return t;
}

# 81 "/opt/tinyos-2.x/tos/interfaces/Queue.nc"
inline static OrinocoQueueP__SendQueue__t  OrinocoQueueP__SendQueue__dequeue(void ){
#line 81
  struct __nesc_unnamed4333 __nesc_result;
#line 81

#line 81
  __nesc_result = /*OrinocoP.SendQueue*/QueueC__0__Queue__dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 89 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
inline static error_t OrinocoQueueP__MsgPool__put(OrinocoQueueP__MsgPool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*OrinocoP.MsgPool.PoolP*/PoolP__0__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 73 "/opt/tinyos-2.x/tos/interfaces/Queue.nc"
inline static OrinocoQueueP__SendQueue__t  OrinocoQueueP__SendQueue__head(void ){
#line 73
  struct __nesc_unnamed4333 __nesc_result;
#line 73

#line 73
  __nesc_result = /*OrinocoP.SendQueue*/QueueC__0__Queue__head();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 298 "../../lib/net/orinoco/OrinocoQueueP.nc"
static inline void OrinocoQueueP__SubSend__sendDone(message_t *msg, error_t error)
#line 298
{

  mq_entry_t qe = OrinocoQueueP__SendQueue__head();

#line 301
  if (msg == qe.msg) {

      if (error == SUCCESS) {
          OrinocoQueueP__MsgPool__put(msg);
          OrinocoQueueP__SendQueue__dequeue();
        }




      OrinocoQueueP__sendNext(TRUE);
    }
}

# 100 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static void OrinocoRadioP__Send__sendDone(message_t * msg, error_t error){
#line 100
  OrinocoQueueP__SubSend__sendDone(msg, error);
#line 100
}
#line 100
# 124 "../../lib/net/orinoco/OrinocoConfigP.nc"
static inline uint8_t OrinocoConfigP__OrinocoConfig__getMinQueueSize(void )
#line 124
{
  return OrinocoConfigP__qmLvl_;
}

# 84 "../../lib/net/orinoco/OrinocoConfig.nc"
inline static uint8_t OrinocoQueueP__Config__getMinQueueSize(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = OrinocoConfigP__OrinocoConfig__getMinQueueSize();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 672 "../../lib/net/orinoco/OrinocoRadioP.nc"
static inline error_t OrinocoRadioP__Send__send(message_t *msg, uint8_t len)
#line 672
{

  if (OrinocoRadioP__txDataMsg_ != (void *)0) {
      return EBUSY;
    }




  if ((((
#line 680
  OrinocoRadioP__state_ == OrinocoRadioP__OFF || OrinocoRadioP__state_ == OrinocoRadioP__OFF_SUBSTOP) || OrinocoRadioP__state_ == OrinocoRadioP__OFF_SUBSTOP_DONE) || 
  OrinocoRadioP__state_ == OrinocoRadioP__OFF_STOP) || OrinocoRadioP__state_ == OrinocoRadioP__OFF_START) {
      return EOFF;
    }



  if (OrinocoRadioP__state_ == OrinocoRadioP__SLEEP) {
      OrinocoRadioP__Timer__stop();
      OrinocoRadioP__transition__postTask();
    }
#line 702
  if ((
#line 701
  OrinocoRadioP__state_ == OrinocoRadioP__SLEEP_TIMER || 
  OrinocoRadioP__state_ == OrinocoRadioP__SLEEP) || 
  OrinocoRadioP__state_ == OrinocoRadioP__RECEIVE_SUBSTART) 
    {
      OrinocoRadioP__state_ = OrinocoRadioP__FORWARD_SUBSTART;
    }
  else {
    if (OrinocoRadioP__state_ == OrinocoRadioP__RECEIVE_SUBSTART_DONE) {
        OrinocoRadioP__state_ = OrinocoRadioP__FORWARD_SUBSTART_DONE;
      }
    else {

      if ((
#line 712
      OrinocoRadioP__state_ == OrinocoRadioP__RECEIVE_DONE || 
      OrinocoRadioP__state_ == OrinocoRadioP__FORWARD_DONE) || 
      OrinocoRadioP__state_ == OrinocoRadioP__SLEEP_SUBSTOP) 
        {

          OrinocoRadioP__state_ = OrinocoRadioP__FORWARD_TIMER;
        }
      }
    }






  OrinocoRadioP__txDataMsg_ = msg;
  OrinocoRadioP__txDataLen_ = len;
  OrinocoRadioP__txDataError_ = FAIL;
  OrinocoRadioP__txAttempts_ = 0;

  return SUCCESS;
}

# 75 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t OrinocoQueueP__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = OrinocoRadioP__Send__send(msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 53 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__get(void )
{
  return /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__get();
}

# 61 "/opt/tinyos-2.x/tos/lib/timer/LocalTime.nc"
inline static uint32_t OrinocoTrafficStatisticsP__LocalTime__get(void ){
#line 61
  unsigned long __nesc_result;
#line 61

#line 61
  __nesc_result = /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 962 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayerP.nc"
static inline uint8_t RF230DriverLayerP__PacketRSSI__get(message_t *msg)
{
  return RF230DriverLayerP__getMeta(msg)->rssi;
}

# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketField.nc"
inline static RF230SlimRadioP__PacketRSSI__value_type RF230SlimRadioP__PacketRSSI__get(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = RF230DriverLayerP__PacketRSSI__get(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 14 "../../chips/rf230/RF230SlimRadioP.nc"
static inline bool RF230SlimRadioP__LinkPacketMetadata__highChannelQuality(message_t *msg)
#line 14
{
  return RF230SlimRadioP__PacketRSSI__get(msg) >= ORINOCO_MIN_RSSI;
}

# 47 "/opt/tinyos-2.x/tos/interfaces/LinkPacketMetadata.nc"
inline static bool OrinocoPathCostHopCountP__LinkPacketMetadata__highChannelQuality(message_t * msg){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = RF230SlimRadioP__LinkPacketMetadata__highChannelQuality(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 43 "/opt/tinyos-2.x/tos/lib/net/RootControl.nc"
inline static bool OrinocoPathCostHopCountP__RootControl__isRoot(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = OrinocoQueueP__RootControl__isRoot();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 39 "../../lib/net/orinoco/OrinocoPathCostHopCountP.nc"
static inline bool OrinocoPathCostHopCountP__OrinocoPathCost__inspectBeacon(message_t *msg, orinoco_pathcost_t cost, bool update)
#line 39
{


  if (OrinocoPathCostHopCountP__RootControl__isRoot()) {
      return FALSE;
    }


  if (!OrinocoPathCostHopCountP__LinkPacketMetadata__highChannelQuality(msg)) {
      return FALSE;
    }


  if (cost == ORINOCO_PATHCOST_INF) {
      return FALSE;
    }


  cost += 1;
  if (cost > OrinocoPathCostHopCountP__curCost_) {

      if (cost < OrinocoPathCostHopCountP__altCost_) {
          OrinocoPathCostHopCountP__altCost_ = cost;
        }
      return FALSE;
    }



  if (update) {
      OrinocoPathCostHopCountP__curCost_ = cost;
    }

  return TRUE;
}

# 14 "../../lib/net/orinoco/OrinocoPathCost.nc"
inline static bool OrinocoRadioP__PathCost__inspectBeacon(message_t *msg, orinoco_pathcost_t cost, bool update){
#line 14
  unsigned char __nesc_result;
#line 14

#line 14
  __nesc_result = OrinocoPathCostHopCountP__OrinocoPathCost__inspectBeacon(msg, cost, update);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
# 199 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getdt(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].dt;
}

# 151 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static uint32_t OrinocoRadioP__Timer__getdt(void ){
#line 151
  unsigned long __nesc_result;
#line 151

#line 151
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getdt(2U);
#line 151

#line 151
  return __nesc_result;
#line 151
}
#line 151
# 136 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static bool OrinocoRadioP__SubAMPacket__isForMe(message_t * amsg){
#line 136
  unsigned char __nesc_result;
#line 136

#line 136
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(amsg);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 265 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__cancel(message_t *msg)
{
  error_t result;

  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  for (; 0; ) ;

  if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state == /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING || /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state == /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_RETRY) 
    {
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_DONE;
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError = ECANCEL;
      result = SUCCESS;

      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask();
    }
  else {
    result = EBUSY;
    }
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  return result;
}

# 64 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__cancel(message_t *msg){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__cancel(msg);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 75 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__cancel(message_t *msg)
{
  return /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__cancel(msg);
}

# 64 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__cancel(message_t *msg){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__cancel(msg);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 140 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline error_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__cancel(message_t *msg)
{
  return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__cancel(msg);
}

# 64 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__cancel(message_t *msg){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__cancel(msg);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 84 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
static inline error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__cancel(message_t *msg)
{
  return /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__cancel(msg);
}

# 64 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__cancel(message_t *msg){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__cancel(msg);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 103 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline error_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__cancel(am_id_t id, message_t *msg)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__cancel(msg);
}

# 96 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t OrinocoForwardLayerP__SubAMSend__cancel(message_t * msg){
#line 96
  unsigned char __nesc_result;
#line 96

#line 96
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__cancel(ORINOCO_AM_DATA, msg);
#line 96

#line 96
  return __nesc_result;
#line 96
}
#line 96
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t OrinocoForwardLayerP__doneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(OrinocoForwardLayerP__doneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 78 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void OrinocoForwardLayerP__Timer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(1U);
#line 78
}
#line 78
# 52 "../../lib/net/orinoco/OrinocoForwardLayerP.nc"
static inline error_t OrinocoForwardLayerP__AMSend__cancel(message_t *msg)
#line 52
{

  if (OrinocoForwardLayerP__state_ == OrinocoForwardLayerP__STATE_READY || msg != OrinocoForwardLayerP__txBuf_) {
      return FAIL;
    }
  else {
    if (OrinocoForwardLayerP__state_ == OrinocoForwardLayerP__STATE_BACKOFF) {
        OrinocoForwardLayerP__Timer__stop();
        OrinocoForwardLayerP__txError_ = ECANCEL;
        OrinocoForwardLayerP__doneTask__postTask();
        return SUCCESS;
      }
    else {
      if (OrinocoForwardLayerP__state_ == OrinocoForwardLayerP__STATE_SEND) {
          return OrinocoForwardLayerP__SubAMSend__cancel(msg);
        }
      else 
        {
          for (; 0; ) ;
        }
      }
    }
#line 73
  return FAIL;
}

# 96 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t OrinocoRadioP__DataSubSend__cancel(message_t * msg){
#line 96
  unsigned char __nesc_result;
#line 96

#line 96
  __nesc_result = OrinocoForwardLayerP__AMSend__cancel(msg);
#line 96

#line 96
  return __nesc_result;
#line 96
}
#line 96
# 106 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t OrinocoRadioP__SubPacket__maxPayloadLength(void ){
#line 106
  unsigned char __nesc_result;
#line 106

#line 106
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength();
#line 106

#line 106
  return __nesc_result;
#line 106
}
#line 106
# 761 "../../lib/net/orinoco/OrinocoRadioP.nc"
static inline uint8_t OrinocoRadioP__Packet__maxPayloadLength(void )
#line 761
{
  return OrinocoRadioP__SubPacket__maxPayloadLength();
}

# 106 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t OrinocoQueueP__SubPacket__maxPayloadLength(void ){
#line 106
  unsigned char __nesc_result;
#line 106

#line 106
  __nesc_result = OrinocoRadioP__Packet__maxPayloadLength();
#line 106

#line 106
  return __nesc_result;
#line 106
}
#line 106
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 68 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
static inline void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted(void )
{
  error_t result = /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(/*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending);

#line 71
  if (result != SUCCESS) 
    {
      /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release();
      /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(/*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending, result);
    }
}

# 158 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(uint8_t id)
#line 158
{
}

# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__granted(uint8_t arg_0x2b010a7ff020){
#line 102
  switch (arg_0x2b010a7ff020) {
#line 102
    case 0U:
#line 102
      /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(arg_0x2b010a7ff020);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 164 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 164
{
}

# 59 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x2b010a7fc6e0){
#line 59
    /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(arg_0x2b010a7fc6e0);
#line 59
}
#line 59
# 149 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void )
#line 149
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 150
    {
      /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_BUSY;
      /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
    }
#line 153
    __nesc_atomic_end(__nesc_atomic); }
  /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__granted(/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
}

# 230 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(message_t *msg)
{
  error_t result;

  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state != /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY) {
    result = EBUSY;
    }
  else {
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg = msg;
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING;
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries = 0;
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask();
      result = SUCCESS;
    }

  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  return result;
}

# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 163 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn)
{
  __nesc_hton_leuint8(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dsn.nxdata, dsn);
}

# 125 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RF230RadioP__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn){
#line 125
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(msg, dsn);
#line 125
}
#line 125
# 154 "/opt/tinyos-2.x/tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t dsn)
{
  RF230RadioP__Ieee154PacketLayer__setDSN(msg, dsn);
}

# 52 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t number){
#line 52
  RF230RadioP__UniqueConfig__setSequenceNumber(msg, number);
#line 52
}
#line 52
# 69 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(message_t *msg)
{
  /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__setSequenceNumber(msg, ++/*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber);
  return /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__send(msg);
}

# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 50 "../../lib/net/orinoco/OrinocoTrafficUpdates.nc"
inline static void OrinocoRadioP__TrafficUpdates__updateTxBurst(bool end){
#line 50
  OrinocoTrafficStatisticsP__Updates__updateTxBurst(end);
#line 50
}
#line 50
# 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t OrinocoRadioP__BeaconSubSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__send(ORINOCO_AM_BEACON, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 17 "../../lib/net/orinoco/OrinocoPathCostHopCountP.nc"
static inline orinoco_pathcost_t OrinocoPathCostHopCountP__OrinocoPathCost__getCost(void )
#line 17
{
  return OrinocoPathCostHopCountP__RootControl__isRoot() ? 0 : OrinocoPathCostHopCountP__curCost_;
}

# 6 "../../lib/net/orinoco/OrinocoPathCost.nc"
inline static orinoco_pathcost_t OrinocoRadioP__PathCost__getCost(void ){
#line 6
  unsigned char __nesc_result;
#line 6

#line 6
  __nesc_result = OrinocoPathCostHopCountP__OrinocoPathCost__getCost();
#line 6

#line 6
  return __nesc_result;
#line 6
}
#line 6
# 117 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__getPayload(am_id_t id, message_t *msg, uint8_t len)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(msg, len);
}

# 135 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void * OrinocoRadioP__BeaconSubSend__getPayload(message_t * msg, uint8_t len){
#line 135
  void *__nesc_result;
#line 135

#line 135
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__getPayload(ORINOCO_AM_BEACON, msg, len);
#line 135

#line 135
  return __nesc_result;
#line 135
}
#line 135
# 72 "../../lib/net/orinoco/OrinocoRadioP.nc"
static inline error_t OrinocoRadioP__sendBeacon(void )
#line 72
{
  OrinocoBeaconMsg *p;
  error_t error;

  OrinocoRadioP__SubPacket__clear(&OrinocoRadioP__txBeaconMsg_);
  p = OrinocoRadioP__BeaconSubSend__getPayload(&OrinocoRadioP__txBeaconMsg_, sizeof(OrinocoBeaconMsg ));
  __nesc_hton_uint8(p->cost.nxdata, OrinocoRadioP__PathCost__getCost());
  __nesc_hton_uint8(p->cw.nxdata, OrinocoRadioP__curCongestionWin_);


  ;
  error = OrinocoRadioP__BeaconSubSend__send(OrinocoRadioP__txBeaconDst_, &OrinocoRadioP__txBeaconMsg_, sizeof(OrinocoBeaconMsg ));


  OrinocoRadioP__txBeaconDst_ = AM_BROADCAST_ADDR;

  return error;
}

#line 364
static inline uint8_t OrinocoRadioP__BackoffConfig__getMaximumBackoff(void )
#line 364
{
  return OrinocoRadioP__txDataMaxBackoff_;
}

# 44 "../../lib/net/orinoco/OrinocoBackoffConfig.nc"
inline static uint8_t OrinocoForwardLayerP__OrinocoBackoffConfig__getMaximumBackoff(void ){
#line 44
  unsigned char __nesc_result;
#line 44

#line 44
  __nesc_result = OrinocoRadioP__BackoffConfig__getMaximumBackoff();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 89 "/opt/tinyos-2.x/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC__Random__rand16(void )
#line 89
{
  return (uint16_t )RandomMlcgC__Random__rand32();
}

# 52 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint16_t OrinocoForwardLayerP__Random__rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 26 "../../lib/net/orinoco/OrinocoForwardLayerP.nc"
static __inline uint16_t OrinocoForwardLayerP__getBackoff(void )
#line 26
{
  return OrinocoForwardLayerP__Random__rand16() % (1 + OrinocoForwardLayerP__OrinocoBackoffConfig__getMaximumBackoff());
}

# 73 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void OrinocoForwardLayerP__Timer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(1U, dt);
#line 73
}
#line 73
# 38 "../../lib/net/orinoco/OrinocoForwardLayerP.nc"
static inline error_t OrinocoForwardLayerP__AMSend__send(am_addr_t dst, message_t *msg, uint8_t len)
#line 38
{
  if (OrinocoForwardLayerP__state_ != OrinocoForwardLayerP__STATE_READY) {
      return EBUSY;
    }
  OrinocoForwardLayerP__state_ = OrinocoForwardLayerP__STATE_BACKOFF;
  OrinocoForwardLayerP__txDst_ = dst;
  OrinocoForwardLayerP__txBuf_ = msg;
  OrinocoForwardLayerP__txLen_ = len;
  OrinocoForwardLayerP__txError_ = SUCCESS;
  OrinocoForwardLayerP__Timer__startOneShot(OrinocoForwardLayerP__getBackoff());

  return SUCCESS;
}

# 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t OrinocoRadioP__DataSubSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = OrinocoForwardLayerP__AMSend__send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 54 "../../lib/net/orinoco/OrinocoTrafficUpdates.nc"
inline static void OrinocoRadioP__TrafficUpdates__updateForwardDelay(bool done){
#line 54
  OrinocoTrafficStatisticsP__Updates__updateForwardDelay(done);
#line 54
}
#line 54
# 54 "../../interfaces/OrinocoTrafficStatistics.nc"
inline static uint32_t OrinocoRadioP__TrafficStats__getForwardDelay(void ){
#line 54
  unsigned long __nesc_result;
#line 54

#line 54
  __nesc_result = OrinocoTrafficStatisticsP__Stats__getForwardDelay();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 112 "../../lib/net/orinoco/OrinocoConfigP.nc"
static inline uint8_t OrinocoConfigP__OrinocoConfig__getNumWaitingIntervals(void )
#line 112
{
  return OrinocoConfigP__waitIntvl_;
}

# 78 "../../lib/net/orinoco/OrinocoConfig.nc"
inline static uint8_t OrinocoRadioP__Config__getNumWaitingIntervals(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = OrinocoConfigP__OrinocoConfig__getNumWaitingIntervals();
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 118 "../../lib/net/orinoco/OrinocoRadioP.nc"
static __inline uint32_t OrinocoRadioP__getMaxWaitingTime(void )
#line 118
{




  return OrinocoRadioP__Config__getNumWaitingIntervals() * (2 * OrinocoRadioP__TrafficStats__getForwardDelay());
}

# 88 "../../lib/net/orinoco/OrinocoConfigP.nc"
static inline uint16_t OrinocoConfigP__OrinocoConfig__getAbsWakeUpDeviation(void )
#line 88
{
  return OrinocoConfigP__Tsdev_;
}

# 60 "../../lib/net/orinoco/OrinocoConfig.nc"
inline static uint16_t OrinocoRadioP__Config__getAbsWakeUpDeviation(void ){
#line 60
  unsigned short __nesc_result;
#line 60

#line 60
  __nesc_result = OrinocoConfigP__OrinocoConfig__getAbsWakeUpDeviation();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 75 "../../lib/net/orinoco/OrinocoConfigP.nc"
static inline uint16_t OrinocoConfigP__OrinocoConfig__getWakeUpInterval(void )
#line 75
{
  return OrinocoConfigP__Ts_;
}

# 47 "../../lib/net/orinoco/OrinocoConfig.nc"
inline static uint16_t OrinocoRadioP__Config__getWakeUpInterval(void ){
#line 47
  unsigned short __nesc_result;
#line 47

#line 47
  __nesc_result = OrinocoConfigP__OrinocoConfig__getWakeUpInterval();
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 52 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint16_t OrinocoRadioP__Random__rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 112 "../../lib/net/orinoco/OrinocoRadioP.nc"
static __inline uint16_t OrinocoRadioP__getRandomSleepTime(void )
#line 112
{
  uint16_t rdev;

#line 114
  rdev = OrinocoRadioP__Random__rand16() % (2 * OrinocoRadioP__Config__getAbsWakeUpDeviation());
  return OrinocoRadioP__Config__getWakeUpInterval() + OrinocoRadioP__Config__getAbsWakeUpDeviation() - rdev;
}

# 159 "SinkP.nc"
static inline void SinkP__RadioControl__stopDone(error_t error)
#line 159
{
}

# 138 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void OrinocoRadioP__SplitControl__stopDone(error_t error){
#line 138
  SinkP__RadioControl__stopDone(error);
#line 138
}
#line 138
# 157 "SinkP.nc"
static inline void SinkP__RadioControl__startDone(error_t error)
#line 157
{
}

# 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void OrinocoRadioP__SplitControl__startDone(error_t error){
#line 113
  SinkP__RadioControl__startDone(error);
#line 113
}
#line 113
# 96 "../../lib/net/orinoco/OrinocoConfigP.nc"
static inline uint8_t OrinocoConfigP__OrinocoConfig__getMinDwellTime(void )
#line 96
{
  return OrinocoConfigP__Tdmin_;
}

# 66 "../../lib/net/orinoco/OrinocoConfig.nc"
inline static uint8_t OrinocoRadioP__Config__getMinDwellTime(void ){
#line 66
  unsigned char __nesc_result;
#line 66

#line 66
  __nesc_result = OrinocoConfigP__OrinocoConfig__getMinDwellTime();
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
# 398 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayerP.nc"
static inline error_t RF230DriverLayerP__RadioState__turnOff(void )
{
  if (RF230DriverLayerP__cmd != RF230DriverLayerP__CMD_NONE) {
    return EBUSY;
    }
  else {
#line 402
    if (RF230DriverLayerP__state == RF230DriverLayerP__STATE_SLEEP) {
      return EALREADY;
      }
    }
#line 405
  RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_TURNOFF;
  RF230DriverLayerP__Tasklet__schedule();

  return SUCCESS;
}

# 44 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioState.nc"
inline static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOff(void ){
#line 44
  unsigned char __nesc_result;
#line 44

#line 44
  __nesc_result = RF230DriverLayerP__RadioState__turnOff();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 97 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stop(void )
{
  error_t error;

  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state != /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY) {
    error = EBUSY;
    }
  else {
      error = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOff();

      if (error == SUCCESS) {
        /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_OFF;
        }
    }
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  return error;
}

# 130 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t OrinocoRadioP__SubControl__stop(void ){
#line 130
  unsigned char __nesc_result;
#line 130

#line 130
  __nesc_result = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stop();
#line 130

#line 130
  return __nesc_result;
#line 130
}
#line 130
# 424 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayerP.nc"
static inline error_t RF230DriverLayerP__RadioState__turnOn(void )
{
  if (RF230DriverLayerP__cmd != RF230DriverLayerP__CMD_NONE || (RF230DriverLayerP__state == RF230DriverLayerP__STATE_SLEEP && !RF230DriverLayerP__RadioAlarm__isFree())) {
    return EBUSY;
    }
  else {
#line 428
    if (RF230DriverLayerP__state == RF230DriverLayerP__STATE_RX_ON) {
      return EALREADY;
      }
    }
#line 431
  RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_TURNON;
  RF230DriverLayerP__Tasklet__schedule();

  return SUCCESS;
}

# 56 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioState.nc"
inline static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOn(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = RF230DriverLayerP__RadioState__turnOn();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 76 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start(void )
{
  error_t error;

  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state != /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY) {
    error = EBUSY;
    }
  else {
      error = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOn();

      if (error == SUCCESS) {
        /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_ON;
        }
    }
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  return error;
}

# 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t OrinocoRadioP__SubControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 161 "../../lib/net/orinoco/OrinocoRadioP.nc"
static inline void OrinocoRadioP__transition__runTask(void )
#line 161
{
  error_t error;


  if (OrinocoRadioP__state_ == OrinocoRadioP__RECEIVE_SUBSTART || OrinocoRadioP__state_ == OrinocoRadioP__FORWARD_SUBSTART) {
      error = OrinocoRadioP__SubControl__start();
      for (; 0; ) ;

      if (error == SUCCESS) {
          OrinocoRadioP__state_++;
        }
      else 
#line 171
        {
          OrinocoRadioP__transition__postTask();
        }
    }
  else {
    if (OrinocoRadioP__state_ == OrinocoRadioP__SLEEP_SUBSTOP || OrinocoRadioP__state_ == OrinocoRadioP__OFF_SUBSTOP) {
        error = OrinocoRadioP__SubControl__stop();
        for (; 0; ) ;

        if (error == SUCCESS) {
            OrinocoRadioP__state_++;
          }
        else 
#line 182
          {
            OrinocoRadioP__transition__postTask();
          }
      }
    else {
      if (OrinocoRadioP__state_ == OrinocoRadioP__OFF_START) {

          OrinocoRadioP__curCongestionWin_ = OrinocoRadioP__Config__getMinDwellTime();


          OrinocoRadioP__state_ = OrinocoRadioP__RECEIVE_SUBSTART;
          OrinocoRadioP__transition__postTask();
          OrinocoRadioP__SplitControl__startDone(SUCCESS);
        }
      else {
        if (OrinocoRadioP__state_ == OrinocoRadioP__OFF_STOP) {
            OrinocoRadioP__state_ = OrinocoRadioP__OFF;
            OrinocoRadioP__SplitControl__stopDone(SUCCESS);
          }
        else {
          if (OrinocoRadioP__state_ == OrinocoRadioP__SLEEP_TIMER) {
              OrinocoRadioP__Timer__startOneShot(OrinocoRadioP__getRandomSleepTime());
              OrinocoRadioP__state_ = OrinocoRadioP__SLEEP;
            }
          else {
            if (OrinocoRadioP__state_ == OrinocoRadioP__FORWARD_TIMER) {
                OrinocoRadioP__Timer__startOneShot(OrinocoRadioP__getMaxWaitingTime());
                OrinocoRadioP__state_ = OrinocoRadioP__FORWARD;

                OrinocoRadioP__TrafficUpdates__updateForwardDelay(TRUE);
              }
            else {
              if (OrinocoRadioP__state_ == OrinocoRadioP__RECEIVE_TIMER) {
                  OrinocoRadioP__Timer__startOneShot(OrinocoRadioP__curCongestionWin_ + ORINOCO_DATA_WAITING_TIME);
                  OrinocoRadioP__state_ = OrinocoRadioP__RECEIVE;
                }
              else {
                if (OrinocoRadioP__state_ == OrinocoRadioP__FORWARD_SUBSEND) {
                    for (; 0; ) ;
                    OrinocoRadioP__txDataError_ = OrinocoRadioP__DataSubSend__send(OrinocoRadioP__txDataDst_, OrinocoRadioP__txDataMsg_, OrinocoRadioP__txDataLen_);

                    if (OrinocoRadioP__txDataError_ == SUCCESS) {
                        OrinocoRadioP__state_ = OrinocoRadioP__FORWARD_SUBSEND_DONE;
                      }
                    else 
#line 225
                      {
                        OrinocoRadioP__state_ = OrinocoRadioP__FORWARD_DONE;
                        OrinocoRadioP__transition__postTask();
                      }
                  }
                else {
                  if (OrinocoRadioP__state_ == OrinocoRadioP__RECEIVE_SUBSEND) {
                      error = OrinocoRadioP__sendBeacon();

                      if (error == SUCCESS) {
                          OrinocoRadioP__state_ = OrinocoRadioP__RECEIVE_SUBSEND_DONE;
                        }
                      else 
#line 236
                        {
                          OrinocoRadioP__state_ = OrinocoRadioP__RECEIVE_DONE;
                          OrinocoRadioP__transition__postTask();
                        }
                    }
                  else {
                    if (OrinocoRadioP__state_ == OrinocoRadioP__FORWARD_DONE) {

                        OrinocoRadioP__state_ = OrinocoRadioP__SLEEP_SUBSTOP;
                        OrinocoRadioP__transition__postTask();


                        OrinocoRadioP__TrafficUpdates__updateTxBurst(TRUE);
                      }
                    else {
                      if (OrinocoRadioP__state_ == OrinocoRadioP__RECEIVE_DONE) {









                          OrinocoRadioP__TrafficUpdates__updateRxBurst(TRUE);


                          OrinocoRadioP__state_ = OrinocoRadioP__SLEEP_SUBSTOP;
                          OrinocoRadioP__transition__postTask();
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
}

# 69 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RF230RadioP__Ieee154PacketLayer__createDataFrame(message_t *msg){
#line 69
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(msg);
#line 69
}
#line 69
# 92 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(message_t *msg)
{
  return (__nesc_ntoh_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata) & /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_MASK) == /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_VALUE;
}

# 63 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RF230RadioP__Ieee154PacketLayer__isDataFrame(message_t *msg){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(msg);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 203 "/opt/tinyos-2.x/tos/chips/rf230/RF230RadioP.nc"
static inline error_t RF230RadioP__ActiveMessageConfig__checkFrame(message_t *msg)
{
  if (!RF230RadioP__Ieee154PacketLayer__isDataFrame(msg)) {
    RF230RadioP__Ieee154PacketLayer__createDataFrame(msg);
    }
  return SUCCESS;
}

# 63 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static error_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__checkFrame(message_t *msg){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = RF230RadioP__ActiveMessageConfig__checkFrame(msg);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 906 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  for (; 0; ) ;
  for (; 0; ) ;


  __nesc_hton_leuint8(RF230DriverLayerP__getHeader(msg)->length.nxdata, length + 2);
}

# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  RF230DriverLayerP__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 100 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__setPayloadLength(msg, length);
}

# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 126 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__setPayloadLength(msg, length);
}

# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 292 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(msg, length + sizeof(ieee154_simple_header_t ));
}

# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 164 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__setPayloadLength(msg, length + /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET);
}

# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 235 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__setPayloadLength(msg, length + sizeof(activemessage_header_t ));
}

#line 267
static inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(message_t *msg, uint8_t len)
{
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__setPayloadLength(msg, len);
}

# 327 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_leuint16(void * target, uint16_t value)
#line 327
{
  uint8_t *base = target;

#line 329
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

# 193 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr)
{
  __nesc_hton_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->src.nxdata, addr);
}

# 156 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RF230RadioP__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr){
#line 156
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setSrcAddr(msg, addr);
#line 156
}
#line 156
# 188 "/opt/tinyos-2.x/tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__ActiveMessageConfig__setSource(message_t *msg, am_addr_t addr)
{
  RF230RadioP__Ieee154PacketLayer__setSrcAddr(msg, addr);
}

# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setSource(message_t *msg, am_addr_t addr){
#line 49
  RF230RadioP__ActiveMessageConfig__setSource(msg, addr);
#line 49
}
#line 49
# 194 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setSource(message_t *msg, am_addr_t addr)
{
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setSource(msg, addr);
}

# 173 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan)
{
  __nesc_hton_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->destpan.nxdata, pan);
}

# 136 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RF230RadioP__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan){
#line 136
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestPan(msg, pan);
#line 136
}
#line 136
# 198 "/opt/tinyos-2.x/tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__ActiveMessageConfig__setGroup(message_t *msg, am_group_t grp)
{
  RF230RadioP__Ieee154PacketLayer__setDestPan(msg, grp);
}

# 55 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setGroup(message_t *msg, am_group_t grp){
#line 55
  RF230RadioP__ActiveMessageConfig__setGroup(msg, grp);
#line 55
}
#line 55
# 214 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setGroup(message_t *msg, am_group_t grp)
{
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setGroup(msg, grp);
}

# 55 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static am_group_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amGroup(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amGroup();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 168 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_group_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__localGroup(void )
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amGroup();
}

#line 204
static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(message_t *msg, am_id_t type)
{
  __nesc_hton_uint8(/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(msg)->type.nxdata, type);
}

# 183 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr)
{
  __nesc_hton_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dest.nxdata, addr);
}

# 146 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RF230RadioP__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr){
#line 146
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestAddr(msg, addr);
#line 146
}
#line 146
# 178 "/opt/tinyos-2.x/tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__ActiveMessageConfig__setDestination(message_t *msg, am_addr_t addr)
{
  RF230RadioP__Ieee154PacketLayer__setDestAddr(msg, addr);
}

# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setDestination(message_t *msg, am_addr_t addr){
#line 43
  RF230RadioP__ActiveMessageConfig__setDestination(msg, addr);
#line 43
}
#line 43
# 184 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(message_t *msg, am_addr_t addr)
{
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setDestination(msg, addr);
}

#line 122
static inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__default__aboutToSend(am_id_t id, am_addr_t addr, message_t *msg)
{
}

# 59 "/opt/tinyos-2.x/tos/interfaces/SendNotifier.nc"
inline static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__aboutToSend(am_id_t arg_0x2b010a72d630, am_addr_t dest, message_t * msg){
#line 59
    /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__default__aboutToSend(arg_0x2b010a72d630, dest, msg);
#line 59
}
#line 59
# 64 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[id] != /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY || /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(id)) {
        if (/*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead == /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead = id;
          }
        else {
#line 88
          /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[/*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail] = id;
          }
#line 89
        /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail = id;
        {
          unsigned char __nesc_temp = 
#line 90
          SUCCESS;

#line 90
          return __nesc_temp;
        }
      }
#line 92
    {
      unsigned char __nesc_temp = 
#line 92
      EBUSY;

#line 92
      return __nesc_temp;
    }
  }
}

# 79 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 160 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 160
{
}

# 53 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(uint8_t arg_0x2b010a7fd1a0){
#line 53
    /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(arg_0x2b010a7fd1a0);
#line 53
}
#line 53
# 70 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id)
#line 70
{
  /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 72
    {
      if (/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state == /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_IDLE) {
          /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
          /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = id;
          /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
          {
            unsigned char __nesc_temp = 
#line 77
            SUCCESS;

            {
#line 77
              __nesc_atomic_end(__nesc_atomic); 
#line 77
              return __nesc_temp;
            }
          }
        }
#line 79
      {
        unsigned char __nesc_temp = 
#line 79
        /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__enqueue(id);

        {
#line 79
          __nesc_atomic_end(__nesc_atomic); 
#line 79
          return __nesc_temp;
        }
      }
    }
#line 82
    __nesc_atomic_end(__nesc_atomic); }
}

# 88 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__request(0U);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 162 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id)
#line 162
{
}

# 61 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(uint8_t arg_0x2b010a7fd1a0){
#line 61
    /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(arg_0x2b010a7fd1a0);
#line 61
}
#line 61
# 83 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(uint8_t id)
#line 83
{
  /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 85
    {
      if (/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state == /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_IDLE) {
          /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_BUSY;
          /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = id;
          /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
          {
            unsigned char __nesc_temp = 
#line 90
            SUCCESS;

            {
#line 90
              __nesc_atomic_end(__nesc_atomic); 
#line 90
              return __nesc_temp;
            }
          }
        }
#line 92
      {
        unsigned char __nesc_temp = 
#line 92
        FAIL;

        {
#line 92
          __nesc_atomic_end(__nesc_atomic); 
#line 92
          return __nesc_temp;
        }
      }
    }
#line 95
    __nesc_atomic_end(__nesc_atomic); }
}

# 97 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(0U);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 53 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
static inline error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__send(message_t *msg)
{
  if (/*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__immediateRequest() == SUCCESS) 
    {
      error_t result = /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(msg);

#line 58
      if (result != SUCCESS) {
        /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release();
        }
      return result;
    }

  /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending = msg;
  return /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__request();
}

# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 108 "../../lib/net/orinoco/OrinocoQueueP.nc"
static inline void OrinocoQueueP__sendTask__runTask(void )
#line 108
{
  OrinocoQueueP__sendNext(FALSE);
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t OrinocoQueueP__selfReceiveTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(OrinocoQueueP__selfReceiveTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 50 "/opt/tinyos-2.x/tos/interfaces/Queue.nc"
inline static bool OrinocoQueueP__SendQueue__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*OrinocoP.SendQueue*/QueueC__0__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 71 "../../lib/net/orinoco/OrinocoQueueP.nc"
static inline void OrinocoQueueP__selfReceiveTask__runTask(void )
#line 71
{
  mq_entry_t qe;


  if (OrinocoQueueP__SendQueue__empty()) {
      return;
    }



  qe = OrinocoQueueP__SendQueue__head();
  OrinocoQueueP__MsgPool__put(qe.msg);




  OrinocoQueueP__selfReceiveTask__postTask();
}

# 103 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 103
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 58 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 129 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 268 "../../../LocalTimeSyncedMicro/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__stop(void )
#line 268
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 269
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__set = FALSE;
#line 269
    __nesc_atomic_end(__nesc_atomic); }
}

# 73 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 73
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__stop();
#line 73
}
#line 73
# 71 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 72
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 78 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 78
}
#line 78
# 100 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 135
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 374 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SplitControl__stop(void )
#line 374
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 375
    {
      if (SerialP__rxState == SerialP__RXSTATE_NOSYNC) {
          SerialP__rxState = SerialP__RXSTATE_INACTIVE;
        }
    }
#line 379
    __nesc_atomic_end(__nesc_atomic); }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 380
    {
      if (SerialP__txState == SerialP__TXSTATE_IDLE) {
          SerialP__txState = SerialP__TXSTATE_INACTIVE;
        }
    }
#line 384
    __nesc_atomic_end(__nesc_atomic); }
  SerialP__testOff();
  return SUCCESS;
}

# 130 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t SinkP__SerialControl__stop(void ){
#line 130
  unsigned char __nesc_result;
#line 130

#line 130
  __nesc_result = SerialP__SplitControl__stop();
#line 130

#line 130
  return __nesc_result;
#line 130
}
#line 130
# 125 "SinkP.nc"
static inline void SinkP__AliveTimer__fired(void )
#line 125
{




  if (SinkP__uartFull) {
      SinkP__SerialControl__stop();
    }
}

# 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t OrinocoForwardLayerP__SubAMSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__send(ORINOCO_AM_DATA, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 95 "../../lib/net/orinoco/OrinocoForwardLayerP.nc"
static inline void OrinocoForwardLayerP__Timer__fired(void )
#line 95
{
  error_t error;

  for (; 0; ) ;

  error = OrinocoForwardLayerP__SubAMSend__send(OrinocoForwardLayerP__txDst_, OrinocoForwardLayerP__txBuf_, OrinocoForwardLayerP__txLen_);
  if (error == SUCCESS) {
      OrinocoForwardLayerP__state_ = OrinocoForwardLayerP__STATE_SEND;
    }
  else 
#line 103
    {
      OrinocoForwardLayerP__txError_ = error;
      OrinocoForwardLayerP__doneTask__postTask();
    }
}

# 23 "../../lib/net/orinoco/OrinocoPathCostHopCountP.nc"
static inline void OrinocoPathCostHopCountP__OrinocoPathCost__reviseCost(void )
#line 23
{


  if (OrinocoPathCostHopCountP__altCost_ != ORINOCO_PATHCOST_INF && OrinocoPathCostHopCountP__curCost_ != ORINOCO_PATHCOST_INF) {
      OrinocoPathCostHopCountP__curCost_ = (OrinocoPathCostHopCountP__curCost_ + OrinocoPathCostHopCountP__altCost_ + 1) / 2;
    }
  else 
#line 28
    {
      OrinocoPathCostHopCountP__curCost_ = ORINOCO_PATHCOST_INF;
    }
}

# 10 "../../lib/net/orinoco/OrinocoPathCost.nc"
inline static void OrinocoRadioP__PathCost__reviseCost(void ){
#line 10
  OrinocoPathCostHopCountP__OrinocoPathCost__reviseCost();
#line 10
}
#line 10
# 409 "../../lib/net/orinoco/OrinocoRadioP.nc"
static inline void OrinocoRadioP__Timer__fired(void )
#line 409
{
  for (; 0; ) ;









  if (OrinocoRadioP__state_ == OrinocoRadioP__FORWARD_SUBSEND || OrinocoRadioP__state_ == OrinocoRadioP__FORWARD_SUBSEND_DONE) {
      return;
    }


  if (OrinocoRadioP__state_ == OrinocoRadioP__SLEEP) {


      if (OrinocoRadioP__txDataMsg_ == (void *)0) {

          if (OrinocoRadioP__PathCost__getCost() == ORINOCO_PATHCOST_INF) {
              OrinocoRadioP__state_ = OrinocoRadioP__SLEEP_TIMER;
            }
          else 
#line 432
            {
              OrinocoRadioP__state_ = OrinocoRadioP__RECEIVE_SUBSTART;
            }
        }
      else 
#line 435
        {

          OrinocoRadioP__state_ = OrinocoRadioP__FORWARD_SUBSTART;
        }
    }
  else {
    if (OrinocoRadioP__state_ == OrinocoRadioP__FORWARD) {
        ;



        OrinocoRadioP__PathCost__reviseCost();


        OrinocoRadioP__ps_.numTxTimeouts++;
        if (OrinocoRadioP__PathCost__getCost() == ORINOCO_PATHCOST_INF) {
            OrinocoRadioP__ps_.numMetricResets++;
          }







        if (OrinocoRadioP__PathCost__getCost() == ORINOCO_PATHCOST_INF) {








            OrinocoRadioP__state_ = OrinocoRadioP__FORWARD_TIMER;
          }
        else 
#line 470
          {
            OrinocoRadioP__state_ = OrinocoRadioP__FORWARD_TIMER;
          }
      }
    else {
      if (OrinocoRadioP__state_ == OrinocoRadioP__RECEIVE) {
          ;
          OrinocoRadioP__state_ = OrinocoRadioP__RECEIVE_DONE;
        }
      }
    }
#line 480
  OrinocoRadioP__transition__postTask();
}

# 136 "../../../EAJobs/lib/EASchedulerP.nc"
static inline void EASchedulerP__DispatchTimer__fired(void )
#line 136
{






  EASchedulerP__dispatch__postTask();
}

# 204 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x2b010a396da0){
#line 83
  switch (arg_0x2b010a396da0) {
#line 83
    case 0U:
#line 83
      SinkP__AliveTimer__fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      OrinocoForwardLayerP__Timer__fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      OrinocoRadioP__Timer__fired();
#line 83
      break;
#line 83
    case 3U:
#line 83
      EASchedulerP__DispatchTimer__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x2b010a396da0);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 194 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP__Compare__set(uint8_t t)
#line 194
{
  /* atomic removed: atomic calls only */
  {
    while (* (volatile uint8_t *)0xB6 & (1 << 3)) 
      ;
    * (volatile uint8_t *)0xB3 = t;
  }
}

# 54 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__size_type t){
#line 54
  HplAtm1281Timer2AsyncP__Compare__set(t);
#line 54
}
#line 54
# 99 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline uint8_t HplAtm1281Timer2AsyncP__Timer__get(void )
#line 99
{
#line 99
  return * (volatile uint8_t *)0xB2;
}

# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm1281Timer2AsyncP__Timer__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 278 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline int HplAtm1281Timer2AsyncP__TimerAsync__compareABusy(void )
#line 278
{
  return (* (volatile uint8_t *)0xB6 & (1 << 3)) != 0;
}

# 86 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__compareABusy(void ){
#line 86
  int __nesc_result;
#line 86

#line 86
  __nesc_result = HplAtm1281Timer2AsyncP__TimerAsync__compareABusy();
#line 86

#line 86
  return __nesc_result;
#line 86
}
#line 86
# 122 "../../../LocalTimeSyncedMicro/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setOcr2A(uint8_t n)
#line 122
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__compareABusy()) 
    ;

  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base - 1;
    }
#line 133
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__set(n);
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 82
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 78
}
#line 78
# 139 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 83
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 83
}
#line 83
# 290 "../../../LocalTimeSyncedMicro/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getAlarm(void )
#line 290
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 291
    {
      unsigned long __nesc_temp = 
#line 291
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__dt;

      {
#line 291
        __nesc_atomic_end(__nesc_atomic); 
#line 291
        return __nesc_temp;
      }
    }
#line 293
    __nesc_atomic_end(__nesc_atomic); }
}

# 116 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 116
  unsigned long __nesc_result;
#line 116

#line 116
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
# 74 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 59 "SinkP.nc"
static inline void SinkP__successBlink(void )
#line 59
{
}

# 538 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__startSend(uint8_t b)
#line 538
{
  bool not_busy = FALSE;

#line 540
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 540
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
#line 542
          EOFF;

          {
#line 542
            __nesc_atomic_end(__nesc_atomic); 
#line 542
            return __nesc_temp;
          }
        }
    }
#line 545
    __nesc_atomic_end(__nesc_atomic); }
#line 544
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 544
    {
      if (SerialP__txBuf[SerialP__TX_DATA_INDEX].state == SerialP__BUFFER_AVAILABLE) {
          SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_FILLING;
          SerialP__txBuf[SerialP__TX_DATA_INDEX].buf = b;
          not_busy = TRUE;
        }
    }
#line 550
    __nesc_atomic_end(__nesc_atomic); }
  if (not_busy) {
      SerialP__MaybeScheduleTx();
      return SUCCESS;
    }
  return EBUSY;
}

# 62 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = SerialP__SendBytePacket__startSend(first_byte);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen)
#line 54
{
  return upperLen + sizeof(serial_header_t );
}

# 361 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen)
#line 362
{
  return 0;
}

# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(uart_id_t arg_0x2b010b1c2308, message_t *msg, uint8_t upperLen){
#line 23
  unsigned char __nesc_result;
#line 23

#line 23
  switch (arg_0x2b010b1c2308) {
#line 23
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 23
      __nesc_result = SerialPacketInfoActiveMessageP__Info__dataLinkLength(msg, upperLen);
#line 23
      break;
#line 23
    default:
#line 23
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(arg_0x2b010b1c2308, msg, upperLen);
#line 23
      break;
#line 23
    }
#line 23

#line 23
  return __nesc_result;
#line 23
}
#line 23
# 111 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len)
#line 111
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState != /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE) {
      return EBUSY;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 116
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(id);
      if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex > sizeof(message_header_t )) {
          {
            unsigned char __nesc_temp = 
#line 119
            ESIZE;

            {
#line 119
              __nesc_atomic_end(__nesc_atomic); 
#line 119
              return __nesc_temp;
            }
          }
        }
#line 122
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (uint8_t *)msg;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_DATA;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = id;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;






      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(id, msg, len) + /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
    }
#line 134
    __nesc_atomic_end(__nesc_atomic); }
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(id) == SUCCESS) {
      return SUCCESS;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
      return FAIL;
    }
}

# 75 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(TOS_SERIAL_ACTIVE_MESSAGE_ID, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 131 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void )
#line 131
{
  return 80;
}

#line 68
static inline error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 70
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return ESIZE;
    }

  __nesc_hton_uint16(header->dest.nxdata, dest);





  __nesc_hton_uint8(header->type.nxdata, id);
  __nesc_hton_uint8(header->length.nxdata, len);

  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(msg, len);
}

# 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t SinkP__UartSend__send(am_id_t arg_0x2b0109fe49a0, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(arg_0x2b0109fe49a0, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 61 "/opt/tinyos-2.x/tos/lib/timer/LocalTime.nc"
inline static uint32_t OrinocoQueueP__LocalTimeRadio__get(void ){
#line 61
  unsigned long __nesc_result;
#line 61

#line 61
  __nesc_result = /*LocalTimeSyncedMicroC.CounterToLocalMicroC*/CounterToLocalMicroC__0__LocalTime__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
inline static uint32_t OrinocoQueueP__LocalTimeMilli__get(void ){
#line 61
  unsigned long __nesc_result;
#line 61

#line 61
  __nesc_result = /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 430 "../../lib/net/orinoco/OrinocoQueueP.nc"
static inline uint32_t OrinocoQueueP__PacketDelayMilli__creationTime(message_t *msg)
#line 430
{





  uint32_t tm;
#line 436
  uint32_t tr;

#line 437
  tm = OrinocoQueueP__LocalTimeMilli__get();
  tr = OrinocoQueueP__LocalTimeRadio__get();

  return tm - ((tr - __nesc_ntoh_uint32(OrinocoQueueP__getHeader(msg)->timestamp.absolute.nxdata)) >> 10);
}

# 16 "../../interfaces/PacketDelay.nc"
inline static uint32_t SinkP__PacketDelayMilli__creationTime(message_t *msg){
#line 16
  unsigned long __nesc_result;
#line 16

#line 16
  __nesc_result = OrinocoQueueP__PacketDelayMilli__creationTime(msg);
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
# 126 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void * SinkP__RadioPacket__getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = OrinocoQueueP__Packet__getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 424 "../../lib/net/orinoco/OrinocoQueueP.nc"
static inline uint32_t OrinocoQueueP__PacketDelayMilli__delay(message_t *msg)
#line 424
{


  return (OrinocoQueueP__PacketTimeStampRadio__timestamp(msg) - __nesc_ntoh_uint32(OrinocoQueueP__getHeader(msg)->timestamp.absolute.nxdata)) >> 10;
}

# 8 "../../interfaces/PacketDelay.nc"
inline static uint32_t SinkP__PacketDelayMilli__delay(message_t *msg){
#line 8
  unsigned long __nesc_result;
#line 8

#line 8
  __nesc_result = OrinocoQueueP__PacketDelayMilli__delay(msg);
#line 8

#line 8
  return __nesc_result;
#line 8
}
#line 8
# 163 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setSource(message_t *amsg, am_addr_t addr)
#line 163
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 165
  __nesc_hton_uint16(header->src.nxdata, addr);
}

# 121 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void SinkP__UartAMPacket__setSource(message_t * amsg, am_addr_t addr){
#line 121
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setSource(amsg, addr);
#line 121
}
#line 121
# 117 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__clear(message_t *msg)
#line 117
{
  memset(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg), 0, sizeof(serial_header_t ));
  return;
}

# 65 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void SinkP__UartPacket__clear(message_t * msg){
#line 65
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__clear(msg);
#line 65
}
#line 65
# 398 "../../lib/net/orinoco/OrinocoQueueP.nc"
static inline am_addr_t OrinocoQueueP__CollectionPacket__getOrigin(message_t *msg)
#line 398
{
  return __nesc_ntoh_uint16(OrinocoQueueP__getHeader(msg)->origin.nxdata);
}

# 43 "/opt/tinyos-2.x/tos/lib/net/CollectionPacket.nc"
inline static am_addr_t SinkP__CollectionPacket__getOrigin(message_t *msg){
#line 43
  unsigned short __nesc_result;
#line 43

#line 43
  __nesc_result = OrinocoQueueP__CollectionPacket__getOrigin(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 406 "../../lib/net/orinoco/OrinocoQueueP.nc"
static inline collection_id_t OrinocoQueueP__CollectionPacket__getType(message_t *msg)
#line 406
{
  return __nesc_ntoh_uint8(OrinocoQueueP__getHeader(msg)->type.nxdata);
}

# 46 "/opt/tinyos-2.x/tos/lib/net/CollectionPacket.nc"
inline static collection_id_t SinkP__CollectionPacket__getType(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = OrinocoQueueP__CollectionPacket__getType(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 78 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t SinkP__RadioPacket__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = OrinocoQueueP__Packet__payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 168 "SinkP.nc"
static inline void SinkP__uartSendTask__runTask(void )
#line 168
{
  uint8_t len;
  am_id_t id;
  am_addr_t src;
  message_t *msg;

#line 173
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 173
    {
      if (SinkP__uartIn == SinkP__uartOut && !SinkP__uartFull) {
          SinkP__uartBusy = FALSE;
          {
#line 176
            __nesc_atomic_end(__nesc_atomic); 
#line 176
            return;
          }
        }
    }
#line 179
    __nesc_atomic_end(__nesc_atomic); }
  msg = SinkP__uartQueue[SinkP__uartOut];
  len = SinkP__RadioPacket__payloadLength(msg) + sizeof(orinoco_data_header_t ) + sizeof(uint32_t );
  id = SinkP__CollectionPacket__getType(msg);
  src = SinkP__CollectionPacket__getOrigin(msg);
  SinkP__UartPacket__clear(msg);
  SinkP__UartAMPacket__setSource(msg, src);



  __nesc_hton_uint32((* (nx_uint32_t *)(SinkP__RadioPacket__getPayload(msg, len) + len - sizeof(uint32_t ))).nxdata, SinkP__PacketDelayMilli__delay(msg));
  __nesc_hton_uint32((* (nx_uint32_t *)(SinkP__RadioPacket__getPayload(msg, len) + len - 2 * sizeof(uint32_t ))).nxdata, SinkP__PacketDelayMilli__creationTime(msg));

  if (SinkP__UartSend__send(id, AM_BROADCAST_ADDR, SinkP__uartQueue[SinkP__uartOut], len) == SUCCESS) {
      SinkP__successBlink();
    }
  else 
#line 194
    {
      SinkP__failBlink();
      SinkP__uartSendTask__postTask();
    }
}

# 181 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP__Compare__start(void )
#line 181
{
#line 181
  * (volatile uint8_t *)0x70 |= 1 << 1;
}

# 65 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__start(void ){
#line 65
  HplAtm1281Timer2AsyncP__Compare__start();
#line 65
}
#line 65
# 82 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlB(uint8_t control){
#line 82
  HplAtm1281Timer2AsyncP__TimerCtrl__setControlB(control);
#line 82
}
#line 82
# 131 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP__TimerCtrl__setControlA(uint8_t x)
#line 131
{
  while (* (volatile uint8_t *)0xB6 & (1 << 1)) 
    ;
  * (volatile uint8_t *)0xB0 = ((Atm128_TCCR2A_t )x).flat;
}

# 81 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlA(uint8_t control){
#line 81
  HplAtm1281Timer2AsyncP__TimerCtrl__setControlA(control);
#line 81
}
#line 81
# 266 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP__TimerAsync__setTimer2Asynchronous(void )
#line 266
{
  * (volatile uint8_t *)0xB6 |= 1 << 5;
}

# 68 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__setTimer2Asynchronous(void ){
#line 68
  HplAtm1281Timer2AsyncP__TimerAsync__setTimer2Asynchronous();
#line 68
}
#line 68
# 90 "../../../LocalTimeSyncedMicro/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Init__init(void )
#line 90
{
  /* atomic removed: atomic calls only */
  {
    Atm128_TCCR2A_t x;
    Atm128_TCCR2B_t y;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__setTimer2Asynchronous();

    x.flat = 0;
    x.bits.wgm21 = 1;



    * (volatile uint8_t *)(0x04 + 0x20) |= 1 << 4;
    x.bits.coma = ATM128_TIMER_COMPARE_TOGGLE;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlA(x.flat);

    y.flat = 0;
    y.bits.cs = 3;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlB(y.flat);

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt();
  return SUCCESS;
}

# 57 "../../lib/net/orinoco/OrinocoCacheC.nc"
static inline void /*OrinocoP.PacketHistory*/OrinocoCacheC__0__Cache__flush(void )
#line 57
{
  /*OrinocoP.PacketHistory*/OrinocoCacheC__0__newest = 0;
  /*OrinocoP.PacketHistory*/OrinocoCacheC__0__len = 0;
}

# 65 "/opt/tinyos-2.x/tos/interfaces/Cache.nc"
inline static void OrinocoQueueP__PacketHistory__flush(void ){
#line 65
  /*OrinocoP.PacketHistory*/OrinocoCacheC__0__Cache__flush();
#line 65
}
#line 65
# 149 "../../lib/net/orinoco/OrinocoQueueP.nc"
static inline error_t OrinocoQueueP__Init__init(void )
#line 149
{

  OrinocoQueueP__PacketHistory__flush();

  return SUCCESS;
}

# 55 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init(void )
#line 55
{
  memset(/*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ, /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ);
  return SUCCESS;
}

# 63 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init(void )
{
  /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber = TOS_NODE_ID << 4;
  return SUCCESS;
}

# 55 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodP.nc"
static inline error_t NeighborhoodP__Init__init(void )
{
  uint8_t i;

  for (i = 0; i < 5; ++i) 
    NeighborhoodP__nodes[i] = AM_BROADCAST_ADDR;

  return SUCCESS;
}

# 302 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init(void )
{
  uint8_t i;

  for (i = 0; i < /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE; ++i) 
    /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[i] = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueData + i;

  return SUCCESS;
}

# 88 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t RF230DriverLayerP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__request(0U);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 236 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayerP.nc"
static inline error_t RF230DriverLayerP__SoftwareInit__init(void )
{

  return RF230DriverLayerP__SpiResource__request();
}

# 55 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init(void )
#line 55
{
  memset(/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY, sizeof /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ);
  return SUCCESS;
}

# 55 "/opt/tinyos-2.x/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC__Init__init(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  RandomMlcgC__seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 55 "../../lib/net/orinoco/OrinocoConfigP.nc"
static inline void OrinocoConfigP__updateAbsDeviation(void )
#line 55
{
  OrinocoConfigP__Tsdev_ = (uint16_t )((uint32_t )OrinocoConfigP__Ts_ * OrinocoConfigP__alpha_ / 100);
}

static inline error_t OrinocoConfigP__Init__init(void )
#line 59
{
  OrinocoConfigP__Ts_ = ORINOCO_DFLT_WAKEUP_INTERVAL;
  OrinocoConfigP__alpha_ = ORINOCO_DFLT_WAKEUP_DEVIATION;
  OrinocoConfigP__Tdmin_ = ORINOCO_DFLT_CONGESTION_WIN_MIN;
  OrinocoConfigP__Tdmax_ = ORINOCO_DFLT_CONGESTION_WIN_MAX;
  OrinocoConfigP__waitIntvl_ = ORINOCO_DFLT_NUM_WAITING_INTVL;
  OrinocoConfigP__qmLvl_ = ORINOCO_DFLT_MIN_QUEUE_LEVEL;
  OrinocoConfigP__updateAbsDeviation();
  return SUCCESS;
}

# 65 "/opt/tinyos-2.x/tos/system/PoolP.nc"
static inline error_t /*OrinocoP.MsgPool.PoolP*/PoolP__0__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 1; i++) {
      /*OrinocoP.MsgPool.PoolP*/PoolP__0__queue[i] = &/*OrinocoP.MsgPool.PoolP*/PoolP__0__pool[i];
    }
  /*OrinocoP.MsgPool.PoolP*/PoolP__0__free = 1;
  /*OrinocoP.MsgPool.PoolP*/PoolP__0__index = 0;
  return SUCCESS;
}

# 216 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline void SerialP__ackInit(void )
#line 216
{
  SerialP__ackQ.writePtr = SerialP__ackQ.readPtr = 0;
}

#line 207
static __inline void SerialP__rxInit(void )
#line 207
{
  SerialP__rxBuf.writePtr = SerialP__rxBuf.readPtr = 0;
  SerialP__rxState = SerialP__RXSTATE_INACTIVE;
  SerialP__rxByteCnt = 0;
  SerialP__rxProto = 0;
  SerialP__rxSeqno = 0;
  SerialP__rxCRC = 0;
}

#line 195
static __inline void SerialP__txInit(void )
#line 195
{
  uint8_t i;

  /* atomic removed: atomic calls only */
#line 197
  for (i = 0; i < SerialP__TX_BUFFER_COUNT; i++) SerialP__txBuf[i].state = SerialP__BUFFER_AVAILABLE;
  SerialP__txState = SerialP__TXSTATE_INACTIVE;
  SerialP__txByteCnt = 0;
  SerialP__txProto = 0;
  SerialP__txSeqno = 0;
  SerialP__txCRC = 0;
  SerialP__txPending = FALSE;
  SerialP__txIndex = 0;
}

#line 220
static inline error_t SerialP__Init__init(void )
#line 220
{

  SerialP__txInit();
  SerialP__rxInit();
  SerialP__ackInit();

  return SUCCESS;
}

# 69 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void )
#line 69
{
  if (PLATFORM_BAUDRATE == 19200UL) {
    /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time = 200;
    }
  else {
#line 72
    if (PLATFORM_BAUDRATE == 57600UL) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time = 68;
      }
    }
#line 74
  return SUCCESS;
}

# 154 "/opt/tinyos-2.x/tos/platforms/iris/MeasureClockC.nc"
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate)
#line 154
{

  return ((uint32_t )MeasureClockC__cycles << 12) / baudrate - 1;
}

# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static uint16_t HplAtm128UartP__Atm128Calibrate__baudrateRegister(uint32_t baudrate){
#line 60
  unsigned short __nesc_result;
#line 60

#line 60
  __nesc_result = MeasureClockC__Atm128Calibrate__baudrateRegister(baudrate);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 224 "/opt/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart1Init__init(void )
#line 224
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr1;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr1 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)0xCC = ubrr1;
  * (volatile uint8_t *)0xCD = ubrr1 >> 8;
  * (volatile uint8_t *)0xC8 = stts.flat;
  * (volatile uint8_t *)0xCA = mode.flat;
  * (volatile uint8_t *)0XC9 = ctrl.flat;

  return SUCCESS;
}

#line 130
static inline error_t HplAtm128UartP__Uart0Init__init(void )
#line 130
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr0;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr0 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)0xC4 = ubrr0;
  * (volatile uint8_t *)0xC5 = ubrr0 >> 8;
  * (volatile uint8_t *)0xC0 = stts.flat;
  * (volatile uint8_t *)0xC2 = mode.flat;
  * (volatile uint8_t *)0XC1 = ctrl.flat;

  return SUCCESS;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplAtm128UartP__Uart0Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, HplAtm128UartP__Uart1Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, SerialP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*OrinocoP.MsgPool.PoolP*/PoolP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, OrinocoConfigP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, RandomMlcgC__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, RF230DriverLayerP__SoftwareInit__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init());
#line 62
  __nesc_result = ecombine(__nesc_result, NeighborhoodP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, OrinocoQueueP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 272 "../../lib/net/orinoco/OrinocoRadioP.nc"
static inline error_t OrinocoRadioP__SplitControl__start(void )
#line 272
{


  if (OrinocoRadioP__state_ == OrinocoRadioP__OFF) {



      OrinocoRadioP__state_ = OrinocoRadioP__OFF_START;
      OrinocoRadioP__transition__postTask();
      return SUCCESS;
    }
  else {
    if ((OrinocoRadioP__state_ == OrinocoRadioP__OFF_STOP || OrinocoRadioP__state_ == OrinocoRadioP__OFF_SUBSTOP) || OrinocoRadioP__state_ == OrinocoRadioP__OFF_SUBSTOP_DONE) {
        return EBUSY;
      }
    else {
        return EALREADY;
      }
    }
}

# 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t SinkP__RadioControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = OrinocoRadioP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 158 "../../lib/net/orinoco/OrinocoQueueP.nc"
static inline error_t OrinocoQueueP__StdControl__start(void )
#line 158
{
  OrinocoQueueP__isForwarding_ = TRUE;
  OrinocoQueueP__sendNext(FALSE);
  return SUCCESS;
}

# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t SinkP__RoutingControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = OrinocoQueueP__StdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 171 "../../lib/net/orinoco/OrinocoQueueP.nc"
static inline error_t OrinocoQueueP__RootControl__setRoot(void )
#line 171
{
  OrinocoQueueP__isRoot_ = TRUE;
  return SUCCESS;
}

# 41 "/opt/tinyos-2.x/tos/lib/net/RootControl.nc"
inline static error_t SinkP__RootControl__setRoot(void ){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = OrinocoQueueP__RootControl__setRoot();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 70 "../../lib/net/orinoco/OrinocoConfigP.nc"
static inline void OrinocoConfigP__OrinocoConfig__setWakeUpInterval(uint16_t Ts)
#line 70
{
  OrinocoConfigP__Ts_ = Ts;
  OrinocoConfigP__updateAbsDeviation();
}

# 44 "../../lib/net/orinoco/OrinocoConfig.nc"
inline static void SinkP__OrinocoConfig__setWakeUpInterval(uint16_t Ts){
#line 44
  OrinocoConfigP__OrinocoConfig__setWakeUpInterval(Ts);
#line 44
}
#line 44
# 100 "SinkP.nc"
static inline void SinkP__Boot__booted(void )
#line 100
{
  uint8_t i;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 103
    {
      for (i = 0; i < SinkP__UART_QUEUE_LEN; i++) 
        SinkP__uartQueue[i] = &SinkP__uartQueueBufs[i];
      SinkP__uartIn = SinkP__uartOut = 0;
      SinkP__uartBusy = FALSE;
      SinkP__uartFull = TRUE;
    }
#line 109
    __nesc_atomic_end(__nesc_atomic); }


  SinkP__OrinocoConfig__setWakeUpInterval(256);

  SinkP__RootControl__setRoot();
  SinkP__RoutingControl__start();
  SinkP__RadioControl__start();

  SinkP__SerialControl__start();
}

# 15 "../../../EAJobs/lib/EAEnergyManagerP.nc"
static inline void EAEnergyManagerP__Boot__booted(void )
#line 15
{
  uint8_t i;



  for (i = 0; i < EAEnergyManagerP__NUM_JOBS; i++) {
      ea_generic_jobconfig_t *jc = EAEnergyManagerP__EAJobConfig__getConfig(i);

#line 22
      EAEnergyManagerP__EAScheduler__scheduleJob(i, ((ea_periodic_jobconfig_t *)jc)->period);
    }
}

# 60 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  EAEnergyManagerP__Boot__booted();
#line 60
  SinkP__Boot__booted();
#line 60
}
#line 60
# 219 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline mcu_power_t HplAtm1281Timer2AsyncP__McuPowerOverride__lowestState(void )
#line 219
{
  uint8_t diff;


  if (* (volatile uint8_t *)0x70 & ((1 << 1) | (1 << 0))) {




      while (* (volatile uint8_t *)0xB6 & (((1 << 4) | (1 << 3)) | (1 << 1))) 
        ;
      diff = * (volatile uint8_t *)0xB3 - * (volatile uint8_t *)0xB2;
      if (diff < EXT_STANDBY_T0_THRESHOLD || 
      * (volatile uint8_t *)0xB2 > 256 - EXT_STANDBY_T0_THRESHOLD) {
        return ATM128_POWER_EXT_STANDBY;
        }
#line 234
      return ATM128_POWER_SAVE;
    }
  else {
      return ATM128_POWER_DOWN;
    }
}

# 62 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplAtm1281Timer2AsyncP__McuPowerOverride__lowestState();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 107 "../../../LocalTimeSyncedMicro/chips/atm1281/McuSleepC.nc"
static inline mcu_power_t McuSleepC__getPowerState(void )
#line 107
{









  if (* (volatile uint8_t *)0x6E & ((1 << 1) | (1 << 2)) || 
  * (volatile uint8_t *)0x6F & ((((1 << 5) | (1 << 1)) | (1 << 2)) | (1 << 3))) 




    {
      return ATM128_POWER_IDLE;
    }
  else {
    if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x2C + 0x20) & (1 << 7)) {
        return ATM128_POWER_IDLE;
      }
    else {
      if (* (volatile uint8_t *)0XC1 & (((1 << 6) | (1 << 7)) | (1 << 5))) {
          return ATM128_POWER_IDLE;
        }
      else {
#line 134
        if (* (volatile uint8_t *)0XC9 & (((1 << 6) | (1 << 7)) | (1 << 5))) {
            return ATM128_POWER_IDLE;
          }
        else {
          if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0xBC & (1 << 2)) {
              return ATM128_POWER_IDLE;
            }
          else {
            if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0x7A & (1 << 7)) {
                return ATM128_POWER_ADC_NR;
              }
            else {
                return ATM128_POWER_DOWN;
              }
            }
          }
        }
      }
    }
}

# 142 "/opt/tinyos-2.x/tos/chips/atm1281/atm128hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 142
{
  return m1 < m2 ? m1 : m2;
}

# 150 "../../../LocalTimeSyncedMicro/chips/atm1281/McuSleepC.nc"
static inline void McuSleepC__McuSleep__sleep(void )
#line 150
{
  uint8_t powerState = 0;

  powerState = mcombine(McuSleepC__getPowerState(), McuSleepC__McuPowerOverride__lowestState());





  * (volatile uint8_t *)(0x33 + 0x20) = ((
  * (volatile uint8_t *)(0x33 + 0x20) & 0xf0) | (1 << 0)) | __extension__ ({
#line 160
    uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC__atm128PowerBits[powerState];
#line 160
    uint8_t __result;

#line 160
     __asm ("lpm %0, Z""\n\t" : "=r"(__result) : "z"(__addr16));__result;
  }
  );
#line 161
   __asm volatile ("sei");

   __asm volatile ("sleep" :  :  : "memory");
   __asm volatile ("cli");

  * (volatile uint8_t *)(0x33 + 0x20) &= ~(1 << 0);
}

# 76 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 76
  McuSleepC__McuSleep__sleep();
#line 76
}
#line 76
# 78 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

#line 83
      SchedulerBasicP__m_head = SchedulerBasicP__m_next[SchedulerBasicP__m_head];
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_next[id] = SchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP__NO_TASK;
    }
}

#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
#line 161
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

# 72 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 72
  SchedulerBasicP__Scheduler__taskLoop();
#line 72
}
#line 72
# 204 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static __inline void HplAtm1281Timer2AsyncP__stabiliseTimer2(void )
#line 204
{
  * (volatile uint8_t *)0xB0 = * (volatile uint8_t *)0xB0;
  while (* (volatile uint8_t *)0xB6 & (1 << 1)) 
    ;
}

# 58 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__overflow(void ){
#line 82
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 82
}
#line 82
# 90 "/opt/tinyos-2.x/tos/chips/atm1281/atm128hardware.h"
static __inline  void __nesc_enable_interrupt()
#line 90
{
   __asm volatile ("sei");}

# 126 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline uint8_t HplAtm1281Timer2AsyncP__TimerCtrl__getControlB(void )
#line 126
{
  return * (volatile uint8_t *)0xB1;
}

# 80 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
inline static uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__getControlB(void ){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = HplAtm1281Timer2AsyncP__TimerCtrl__getControlB();
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 191 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline uint8_t HplAtm1281Timer2AsyncP__Compare__get(void )
#line 191
{
#line 191
  return * (volatile uint8_t *)0xB3;
}

# 48 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__get(void ){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = HplAtm1281Timer2AsyncP__Compare__get();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 198 "../../../LocalTimeSyncedMicro/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__fired(void )
#line 198
{
  int overflowed;





  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base;



  {
    Atm128_TCCR2B_t y;

#line 212
    y.flat = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__getControlB();
    y.bits.foc2a = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlB(y.flat);
    y.bits.foc2a = 0;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlB(y.flat);
  }

  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__overflow();
    }
}

# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer2AsyncP__Compare__fired(void ){
#line 58
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__fired();
#line 58
}
#line 58
# 294 "../../../LocalTimeSyncedMicro/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__overflow(void )
#line 294
{
}

# 70 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm1281Timer2AsyncP__Timer__overflow(void ){
#line 70
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__overflow();
#line 70
}
#line 70
# 113 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__enableInterrupt(bool enabled){
#line 113
  HplAtm128SpiP__SPI__enableInterrupt(enabled);
#line 113
}
#line 113
# 249 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP__sendNextPart(void )
#line 249
{
  uint16_t end;
  uint16_t tmpPos;
  uint16_t myLen;
  uint8_t * tx;
  uint8_t * rx;

  /* atomic removed: atomic calls only */
#line 256
  {
    myLen = Atm128SpiP__len;
    tx = Atm128SpiP__txBuffer;
    rx = Atm128SpiP__rxBuffer;
    tmpPos = Atm128SpiP__pos;
    end = Atm128SpiP__pos + Atm128SpiP__SPI_ATOMIC_SIZE;
    end = end > Atm128SpiP__len ? Atm128SpiP__len : end;
  }

  for (; tmpPos < end - 1; tmpPos++) {
      uint8_t val;

#line 267
      if (tx != (void *)0) {
        val = Atm128SpiP__SpiByte__write(tx[tmpPos]);
        }
      else {
#line 270
        val = Atm128SpiP__SpiByte__write(0);
        }
      if (rx != (void *)0) {
          rx[tmpPos] = val;
        }
    }



  Atm128SpiP__Spi__enableInterrupt(TRUE);
  /* atomic removed: atomic calls only */
#line 280
  {
    if (tx != (void *)0) {
      Atm128SpiP__Spi__write(tx[tmpPos]);
      }
    else {
#line 284
      Atm128SpiP__Spi__write(0);
      }
    Atm128SpiP__pos = tmpPos;
  }


  return SUCCESS;
}

#line 352
static inline void Atm128SpiP__Spi__dataReady(uint8_t data)
#line 352
{
  bool again;

  /* atomic removed: atomic calls only */
#line 355
  {
    if (Atm128SpiP__rxBuffer != (void *)0) {
        Atm128SpiP__rxBuffer[Atm128SpiP__pos] = data;
      }

    Atm128SpiP__pos++;
  }
  Atm128SpiP__Spi__enableInterrupt(FALSE);
  /* atomic removed: atomic calls only */
  {
    again = Atm128SpiP__pos < Atm128SpiP__len;
  }

  if (again) {
      Atm128SpiP__sendNextPart();
    }
  else {
      uint8_t discard;
      uint16_t myLen;
      uint8_t * rx;
      uint8_t * tx;

      /* atomic removed: atomic calls only */
#line 377
      {
        myLen = Atm128SpiP__len;
        rx = Atm128SpiP__rxBuffer;
        tx = Atm128SpiP__txBuffer;
        Atm128SpiP__rxBuffer = (void *)0;
        Atm128SpiP__txBuffer = (void *)0;
        Atm128SpiP__len = 0;
        Atm128SpiP__pos = 0;
      }
      discard = Atm128SpiP__Spi__read();

      Atm128SpiP__SpiPacket__sendDone(tx, rx, myLen, SUCCESS);
    }
}

# 109 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void HplAtm128SpiP__SPI__dataReady(uint8_t data){
#line 109
  Atm128SpiP__Spi__dataReady(data);
#line 109
}
#line 109
# 59 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__schedule(void ){
#line 59
  TaskletC__Tasklet__schedule();
#line 59
}
#line 59
# 65 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state == /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_WAIT) {
        /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_FIRED;
        }
    }
#line 72
    __nesc_atomic_end(__nesc_atomic); }
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__schedule();
}

# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__fired(void ){
#line 78
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired();
#line 78
}
#line 78
# 172 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareA__stop(void )
#line 172
{
#line 172
  * (volatile uint8_t *)0x6F &= ~(1 << 1);
}

# 68 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop(void ){
#line 68
  HplAtm1281Timer1P__CompareA__stop();
#line 68
}
#line 68
# 119 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired(void )
#line 119
{
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop();
  ;
  __nesc_enable_interrupt();
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__fired();
}

# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer1P__CompareA__fired(void ){
#line 58
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired();
#line 58
}
#line 58
# 229 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareB__default__fired(void )
#line 229
{
}

# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer1P__CompareB__fired(void ){
#line 58
  HplAtm1281Timer1P__CompareB__default__fired();
#line 58
}
#line 58
# 233 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareC__default__fired(void )
#line 233
{
}

# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer1P__CompareC__fired(void ){
#line 58
  HplAtm1281Timer1P__CompareC__default__fired();
#line 58
}
#line 58
# 702 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__IRQ__captured(uint16_t time)
{
  for (; 0; ) ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      RF230DriverLayerP__capturedTime = time;
      RF230DriverLayerP__radioIrq = TRUE;
    }
#line 710
    __nesc_atomic_end(__nesc_atomic); }

  RF230DriverLayerP__Tasklet__schedule();
}

# 61 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static void HplRF230P__IRQ__captured(uint16_t time){
#line 61
  RF230DriverLayerP__IRQ__captured(time);
#line 61
}
#line 61
# 219 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline uint16_t HplAtm1281Timer1P__Capture__get(void )
#line 219
{
#line 219
  return * (volatile uint16_t *)0x86;
}

# 47 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static HplRF230P__Capture__size_type HplRF230P__Capture__get(void ){
#line 47
  unsigned short __nesc_result;
#line 47

#line 47
  __nesc_result = HplAtm1281Timer1P__Capture__get();
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 64 "/opt/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline void HplRF230P__Capture__captured(uint16_t time)
{
  time = HplRF230P__Capture__get();
  HplRF230P__IRQ__captured(time);
}

# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplAtm1281Timer1P__Capture__captured(HplAtm1281Timer1P__Capture__size_type t){
#line 60
  HplRF230P__Capture__captured(t);
#line 60
}
#line 60
# 126 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow(void )
#line 126
{
}

# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void )
#line 60
{
}

# 58 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void )
{
}

# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__overflow(void ){
#line 82
  /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow();
#line 82
}
#line 82
# 133 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__m_upper++;
      if ((/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__m_upper & /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
        /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__overflow();
        }
    }
#line 141
    __nesc_atomic_end(__nesc_atomic); }
}

# 28 "../../../LocalTimeSyncedMicro/chips/atm1281/timer/CounterToLocalMicroC.nc"
static inline void /*LocalTimeSyncedMicroC.CounterToLocalMicroC*/CounterToLocalMicroC__0__Counter__overflow(void )
#line 28
{
  /* atomic removed: atomic calls only */
  {
#line 30
    /*LocalTimeSyncedMicroC.CounterToLocalMicroC*/CounterToLocalMicroC__0__o += 1ULL << 32;
  }
}

# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__Counter__overflow(void ){
#line 82
  /*LocalTimeSyncedMicroC.CounterToLocalMicroC*/CounterToLocalMicroC__0__Counter__overflow();
#line 82
}
#line 82
# 133 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline void /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__CounterFrom__overflow(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__m_upper++;
      if ((/*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__m_upper & /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__OVERFLOW_MASK) == 0) {
        /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__Counter__overflow();
        }
    }
#line 141
    __nesc_atomic_end(__nesc_atomic); }
}

# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow(void ){
#line 82
  /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__CounterFrom__overflow();
#line 82
  /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow();
#line 82
}
#line 82
# 65 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void )
{
  /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow();
}

# 70 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm1281Timer1P__Timer__overflow(void ){
#line 70
  /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow();
#line 70
  /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow();
#line 70
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow();
#line 70
}
#line 70
# 397 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data)
#line 397
{
  SerialP__rx_state_machine(FALSE, data);
}

# 94 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data){
#line 94
  SerialP__SerialFrameComm__dataReceived(data);
#line 94
}
#line 94
# 394 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__delimiterReceived(void )
#line 394
{
  SerialP__rx_state_machine(TRUE, 0);
}

# 85 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void ){
#line 85
  SerialP__SerialFrameComm__delimiterReceived();
#line 85
}
#line 85
# 73 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data)
#line 73
{






  if (data == HDLC_FLAG_BYTE) {

      HdlcTranslateC__SerialFrameComm__delimiterReceived();
      return;
    }
  else {
#line 85
    if (data == HDLC_CTLESC_BYTE) {

        HdlcTranslateC__state.receiveEscape = 1;
        return;
      }
    else {
#line 90
      if (HdlcTranslateC__state.receiveEscape) {

          HdlcTranslateC__state.receiveEscape = 0;
          data = data ^ 0x20;
        }
      }
    }
#line 95
  HdlcTranslateC__SerialFrameComm__dataReceived(data);
}

# 79 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte){
#line 79
  HdlcTranslateC__UartStream__receivedByte(byte);
#line 79
}
#line 79
# 132 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 132
{
}

# 99 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(uint8_t * buf, uint16_t len, error_t error){
#line 99
  HdlcTranslateC__UartStream__receiveDone(buf, len, error);
#line 99
}
#line 99
# 133 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data)
#line 133
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos++] = data;
      if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos >= /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len) {
          uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf;

          /* atomic removed: atomic calls only */
#line 139
          {
            /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf = (void *)0;
            if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr != 3) {
                /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
                /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr = 0;
              }
          }
          /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len, SUCCESS);
        }
    }
  else {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(data);
    }
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__rxDone(uint8_t data){
#line 49
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(data);
#line 49
}
#line 49
# 401 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline bool SerialP__valid_rx_proto(uint8_t proto)
#line 401
{
  switch (proto) {
      case SERIAL_PROTO_PACKET_ACK: 
        return TRUE;
      case SERIAL_PROTO_ACK: 
        case SERIAL_PROTO_PACKET_NOACK: 
          default: 
            return FALSE;
    }
}

# 203 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void )
#line 203
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 1;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 1;
    }
}

#line 199
static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void )
#line 199
{
  return /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked : /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked;
}

#line 226
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void )
#line 226
{
  error_t result = SUCCESS;

  /* atomic removed: atomic calls only */
#line 228
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked()) {


        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
      }
    else {
        result = EBUSY;
      }
  }
  return result;
}

# 62 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
inline static error_t SerialP__ReceiveBytePacket__startPacket(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 311 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline uint16_t SerialP__rx_current_crc(void )
#line 311
{
  uint16_t crc;
  uint8_t tmp = SerialP__rxBuf.writePtr;

#line 314
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc = SerialP__rxBuf.buf[tmp] & 0x00ff;
  crc = (crc << 8) & 0xFF00;
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc |= SerialP__rxBuf.buf[tmp] & 0x00FF;
  return crc;
}

# 80 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__endPacket(error_t result){
#line 80
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(result);
#line 80
}
#line 80
# 221 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void )
#line 221
{
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? 0 : 1;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which];
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 234 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_full(void )
#line 234
{
  uint8_t tmp;
#line 235
  uint8_t tmp2;

  /* atomic removed: atomic calls only */
#line 236
  {
    tmp = SerialP__ackQ.writePtr;
    tmp2 = SerialP__ackQ.readPtr;
  }
  if (++tmp > SerialP__ACK_QUEUE_SIZE) {
#line 240
    tmp = 0;
    }
#line 241
  return tmp == tmp2;
}







static __inline void SerialP__ack_queue_push(uint8_t token)
#line 250
{
  if (!SerialP__ack_queue_is_full()) {
      /* atomic removed: atomic calls only */
#line 252
      {
        SerialP__ackQ.buf[SerialP__ackQ.writePtr] = token;
        if (++ SerialP__ackQ.writePtr > SerialP__ACK_QUEUE_SIZE) {
#line 254
          SerialP__ackQ.writePtr = 0;
          }
      }
#line 256
      SerialP__MaybeScheduleTx();
    }
}

# 67 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void )
#line 67
{
  HdlcTranslateC__state.receiveEscape = 0;
}

# 79 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static void SerialP__SerialFrameComm__resetReceive(void ){
#line 79
  HdlcTranslateC__SerialFrameComm__resetReceive();
#line 79
}
#line 79
# 244 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b)
#line 244
{
  /* atomic removed: atomic calls only */
#line 245
  {
    switch (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state) {
        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN: 
          /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(b);
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = b;
        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA: 
          if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex < sizeof(message_t )) {
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex] = b;
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex++;
            }
          else {
            }




        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE: 
          default: 
#line 266
            ;
      }
  }
}

# 69 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data){
#line 69
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(data);
#line 69
}
#line 69
# 301 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline uint8_t SerialP__rx_buffer_top(void )
#line 301
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 303
  return tmp;
}

#line 305
static __inline uint8_t SerialP__rx_buffer_pop(void )
#line 305
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 307
  if (++ SerialP__rxBuf.readPtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 307
    SerialP__rxBuf.readPtr = 0;
    }
#line 308
  return tmp;
}

#line 297
static __inline void SerialP__rx_buffer_push(uint8_t data)
#line 297
{
  SerialP__rxBuf.buf[SerialP__rxBuf.writePtr] = data;
  if (++ SerialP__rxBuf.writePtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 299
    SerialP__rxBuf.writePtr = 0;
    }
}

# 65 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putData(uint8_t data){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = HdlcTranslateC__SerialFrameComm__putData(data);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 529 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__completeSend(void )
#line 529
{
  bool ret = FAIL;

  /* atomic removed: atomic calls only */
#line 531
  {
    SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_COMPLETE;
    ret = SUCCESS;
  }
  return ret;
}

# 71 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = SerialP__SendBytePacket__completeSend();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 178 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void )
#line 178
{
  uint8_t b;
  uint8_t indx;

  /* atomic removed: atomic calls only */
#line 181
  {
    b = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex];
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex++;
    indx = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
  }
  if (indx > /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend();
      return 0;
    }
  else {
      return b;
    }
}

# 81 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static uint8_t SerialP__SendBytePacket__nextByte(void ){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 668 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__putDone(void )
#line 668
{
  {
    error_t txResult = SUCCESS;

    /* atomic removed: atomic calls only */
#line 671
    {
      switch (SerialP__txState) {

          case SerialP__TXSTATE_PROTO: 

            txResult = SerialP__SerialFrameComm__putData(SerialP__txProto);

          SerialP__txState = SerialP__TXSTATE_INFO;



          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txProto);
          break;

          case SerialP__TXSTATE_SEQNO: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txSeqno);
          SerialP__txState = SerialP__TXSTATE_INFO;
          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txSeqno);
          break;

          case SerialP__TXSTATE_INFO: 
            {
              txResult = SerialP__SerialFrameComm__putData(SerialP__txBuf[SerialP__txIndex].buf);
              SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txBuf[SerialP__txIndex].buf);
              ++SerialP__txByteCnt;

              if (SerialP__txIndex == SerialP__TX_DATA_INDEX) {
                  uint8_t nextByte;

#line 699
                  nextByte = SerialP__SendBytePacket__nextByte();
                  if (SerialP__txBuf[SerialP__txIndex].state == SerialP__BUFFER_COMPLETE || SerialP__txByteCnt >= SerialP__SERIAL_MTU) {
                      SerialP__txState = SerialP__TXSTATE_FCS1;
                    }
                  else {
                      SerialP__txBuf[SerialP__txIndex].buf = nextByte;
                    }
                }
              else {
                  SerialP__txState = SerialP__TXSTATE_FCS1;
                }
            }
          break;

          case SerialP__TXSTATE_FCS1: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txCRC & 0xff);
          SerialP__txState = SerialP__TXSTATE_FCS2;
          break;

          case SerialP__TXSTATE_FCS2: 
            txResult = SerialP__SerialFrameComm__putData((SerialP__txCRC >> 8) & 0xff);
          SerialP__txState = SerialP__TXSTATE_ENDFLAG;
          break;

          case SerialP__TXSTATE_ENDFLAG: 
            txResult = SerialP__SerialFrameComm__putDelimiter();
          SerialP__txState = SerialP__TXSTATE_ENDWAIT;
          break;

          case SerialP__TXSTATE_ENDWAIT: 
            SerialP__txState = SerialP__TXSTATE_FINISH;
          case SerialP__TXSTATE_FINISH: 
            SerialP__MaybeScheduleTx();
          break;
          case SerialP__TXSTATE_ERROR: 
            default: 
              txResult = FAIL;
          break;
        }

      if (txResult != SUCCESS) {
          SerialP__txState = SerialP__TXSTATE_ERROR;
          SerialP__MaybeScheduleTx();
        }
    }
  }
}

# 100 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__putDone(void ){
#line 100
  SerialP__SerialFrameComm__putDone();
#line 100
}
#line 100
# 48 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static error_t HdlcTranslateC__UartStream__send(uint8_t * buf, uint16_t len){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(buf, len);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 118 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error)
#line 119
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 120
    {
      if (HdlcTranslateC__state.sendEscape) {
          HdlcTranslateC__state.sendEscape = 0;
          HdlcTranslateC__m_data = HdlcTranslateC__txTemp;
          HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
        }
      else {
          HdlcTranslateC__SerialFrameComm__putDone();
        }
    }
#line 129
    __nesc_atomic_end(__nesc_atomic); }
}

# 57 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(uint8_t * buf, uint16_t len, error_t error){
#line 57
  HdlcTranslateC__UartStream__sendDone(buf, len, error);
#line 57
}
#line 57
# 46 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data){
#line 46
  HplAtm128UartP__HplUart0__tx(data);
#line 46
}
#line 46
# 173 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void )
#line 173
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos < /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos++]);
    }
  else {
      uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf;

#line 180
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf = (void *)0;
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 0;
      /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
      /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len, SUCCESS);
    }
}

# 47 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__txDone(void ){
#line 47
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone();
#line 47
}
#line 47
# 320 "/opt/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data)
#line 320
{
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__rxDone(uint8_t data){
#line 49
  HplAtm128UartP__HplUart1__default__rxDone(data);
#line 49
}
#line 49
# 319 "/opt/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart1__default__txDone(void )
#line 319
{
}

# 47 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__txDone(void ){
#line 47
  HplAtm128UartP__HplUart1__default__txDone();
#line 47
}
#line 47
# 225 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P__CompareA__default__fired(void )
#line 225
{
}

# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer3P__CompareA__fired(void ){
#line 58
  HplAtm1281Timer3P__CompareA__default__fired();
#line 58
}
#line 58
# 229 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P__CompareB__default__fired(void )
#line 229
{
}

# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer3P__CompareB__fired(void ){
#line 58
  HplAtm1281Timer3P__CompareB__default__fired();
#line 58
}
#line 58
# 233 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P__CompareC__default__fired(void )
#line 233
{
}

# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer3P__CompareC__fired(void ){
#line 58
  HplAtm1281Timer3P__CompareC__default__fired();
#line 58
}
#line 58
# 237 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P__Capture__default__captured(uint16_t time)
#line 237
{
}

# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplAtm1281Timer3P__Capture__captured(HplAtm1281Timer3P__Capture__size_type t){
#line 60
  HplAtm1281Timer3P__Capture__default__captured(t);
#line 60
}
#line 60
# 219 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline uint16_t HplAtm1281Timer3P__Capture__get(void )
#line 219
{
#line 219
  return * (volatile uint16_t *)0x96;
}

# 216 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void )
#line 216
{
}

# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*CounterMicro32C.Transform32*/TransformCounterC__2__Counter__overflow(void ){
#line 82
  /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow();
#line 82
}
#line 82
# 133 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMicro32C.Transform32*/TransformCounterC__2__CounterFrom__overflow(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMicro32C.Transform32*/TransformCounterC__2__m_upper++;
      if ((/*CounterMicro32C.Transform32*/TransformCounterC__2__m_upper & /*CounterMicro32C.Transform32*/TransformCounterC__2__OVERFLOW_MASK) == 0) {
        /*CounterMicro32C.Transform32*/TransformCounterC__2__Counter__overflow();
        }
    }
#line 141
    __nesc_atomic_end(__nesc_atomic); }
}

# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*CounterThree16C.NCounter*/Atm128CounterC__1__Counter__overflow(void ){
#line 82
  /*CounterMicro32C.Transform32*/TransformCounterC__2__CounterFrom__overflow();
#line 82
}
#line 82
# 65 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterThree16C.NCounter*/Atm128CounterC__1__Timer__overflow(void )
{
  /*CounterThree16C.NCounter*/Atm128CounterC__1__Counter__overflow();
}

# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__overflow(void )
#line 60
{
}

# 70 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm1281Timer3P__Timer__overflow(void ){
#line 70
  /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__overflow();
#line 70
  /*CounterThree16C.NCounter*/Atm128CounterC__1__Timer__overflow();
#line 70
}
#line 70
# 63 "/opt/tinyos-2.x/tos/system/RealMainP.nc"
  int main(void )
#line 63
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
#line 71
        * (volatile uint8_t *)(0x34 + 0x20) = 0;
#line 71
         __asm volatile ("in __tmp_reg__, __SREG__""\n\t""cli""\n\t""sts %0, %1""\n\t""sts %0, __zero_reg__""\n\t""out __SREG__,__tmp_reg__""\n\t" :  : "M"((uint16_t )& * (volatile uint8_t *)0x60), "r"((uint8_t )((1 << 4) | (1 << 3))) : "r0");}
#line 71
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
#line 88
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

# 134 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 138
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 142
          FALSE;

#line 142
          return __nesc_temp;
        }
      }
  }
#line 145
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

#line 175
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x2b0109efdab0){
#line 75
  switch (arg_0x2b0109efdab0) {
#line 75
    case SinkP__uartSendTask:
#line 75
      SinkP__uartSendTask__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 75
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 75
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 75
      break;
#line 75
    case OrinocoQueueP__selfReceiveTask:
#line 75
      OrinocoQueueP__selfReceiveTask__runTask();
#line 75
      break;
#line 75
    case OrinocoQueueP__sendTask:
#line 75
      OrinocoQueueP__sendTask__runTask();
#line 75
      break;
#line 75
    case OrinocoRadioP__transition:
#line 75
      OrinocoRadioP__transition__runTask();
#line 75
      break;
#line 75
    case /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask:
#line 75
      /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask:
#line 75
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask();
#line 75
      break;
#line 75
    case /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask:
#line 75
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask();
#line 75
      break;
#line 75
    case /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask:
#line 75
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask();
#line 75
      break;
#line 75
    case RF230DriverLayerP__releaseSpi:
#line 75
      RF230DriverLayerP__releaseSpi__runTask();
#line 75
      break;
#line 75
    case Atm128SpiP__zeroTask:
#line 75
      Atm128SpiP__zeroTask__runTask();
#line 75
      break;
#line 75
    case /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask:
#line 75
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__runTask();
#line 75
      break;
#line 75
    case OrinocoForwardLayerP__doneTask:
#line 75
      OrinocoForwardLayerP__doneTask__runTask();
#line 75
      break;
#line 75
    case EASchedulerP__dispatch:
#line 75
      EASchedulerP__dispatch__runTask();
#line 75
      break;
#line 75
    case SerialP__RunTx:
#line 75
      SerialP__RunTx__runTask();
#line 75
      break;
#line 75
    case SerialP__startDoneTask:
#line 75
      SerialP__startDoneTask__runTask();
#line 75
      break;
#line 75
    case SerialP__stopDoneTask:
#line 75
      SerialP__stopDoneTask__runTask();
#line 75
      break;
#line 75
    case SerialP__defaultSerialFlushTask:
#line 75
      SerialP__defaultSerialFlushTask__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone:
#line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask:
#line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x2b0109efdab0);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 57 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )34U ^= 1 << 0;
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 170 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
    {
#line 172
      {
        unsigned char __nesc_temp = 
#line 172
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
#line 172
          __nesc_atomic_end(__nesc_atomic); 
#line 172
          return __nesc_temp;
        }
      }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
}

# 348 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static error_t SerialP__SplitControl__start(void )
#line 348
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 349
    {
      if (SerialP__txState != SerialP__TXSTATE_INACTIVE && SerialP__rxState != SerialP__RXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
#line 351
          EALREADY;

          {
#line 351
            __nesc_atomic_end(__nesc_atomic); 
#line 351
            return __nesc_temp;
          }
        }
    }
#line 354
    __nesc_atomic_end(__nesc_atomic); }
#line 353
  SerialP__startDoneTask__postTask();
  return SUCCESS;
}

static void SerialP__testOff(void )
#line 357
{
  bool turnOff = FALSE;

#line 359
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 359
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE && 
      SerialP__rxState == SerialP__RXSTATE_INACTIVE) {
          turnOff = TRUE;
        }
    }
#line 364
    __nesc_atomic_end(__nesc_atomic); }
  if (turnOff) {
      SerialP__stopDoneTask__postTask();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 367
        SerialP__offPending = FALSE;
#line 367
        __nesc_atomic_end(__nesc_atomic); }
    }
  else {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 370
        SerialP__offPending = TRUE;
#line 370
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 98 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void )
#line 98
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
    {
      HdlcTranslateC__state.sendEscape = 0;
      HdlcTranslateC__m_data = HDLC_FLAG_BYTE;
    }
#line 102
    __nesc_atomic_end(__nesc_atomic); }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 155 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len)
#line 155
{

  if (len == 0) {
    return FAIL;
    }
  else {
#line 159
    if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf) {
      return EBUSY;
      }
    }
#line 162
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len = len;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf = buf;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 1;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos++]);

  return SUCCESS;
}

# 207 "/opt/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static void HplAtm128UartP__HplUart0__tx(uint8_t data)
#line 207
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 208
    {
      * (volatile uint8_t *)0XC6 = data;
      * (volatile uint8_t *)0xC0 |= 1 << 6;
    }
#line 211
    __nesc_atomic_end(__nesc_atomic); }
}

# 518 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static void SerialP__MaybeScheduleTx(void )
#line 518
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 519
    {
      if (SerialP__txPending == 0) {
          if (SerialP__RunTx__postTask() == SUCCESS) {
              SerialP__txPending = 1;
            }
        }
    }
#line 525
    __nesc_atomic_end(__nesc_atomic); }
}

# 144 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 225 "../../../LocalTimeSyncedMicro/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__get(void )
#line 225
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get();

      if (((Atm128_TIFR2_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__getInterruptFlag()).bits.ocfa) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base + now8;
        }
    }
#line 243
    __nesc_atomic_end(__nesc_atomic); }
#line 243
  return now;
}

# 14 "../../../EAJobs/lib/EAPeriodicJobConfigC.nc"
static ea_generic_jobconfig_t */*OrinocoDebugReportingJobC.EAPeriodicJobConfigC*/EAPeriodicJobConfigC__2__JobConfig__getConfig(void )
#line 14
{
  /*OrinocoDebugReportingJobC.EAPeriodicJobConfigC*/EAPeriodicJobConfigC__2__conf_.type = EA_JOBTYPE_PERIODIC;
  /*OrinocoDebugReportingJobC.EAPeriodicJobConfigC*/EAPeriodicJobConfigC__2__conf_.period = /*OrinocoDebugReportingJobC.EAPeriodicJobConfigC*/EAPeriodicJobConfigC__2__SubJobConfig__getPeriod();

  return (ea_generic_jobconfig_t *)&/*OrinocoDebugReportingJobC.EAPeriodicJobConfigC*/EAPeriodicJobConfigC__2__conf_;
}

#line 14
static ea_generic_jobconfig_t */*OrinocoStatsReportingJobC.EAPeriodicJobConfigC*/EAPeriodicJobConfigC__1__JobConfig__getConfig(void )
#line 14
{
  /*OrinocoStatsReportingJobC.EAPeriodicJobConfigC*/EAPeriodicJobConfigC__1__conf_.type = EA_JOBTYPE_PERIODIC;
  /*OrinocoStatsReportingJobC.EAPeriodicJobConfigC*/EAPeriodicJobConfigC__1__conf_.period = /*OrinocoStatsReportingJobC.EAPeriodicJobConfigC*/EAPeriodicJobConfigC__1__SubJobConfig__getPeriod();

  return (ea_generic_jobconfig_t *)&/*OrinocoStatsReportingJobC.EAPeriodicJobConfigC*/EAPeriodicJobConfigC__1__conf_;
}

#line 14
static ea_generic_jobconfig_t */*OrinocoTrafficStatisticsC.EAPeriodicJobConfigC*/EAPeriodicJobConfigC__0__JobConfig__getConfig(void )
#line 14
{
  /*OrinocoTrafficStatisticsC.EAPeriodicJobConfigC*/EAPeriodicJobConfigC__0__conf_.type = EA_JOBTYPE_PERIODIC;
  /*OrinocoTrafficStatisticsC.EAPeriodicJobConfigC*/EAPeriodicJobConfigC__0__conf_.period = /*OrinocoTrafficStatisticsC.EAPeriodicJobConfigC*/EAPeriodicJobConfigC__0__SubJobConfig__getPeriod();

  return (ea_generic_jobconfig_t *)&/*OrinocoTrafficStatisticsC.EAPeriodicJobConfigC*/EAPeriodicJobConfigC__0__conf_;
}

# 96 "../../../EAJobs/lib/EASchedulerP.nc"
static void EASchedulerP__EAScheduler__scheduleJob(jobid_t jobId, uint32_t dt)
#line 96
{

  if (EASchedulerP__head_ == EASchedulerP__NUM_JOBS) {
      EASchedulerP__dispatchTime_[jobId] = dt;
      EASchedulerP__head_ = jobId;
      EASchedulerP__schedule_[jobId] = EASchedulerP__NUM_JOBS;
      EASchedulerP__restartDispatchTimer();
    }
  else 
#line 103
    {




      EASchedulerP__dispatchTime_[jobId] = dt;
      if (EASchedulerP__DispatchTimer__isRunning()) {
          EASchedulerP__dispatchTime_[jobId] += EASchedulerP__DispatchTimer__getNow() - EASchedulerP__DispatchTimer__gett0();
        }

      if (dt < EASchedulerP__dispatchTime_[EASchedulerP__head_]) {

          EASchedulerP__schedule_[jobId] = EASchedulerP__head_;
          EASchedulerP__head_ = jobId;
          EASchedulerP__restartDispatchTimer();
        }
      else 
#line 118
        {

          uint8_t i;
#line 120
          uint8_t nexti;

#line 121
          for (i = EASchedulerP__head_; ; i = nexti) {
              nexti = EASchedulerP__schedule_[i];
              if (nexti == EASchedulerP__NUM_JOBS || dt < EASchedulerP__dispatchTime_[nexti]) {
                  EASchedulerP__schedule_[i] = jobId;
                  EASchedulerP__schedule_[jobId] = nexti;
                  break;
                }
            }
        }
    }

  EASchedulerP__printSchedule();
}

# 277 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static void */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(message_t *msg, uint8_t len)
{
  if (len > /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength()) {
    return (void *)0;
    }
  return (void *)msg + /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(msg);
}

# 97 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(message_t *msg)
{

  __nesc_hton_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata, (__nesc_ntoh_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata) & /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_PRESERVE)
   | /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_VALUE);
}

#line 77
static ieee154_simple_header_t */*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(message_t *msg)
{
  return (void *)msg + /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(msg);
}

# 630 "../../lib/net/orinoco/OrinocoRadioP.nc"
static void OrinocoRadioP__DataSubSend__sendDone(message_t *msg, error_t error)
#line 630
{
  for (; 0; ) ;
  for (; 0; ) ;





  if (!OrinocoRadioP__Timer__isRunning()) {
      if (error == SUCCESS) {
          OrinocoRadioP__Timer__startOneShot(ORINOCO_ACK_WAITING_TIME);
        }
      else 
#line 641
        {
          OrinocoRadioP__Timer__startOneShot(0);
        }
    }


  if (error == SUCCESS) {
      OrinocoRadioP__ps_.numTxPackets++;
    }
  else 
#line 649
    {
      OrinocoRadioP__ps_.numTxPacketsFail++;
    }





  if (error == ECANCEL) {
      if (OrinocoRadioP__beaconCancel_ == TRUE) {
          OrinocoRadioP__beaconCancel_ = FALSE, 
          OrinocoRadioP__state_ = OrinocoRadioP__FORWARD_SUBSEND;
          OrinocoRadioP__transition__postTask();
        }
      else 
#line 662
        {
          OrinocoRadioP__state_ = OrinocoRadioP__FORWARD;
        }
    }
  else 
#line 665
    {
      OrinocoRadioP__state_ = OrinocoRadioP__FORWARD;
    }
}

# 73 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void OrinocoRadioP__Timer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(2U, dt);
#line 73
}
#line 73
# 129 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static void Atm128SpiP__startSpi(void )
#line 129
{
  Atm128SpiP__Spi__enableSpi(FALSE);
  /* atomic removed: atomic calls only */
#line 131
  {
    Atm128SpiP__Spi__initMaster();
    Atm128SpiP__Spi__enableInterrupt(FALSE);
    Atm128SpiP__Spi__setClockPolarity(FALSE);
    Atm128SpiP__Spi__setClockPhase(FALSE);
    Atm128SpiP__Spi__enableSpi(TRUE);
#line 158
    Atm128SpiP__Spi__setMasterDoubleSpeed(TRUE);
    Atm128SpiP__Spi__setClock(0);
  }

  Atm128SpiP__McuPowerState__update();
}

# 147 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static void HplAtm128SpiP__SPI__enableSpi(bool enabled)
#line 147
{
  if (enabled) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 6;
      HplAtm128SpiP__Mcu__update();
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 6);
      HplAtm128SpiP__Mcu__update();
    }
}

#line 132
static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled)
#line 132
{
  if (enabled) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 7;
      HplAtm128SpiP__Mcu__update();
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 7);
      HplAtm128SpiP__Mcu__update();
    }
}

# 96 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__release(uint8_t id)
#line 96
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 97
    {
      if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_BUSY && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId == id) {
          if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__isEmpty() == FALSE) {
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__dequeue();
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_GRANTING;
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__postTask();
            }
          else {
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__NO_RES;
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_IDLE;
            }
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__unconfigure(id);
          {
            unsigned char __nesc_temp = 
#line 109
            SUCCESS;

            {
#line 109
              __nesc_atomic_end(__nesc_atomic); 
#line 109
              return __nesc_temp;
            }
          }
        }
    }
#line 113
    __nesc_atomic_end(__nesc_atomic); }
#line 112
  return FAIL;
}

# 112 "/opt/tinyos-2.x/tos/lib/rfxlink/util/TaskletC.nc"
static void TaskletC__Tasklet__schedule(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (TaskletC__state != 0) 
        {
          TaskletC__state |= 0x80;
          {
#line 119
            __nesc_atomic_end(__nesc_atomic); 
#line 119
            return;
          }
        }
      TaskletC__state = 1;
    }
#line 123
    __nesc_atomic_end(__nesc_atomic); }

  TaskletC__doit();
}

#line 74
static void TaskletC__doit(void )
{
  for (; ; ) 
    {
      TaskletC__Tasklet__run();

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          if (TaskletC__state == 1) 
            {
              TaskletC__state = 0;
              {
#line 85
                __nesc_atomic_end(__nesc_atomic); 
#line 85
                return;
              }
            }
          for (; 0; ) ;
          TaskletC__state = 1;
        }
#line 90
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 284 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayerP.nc"
static bool RF230DriverLayerP__isSpiAcquired(void )
{
  if (RF230DriverLayerP__SpiResource__isOwner()) {
    return TRUE;
    }
  if (RF230DriverLayerP__SpiResource__immediateRequest() == SUCCESS) 
    {
      RF230DriverLayerP__SELN__makeOutput();
      RF230DriverLayerP__SELN__set();

      return TRUE;
    }

  RF230DriverLayerP__SpiResource__request();
  return FALSE;
}

# 70 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__request(uint8_t id)
#line 70
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__requested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 72
    {
      if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_IDLE) {
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_GRANTING;
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId = id;
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__postTask();
          {
            unsigned char __nesc_temp = 
#line 77
            SUCCESS;

            {
#line 77
              __nesc_atomic_end(__nesc_atomic); 
#line 77
              return __nesc_temp;
            }
          }
        }
#line 79
      {
        unsigned char __nesc_temp = 
#line 79
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__enqueue(id);

        {
#line 79
          __nesc_atomic_end(__nesc_atomic); 
#line 79
          return __nesc_temp;
        }
      }
    }
#line 82
    __nesc_atomic_end(__nesc_atomic); }
}

# 73 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(uint8_t bit, message_t *msg)
{
  for (; 0; ) ;

  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(msg)->flags &= ~(1 << bit);
}

#line 66
static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(uint8_t bit, message_t *msg)
{
  for (; 0; ) ;

  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(msg)->flags |= 1 << bit;
}

# 106 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayerP.nc"
static rf230_metadata_t *RF230DriverLayerP__getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - RF230DriverLayerP__RadioPacket__metadataLength(msg);
}

# 10 "../../../LocalTimeSyncedMicro/chips/atm1281/timer/CounterToLocalMicroC.nc"
static uint32_t /*LocalTimeSyncedMicroC.CounterToLocalMicroC*/CounterToLocalMicroC__0__LocalTime__get(void )
#line 10
{










  uint64_t time;

#line 22
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 22
    {
#line 22
      time = (uint64_t )/*LocalTimeSyncedMicroC.CounterToLocalMicroC*/CounterToLocalMicroC__0__Counter__get() + /*LocalTimeSyncedMicroC.CounterToLocalMicroC*/CounterToLocalMicroC__0__o;
    }
#line 23
    __nesc_atomic_end(__nesc_atomic); }
#line 23
  return ((uint64_t )time << 3) + time + ((time >> 4) + (time >> 5));
}

# 80 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__to_size_type /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__Counter__get(void )
{
  /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__to_size_type rv = 0;

  /* atomic removed: atomic calls only */
#line 84
  {
    /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__upper_count_type high = /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__m_upper;
    /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__from_size_type low = /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__CounterFrom__get();

#line 87
    if (/*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__CounterFrom__isOverflowPending()) 
      {






        high++;
        low = /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__CounterFrom__get();
      }
    {
      /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__to_size_type high_to = high;
      /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__to_size_type low_to = low >> /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__LOW_SHIFT_RIGHT;

#line 101
      rv = (high_to << /*LocalTimeSyncedMicroC.TransformCounterC*/TransformCounterC__1__HIGH_SHIFT_LEFT) | low_to;
    }
  }
  return rv;
}

# 65 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__metadataLength(message_t *msg){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(msg);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 101 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayerP.nc"
static void *RF230DriverLayerP__getPayload(message_t *msg)
{
  return (void *)msg + RF230DriverLayerP__RadioPacket__headerLength(msg);
}

# 61 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static bool /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(uint8_t bit, message_t *msg)
{
  return /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(msg)->flags & (1 << bit);
}

# 901 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayerP.nc"
static uint8_t RF230DriverLayerP__RadioPacket__payloadLength(message_t *msg)
{
  return __nesc_ntoh_leuint8(RF230DriverLayerP__getHeader(msg)->length.nxdata) - 2;
}

# 99 "/opt/tinyos-2.x/tos/lib/rfxlink/util/TaskletC.nc"
static void TaskletC__Tasklet__resume(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (--TaskletC__state != 0x80) {
        {
#line 104
          __nesc_atomic_end(__nesc_atomic); 
#line 104
          return;
        }
        }
#line 106
      TaskletC__state = 1;
    }
#line 107
    __nesc_atomic_end(__nesc_atomic); }

  TaskletC__doit();
}

# 127 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static network_header_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(message_t *msg)
{
  return (void *)msg + /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(msg);
}

# 96 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id)
#line 96
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 97
    {
      if (/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state == /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_BUSY && /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId == id) {
          if (/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__isEmpty() == FALSE) {
              /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__dequeue();
              /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
              /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
            }
          else {
              /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__NO_RES;
              /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_IDLE;
            }
          /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(id);
          {
            unsigned char __nesc_temp = 
#line 109
            SUCCESS;

            {
#line 109
              __nesc_atomic_end(__nesc_atomic); 
#line 109
              return __nesc_temp;
            }
          }
        }
    }
#line 113
    __nesc_atomic_end(__nesc_atomic); }
#line 112
  return FAIL;
}

# 67 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static activemessage_header_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(message_t *msg)
{
  return (void *)msg + /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(msg);
}

# 106 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void )
#line 106
{
  am_addr_t myAddr;

#line 108
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 108
    myAddr = ActiveMessageAddressC__addr;
#line 108
    __nesc_atomic_end(__nesc_atomic); }
  return myAddr;
}

# 486 "../../lib/net/orinoco/OrinocoRadioP.nc"
static message_t *OrinocoRadioP__BeaconSubReceive__receive(message_t *msg, void *arg_0x2b010a5535e8, uint8_t arg_0x2b010a553898)
#line 486
{




  if (OrinocoRadioP__state_ == OrinocoRadioP__FORWARD) {
      bool isAck = FALSE;

      for (; 0; ) ;





      if (OrinocoRadioP__SubAMPacket__address() == OrinocoRadioP__SubAMPacket__destination(msg)) {
          message_t *txDataMsgTmp = OrinocoRadioP__txDataMsg_;

#line 502
          OrinocoRadioP__txDataMsg_ = (void *)0;


          OrinocoRadioP__Send__sendDone(txDataMsgTmp, OrinocoRadioP__txDataError_);
          isAck = TRUE;


          OrinocoRadioP__TrafficUpdates__updateTxBurst(FALSE);
          OrinocoRadioP__TrafficUpdates__updateForwardDelay(FALSE);
        }




      if (OrinocoRadioP__processBeacon(msg, isAck) && OrinocoRadioP__txDataMsg_ != (void *)0) {

          if (isAck) {

              OrinocoRadioP__Timer__startOneShot(OrinocoRadioP__Timer__getdt());
            }
          OrinocoRadioP__state_ = OrinocoRadioP__FORWARD_SUBSEND;
          OrinocoRadioP__transition__postTask();
        }
      else 
#line 524
        {

          if (OrinocoRadioP__txDataMsg_ == (void *)0) {
              OrinocoRadioP__Timer__stop();
              OrinocoRadioP__state_ = OrinocoRadioP__FORWARD_DONE;
              OrinocoRadioP__transition__postTask();
            }
        }
    }
  else {
#line 532
    if (OrinocoRadioP__state_ == OrinocoRadioP__FORWARD_SUBSEND || OrinocoRadioP__state_ == OrinocoRadioP__FORWARD_SUBSEND_DONE) {


        if (OrinocoRadioP__SubAMPacket__source(msg) == OrinocoRadioP__txDataDst_ && !OrinocoRadioP__SubAMPacket__isForMe(msg)) {
            for (; 0; ) ;



            if (OrinocoRadioP__state_ == OrinocoRadioP__FORWARD_SUBSEND) {

                if (OrinocoRadioP__processBeacon(msg, FALSE)) {
                    OrinocoRadioP__state_ = OrinocoRadioP__FORWARD_SUBSEND;
                    OrinocoRadioP__transition__postTask();
                  }
                else 
#line 545
                  {
                    OrinocoRadioP__state_ = OrinocoRadioP__FORWARD;
                  }
              }
            else 
#line 548
              {

                if (SUCCESS == OrinocoRadioP__DataSubSend__cancel(OrinocoRadioP__txDataMsg_)) {
                    if (OrinocoRadioP__processBeacon(msg, FALSE)) {
                        OrinocoRadioP__beaconCancel_ = TRUE;
                      }
                  }
              }
          }
      }
    }
  return msg;
}

# 103 "/opt/tinyos-2.x/tos/system/PoolP.nc"
static error_t /*OrinocoP.MsgPool.PoolP*/PoolP__0__Pool__put(/*OrinocoP.MsgPool.PoolP*/PoolP__0__pool_t *newVal)
#line 103
{
  if (/*OrinocoP.MsgPool.PoolP*/PoolP__0__free >= 1) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*OrinocoP.MsgPool.PoolP*/PoolP__0__index + /*OrinocoP.MsgPool.PoolP*/PoolP__0__free;

#line 109
      if (emptyIndex >= 1) {
          emptyIndex -= 1;
        }
      /*OrinocoP.MsgPool.PoolP*/PoolP__0__queue[emptyIndex] = newVal;
      /*OrinocoP.MsgPool.PoolP*/PoolP__0__free++;
      ;
      return SUCCESS;
    }
}

# 94 "../../lib/net/orinoco/OrinocoQueueP.nc"
static void OrinocoQueueP__sendNext(bool force)
#line 94
{

  if (!OrinocoQueueP__isForwarding_) {
#line 96
    return;
    }

  if (OrinocoQueueP__SendQueue__size() > 0 && (
  force || OrinocoQueueP__SendQueue__size() >= OrinocoQueueP__Config__getMinQueueSize())) 
    {
      mq_entry_t qe = OrinocoQueueP__SendQueue__head();

#line 103
      OrinocoQueueP__SubSend__send(qe.msg, OrinocoQueueP__SubPacket__payloadLength(qe.msg));
    }
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t OrinocoRadioP__SubPacket__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 111 "../../lib/net/orinoco/OrinocoTrafficStatisticsP.nc"
static void OrinocoTrafficStatisticsP__Updates__updateTxBurst(bool end)
#line 111
{
  if (end) {
      OrinocoTrafficStatisticsP__ts_.avgTxBurstLen = ewmaFilter16(OrinocoTrafficStatisticsP__ts_.avgTxBurstLen, (uint16_t )OrinocoTrafficStatisticsP__tv_.curTxBurstLen * 256, OrinocoTrafficStatisticsP__EWMA_FILTER);
      OrinocoTrafficStatisticsP__tv_.curTxBurstLen = 0;
    }
  else 
#line 115
    {
      OrinocoTrafficStatisticsP__tv_.curTxBurstLen++;
    }
}

#line 141
static void OrinocoTrafficStatisticsP__Updates__updateForwardDelay(bool reset)
#line 141
{
  uint32_t now = OrinocoTrafficStatisticsP__LocalTime__get();

#line 143
  if (OrinocoTrafficStatisticsP__tv_.curTxBurstLen == 1) {
      OrinocoTrafficStatisticsP__ts_.avgForwardDelay = ewmaFilter32(OrinocoTrafficStatisticsP__ts_.avgForwardDelay, now - OrinocoTrafficStatisticsP__tv_.curForwardTime, OrinocoTrafficStatisticsP__EWMA_FILTER);
    }
  if (reset) {
      OrinocoTrafficStatisticsP__tv_.curForwardTime = now;
    }
}

# 92 "../../lib/net/orinoco/OrinocoRadioP.nc"
static bool OrinocoRadioP__processBeacon(message_t *msg, bool update)
#line 92
{
  OrinocoBeaconMsg *p = (OrinocoBeaconMsg *)OrinocoRadioP__SubPacket__getPayload(msg, sizeof(OrinocoBeaconMsg *));

  bool accept = OrinocoRadioP__PathCost__inspectBeacon(msg, __nesc_ntoh_uint8(p->cost.nxdata), update);

#line 96
  if (accept) {

      OrinocoRadioP__txDataDst_ = OrinocoRadioP__SubAMPacket__source(msg);
      OrinocoRadioP__txDataMaxBackoff_ = __nesc_ntoh_uint8(p->cw.nxdata);
    }


  OrinocoRadioP__ps_.numRxBeacons++;
  if (!accept) {
#line 104
    OrinocoRadioP__ps_.numIgnoredBeacons++;
    }

  return accept;
}

# 125 "../../lib/net/orinoco/OrinocoTrafficStatisticsP.nc"
static void OrinocoTrafficStatisticsP__Updates__updateRxBurst(bool end)
#line 125
{
  if (end) {

      if (OrinocoTrafficStatisticsP__tv_.curRxBurstLen > 0) {
          OrinocoTrafficStatisticsP__ts_.avgRxBurstLen = ewmaFilter16(OrinocoTrafficStatisticsP__ts_.avgRxBurstLen, (uint16_t )OrinocoTrafficStatisticsP__tv_.curRxBurstLen * 256, OrinocoTrafficStatisticsP__EWMA_FILTER);
          OrinocoTrafficStatisticsP__tv_.curRxBurstLen = 0;
        }
    }
  else 
#line 132
    {
      OrinocoTrafficStatisticsP__tv_.curRxBurstLen++;
    }
}

# 138 "../../lib/net/orinoco/OrinocoQueueP.nc"
static orinoco_data_header_t *OrinocoQueueP__getHeader(message_t *msg)
#line 138
{



  return (orinoco_data_header_t *)(
  OrinocoQueueP__SubPacket__getPayload(msg, OrinocoQueueP__SubPacket__maxPayloadLength())
   + OrinocoQueueP__Packet__payloadLength(msg));
}

# 272 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength(void )
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength();
}

# 72 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static uint32_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__timestamp(message_t *msg)
{
  return /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__getMeta(msg)->timestamp;
}

# 93 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void )
#line 93
{
  am_group_t myGroup;

#line 95
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 95
    myGroup = ActiveMessageAddressC__group;
#line 95
    __nesc_atomic_end(__nesc_atomic); }
  return myGroup;
}

# 132 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static error_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(message_t *msg)
{

  __nesc_hton_leuint8(/*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(msg)->network.nxdata, 0x3f);

  return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__send(msg);
}

# 69 "/opt/tinyos-2.x/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC__Random__rand32(void )
#line 69
{
  uint32_t mlcg;
#line 70
  uint32_t p;
#line 70
  uint32_t q;
  uint64_t tmpseed;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC__seed;
      q = tmpseed;
      q = q >> 1;
      p = tmpseed >> 32;
      mlcg = p + q;
      if (mlcg & 0x80000000) {
          mlcg = mlcg & 0x7FFFFFFF;
          mlcg++;
        }
      RandomMlcgC__seed = mlcg;
    }
#line 84
    __nesc_atomic_end(__nesc_atomic); }
  return mlcg;
}

# 79 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static error_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__send(am_id_t id, am_addr_t addr, message_t *msg, uint8_t len)
{
  if (len > /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength()) {
    return EINVAL;
    }
  if (/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__checkFrame(msg) != SUCCESS) {
    return FAIL;
    }
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(msg, len);
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setSource(msg, /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address());
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setGroup(msg, /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__localGroup());
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(msg, id);
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(msg, addr);

  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__aboutToSend(id, addr, msg);

  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__send(msg);
}

# 73 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 90
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 276 "../../../LocalTimeSyncedMicro/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt)
#line 276
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__set = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__t0 = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__dt = ndt;
    }
#line 282
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt();
}

#line 139
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt(void )
#line 139
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get();
      uint8_t newOcr2A;
      uint8_t tifr2 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__getInterruptFlag();

#line 150
      ;
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MINDT) || tifr2 & (1 << 1)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MINDT) {
              ;
            }
          else {
              ;
            }
          {
#line 158
            __nesc_atomic_end(__nesc_atomic); 
#line 158
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__set) {
          newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MAXT;
          ;
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__get();

#line 169
          ;

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__t0) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__dt) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__set = FALSE;
              fired = TRUE;
              newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__dt - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base;

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MAXT) {
                newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MAXT;
                }
              else {
#line 185
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MINDT) {
                  newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MINDT;
                  }
                else {
#line 188
                  newOcr2A = alarm_in;
                  }
                }
            }
        }
#line 191
      newOcr2A--;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setOcr2A(newOcr2A);
    }
#line 193
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__fired();
    }
}

# 137 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static void HplAtm1281Timer2AsyncP__TimerCtrl__setControlB(uint8_t x)
#line 137
{
  while (* (volatile uint8_t *)0xB6 & (1 << 0)) 
    ;
  * (volatile uint8_t *)0xB1 = ((Atm128_TCCR2B_t )x).flat;
}

#line 242
__attribute((signal))   void __vector_13(void )
#line 242
{
  HplAtm1281Timer2AsyncP__stabiliseTimer2();


  HplAtm1281Timer2AsyncP__Compare__fired();
}


__attribute((signal))   void __vector_15(void )
#line 250
{
  HplAtm1281Timer2AsyncP__stabiliseTimer2();

  HplAtm1281Timer2AsyncP__Timer__overflow();
}

# 119 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
__attribute((signal))   void __vector_24(void )
#line 119
{
  HplAtm128SpiP__SPI__dataReady(HplAtm128SpiP__SPI__read());
}

# 173 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx)
#line 173
{










  Atm128SpiP__Spi__write(tx);

  while (!Atm128SpiP__Spi__isInterruptPending()) 
    ;

  return Atm128SpiP__Spi__read();
}

# 226 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
__attribute((interrupt))   void __vector_17(void )
#line 226
{
  HplAtm1281Timer1P__CompareA__fired();
}

__attribute((interrupt))   void __vector_18(void )
#line 230
{
  HplAtm1281Timer1P__CompareB__fired();
}

__attribute((interrupt))   void __vector_19(void )
#line 234
{
  HplAtm1281Timer1P__CompareC__fired();
}

__attribute((interrupt))   void __vector_16(void )
#line 238
{
  HplAtm1281Timer1P__Capture__captured(HplAtm1281Timer1P__Capture__get());
}

__attribute((interrupt))   void __vector_20(void )
#line 242
{
  HplAtm1281Timer1P__Timer__overflow();
}

# 214 "/opt/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
__attribute((signal))   void __vector_25(void )
#line 214
{
  if ((* (volatile uint8_t *)0xC0 & (1 << 7)) != 0) {
      HplAtm128UartP__HplUart0__rxDone(* (volatile uint8_t *)0XC6);
    }
}

# 412 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data)
#line 412
{

  switch (SerialP__rxState) {

      case SerialP__RXSTATE_NOSYNC: 
        if (isDelimeter) {
            SerialP__rxInit();
            SerialP__rxState = SerialP__RXSTATE_PROTO;
          }
      break;

      case SerialP__RXSTATE_PROTO: 
        if (!isDelimeter) {
            SerialP__rxCRC = crcByte(SerialP__rxCRC, data);
            SerialP__rxState = SerialP__RXSTATE_TOKEN;
            SerialP__rxProto = data;
            if (!SerialP__valid_rx_proto(SerialP__rxProto)) {
              goto nosync;
              }
            if (SerialP__rxProto != SERIAL_PROTO_PACKET_ACK) {
                goto nosync;
              }
            if (SerialP__ReceiveBytePacket__startPacket() != SUCCESS) {
                goto nosync;
              }
          }
      break;

      case SerialP__RXSTATE_TOKEN: 
        if (isDelimeter) {
            goto nosync;
          }
        else {
            SerialP__rxSeqno = data;
            SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rxSeqno);
            SerialP__rxState = SerialP__RXSTATE_INFO;
          }
      break;

      case SerialP__RXSTATE_INFO: 
        if (SerialP__rxByteCnt < SerialP__SERIAL_MTU) {
            if (isDelimeter) {
                if (SerialP__rxByteCnt >= 2) {
                    if (SerialP__rx_current_crc() == SerialP__rxCRC) {
                        SerialP__ReceiveBytePacket__endPacket(SUCCESS);
                        SerialP__ack_queue_push(SerialP__rxSeqno);
                        SerialP__rxInit();
                        SerialP__SerialFrameComm__resetReceive();
                        if (SerialP__offPending) {
                            SerialP__rxState = SerialP__RXSTATE_INACTIVE;
                            SerialP__testOff();
                          }
                        goto done;
                      }
                    else {
                        goto nosync;
                      }
                  }
                else {
                    goto nosync;
                  }
              }
            else {
                if (SerialP__rxByteCnt >= 2) {
                    SerialP__ReceiveBytePacket__byteReceived(SerialP__rx_buffer_top());
                    SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rx_buffer_pop());
                  }
                SerialP__rx_buffer_push(data);
                SerialP__rxByteCnt++;
              }
          }
        else 

          {
            goto nosync;
          }
      break;

      default: 
        goto nosync;
    }
  goto done;

  nosync: 

    SerialP__rxInit();
  SerialP__SerialFrameComm__resetReceive();
  SerialP__ReceiveBytePacket__endPacket(FAIL);
  if (SerialP__offPending) {
      SerialP__rxState = SerialP__RXSTATE_INACTIVE;
      SerialP__testOff();
    }
  else {
    if (isDelimeter) {
        SerialP__rxState = SerialP__RXSTATE_PROTO;
      }
    }
  done: ;
}

# 92 "/opt/tinyos-2.x/tos/chips/atm128/crc.h"
static __attribute((noinline))  uint16_t crcByte(uint16_t oldCrc, uint8_t byte)
{

  uint16_t *table = crcTable;
  uint16_t newCrc;

   __asm ("eor %1,%B3\n"
  "\tlsl %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tadd %A2, %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tlpm\n"
  "\tmov %B0, %A3\n"
  "\tmov %A0, r0\n"
  "\tadiw r30,1\n"
  "\tlpm\n"
  "\teor %B0, r0" : 
  "=r"(newCrc), "+r"(byte), "+z"(table) : "r"(oldCrc));
  return newCrc;
}

# 296 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result)
#line 296
{
  uint8_t postsignalreceive = FALSE;

  /* atomic removed: atomic calls only */
#line 298
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending && result == SUCCESS) {
        postsignalreceive = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE;
      }
    else 
#line 308
      {

        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which);
      }
  }
  if (postsignalreceive) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask();
    }
}

# 220 "/opt/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
__attribute((interrupt))   void __vector_27(void )
#line 220
{
  HplAtm128UartP__HplUart0__txDone();
}

# 106 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data)
#line 106
{
  if (data == HDLC_CTLESC_BYTE || data == HDLC_FLAG_BYTE) {
      HdlcTranslateC__state.sendEscape = 1;
      HdlcTranslateC__txTemp = data ^ 0x20;
      HdlcTranslateC__m_data = HDLC_CTLESC_BYTE;
    }
  else {
      HdlcTranslateC__m_data = data;
    }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 308 "/opt/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
__attribute((signal))   void __vector_36(void )
#line 308
{
  if ((* (volatile uint8_t *)0xC8 & (1 << 7)) != 0) {
    HplAtm128UartP__HplUart1__rxDone(* (volatile uint8_t *)0XCE);
    }
}

#line 313
__attribute((interrupt))   void __vector_38(void )
#line 313
{
  HplAtm128UartP__HplUart1__txDone();
}

# 226 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
__attribute((interrupt))   void __vector_32(void )
#line 226
{
  HplAtm1281Timer3P__CompareA__fired();
}

__attribute((interrupt))   void __vector_33(void )
#line 230
{
  HplAtm1281Timer3P__CompareB__fired();
}

__attribute((interrupt))   void __vector_34(void )
#line 234
{
  HplAtm1281Timer3P__CompareC__fired();
}

__attribute((interrupt))   void __vector_31(void )
#line 238
{
  HplAtm1281Timer3P__Capture__captured(HplAtm1281Timer3P__Capture__get());
}

__attribute((interrupt))   void __vector_35(void )
#line 242
{
  HplAtm1281Timer3P__Timer__overflow();
}

