COMPONENT=SinkC

CFLAGS += -DRF230_DEF_CHANNEL=19
CFLAGS += -DTOSH_DATA_LENGTH=80
CFLAGS += -DORINOCO_DEBUG_STATISTICS
CFLAGS += -DDISABLE_SYNCED_MICRO
CFLAGS += -DORINOCO_QUEUE_SIZE=1

CFLAGS += \
	-I .                  \
	-I $(TOSDIR)/lib/net  \
	-I ../../interfaces   \
	-I ../../lib/net/orinoco  \
	-I ../../lib/rfxlink/layers  \
	-I ../../chips/rf230  \
	-I ../../platforms/iris     \
	-I ../../../LocalTimeSyncedMicro/lib \
	-I ../../../LocalTimeSyncedMicro/chips/atm1281 \
	-I ../../../LocalTimeSyncedMicro/chips/atm1281/timer \
	-I ../../../Reporting \
        -I ../../../EAJobs/interfaces \
        -I ../../../EAJobs/lib \
        -I ../../../Tools \

LDFLAGS += ../../../Tools/Statistics.c

include $(MAKERULES)
