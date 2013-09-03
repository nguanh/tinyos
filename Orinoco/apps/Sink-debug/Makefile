COMPONENT=SinkC

CFLAGS += -DRF230_DEF_CHANNEL=12
CFLAGS += -DTOSH_DATA_LENGTH=80
CFLAGS += -DORINOCO_DEBUG_STATISTICS
CFLAGS += -DORINOCO_DEBUG_PATH
CFLAGS += -DDISABLE_SYNCED_MICRO
CFLAGS += -DORINOCO_QUEUE_SIZE=1
CFLAGS += -DPRINTF_MSG_LENGTH=60

# Use this to set the PLATFORM variable
include $(MAKERULES)

CFLAGS += -I$(TOSDIR)/lib/printf
CFLAGS += -DNEW_PRINTF_SEMANTICS

CFLAGS += \
	-I . \
	-I ../../interfaces \
	-I ../../lib/net/orinoco \
	-I ../../lib/rfxlink/layers \
	-I ../../../LocalTimeSyncedMicro/lib \
	-I ../../../EAJobs/interfaces \
	-I ../../../EAJobs/lib \
	-I ../../../Tools \
	-I ../../../Reporting \
	-I $(TOSDIR)/lib/net \

ifeq ($(findstring $(PLATFORM),iris), iris)
CFLAGS += \
	-I ../../chips/rf230  \
	-I ../../platforms/iris \
	-I ../../../LocalTimeSyncedMicro/chips/atm1281 \
	-I ../../../LocalTimeSyncedMicro/chips/atm1281/timer
else ifeq ($(findstring $(PLATFORM),telosb), telosb)
CFLAGS += \
	-I ../../chips/cc2420  \
	-I ../../platforms/telosb \
	-I ../../../LocalTimeSyncedMicro/chips/msp430 \
	-I ../../../LocalTimeSyncedMicro/chips/msp430/timer
else ifeq ($(PLATFORM),)
	# No target, no worries.
else
$(error Platform "$(PLATFORM)" is not supported)
endif

LDFLAGS += ../../../Tools/Statistics.c
