COMPONENT=TestAppC

CFLAGS += -DRF230_DEF_CHANNEL=19
#CFLAGS += -DUSE_REFCAP
#CFLAGS += -DTOSH_DATA_LENGTH=40
CFLAGS += \
	-I .                  \
	-I $(TOSDIR)/lib/net  \
	-I ../../lib          \
	-I ../../chips/rf230  \
	-I ../../platforms/iris     \
	-I ../../../LocalTimeSyncedMicro/lib \
	-I ../../../LocalTimeSyncedMicro/atm1281 \
	-I ../../../LocalTimeSyncedMicro/atm1281/timer \

LDFLAGS += ../../../Tools/Statistics.c

include $(MAKERULES)
