#ifndef SUNSHINE_POLICY_H
#define SUNSHINE_POLICY_H

#include "FixPointMath.h"
#include "EnergyPolicy.h"

#ifndef POLICY_MPP_VOLTAGE
#define POLICY_MPP_VOLTAGE  (FP_CONV(2,50))
#endif

#ifndef POLICY_DS_VOLTAGE
#define POLICY_DS_VOLTAGE   (FP_CONV(1,2))
#endif

#ifndef POLICY_CRIT_VOLTAGE
#define POLICY_CRIT_VOLTAGE (FP_CONV(1,0))
#endif

#endif
