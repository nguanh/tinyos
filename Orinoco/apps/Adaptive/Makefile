COMPONENT=TestAppC

include $(MAKERULES)
include ../Makefile.radioconfig

#CFLAGS += -DENERGY_POLICY=EnergyPolicyMaxPowerC
CFLAGS += -DENERGY_POLICY=EnergyPolicyDepletionSafeC

CFLAGS += -DORINOCO_DEBUG_STATISTICS
#CFLAGS += -DUSE_REFCAP


CFLAGS += \
        -I . \
        -I $(TOSDIR)/lib/net \
        -I ../../interfaces \
        -I ../../lib/net/orinoco \
        -I ../../../LocalTimeSyncedMicro/lib \
        -I ../../../EAJobs/interfaces \
        -I ../../../EAJobs/lib \
        -I ../../../Tools \
        -I ../../../Reporting \
	-I ../../../EnergyProfiler/interfaces \
	-I ../../../EnergyProfiler/lib \
	-I ../../../SunShine/interfaces \
	-I ../../../SunShine/lib \
	-I ../../../SunShine/lib/jobs \
	-I ../../../SunShine/lib/sensors \
	-I ../../../SunShine/lib/configurator \
	-I ../../../SunShine/lib/generic_crc \
	-I ../../../SunShine/chips/atm128/flash \
	-I ../../../EnergyBudgeter/lib \
	-I ../../../EnergyBudgeter/interfaces \
	-I ../../../EnergyBudgeter/sunshine

#ifeq ($(findstring $(PLATFORM),iris), iris)
# iris
CFLAGS += \
        -I ../../chips/rf230  \
        -I ../../platforms/iris \
        -I ../../lib/rfxlink/layers \
        -I ../../../LocalTimeSyncedMicro/chips/atm1281 \
        -I ../../../LocalTimeSyncedMicro/chips/atm1281/timer

#fi

LDFLAGS += ../../../Tools/FixPointMath.c
LDFLAGS += ../../../Tools/Statistics.c

