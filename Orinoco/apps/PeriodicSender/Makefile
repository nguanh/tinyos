COMPONENT=TestAppC

CFLAGS += -DRF230_DEF_CHANNEL=19
CFLAGS += -DTOSH_DATA_LENGTH=80
CFLAGS += -DDISABLE_SYNCED_MICRO

ifeq (0,1)
CFLAGS += \
	-I .                  \
	-I $(TOSDIR)/lib/net  \
        -I ../../interfaces   \
        -I ../../lib/net/orinoco  \
        -I ../../lib/rfxlink/layers  \
        -I ../../chips/rf230  \
        -I ../../platforms/iris \
	-I ../../../LocalTimeSyncedMicro/lib \
	-I ../../../LocalTimeSyncedMicro/chips/atm1281 \
	-I ../../../LocalTimeSyncedMicro/chips/atm1281/timer \
        -I ../../../EAJobs/interfaces \
        -I ../../../EAJobs/lib \
	-I ../../../Tools
else
CFLAGS += \
	-I .                  \
	-I $(TOSDIR)/lib/net  \
        -I ../../interfaces   \
        -I ../../lib/net/orinoco  \
        -I ../../lib/rfxlink/layers  \
        -I ../../chips/cc2420  \
        -I ../../platforms/telosb \
	-I ../../../LocalTimeSyncedMicro/lib \
	-I ../../../LocalTimeSyncedMicro/chips/msp430 \
	-I ../../../LocalTimeSyncedMicro/chips/msp430/timer \
        -I ../../../EAJobs/interfaces \
        -I ../../../EAJobs/lib \
	-I ../../../Tools
endif

LDFLAGS += ../../../Tools/Statistics.c

include $(MAKERULES)
