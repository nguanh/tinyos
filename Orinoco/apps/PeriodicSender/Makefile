COMPONENT=TestAppC

CFLAGS += -DRF230_DEF_CHANNEL=19
#CFLAGS += -DUSE_REFCAP
#CFLAGS += -DTOSH_DATA_LENGTH=40
CFLAGS += \
	-I .                  \
	-I $(TOSDIR)/lib/net  \
	-I ../../lib          \
	-I ../../chips/rf2xx/rf230  \
	-I ../../platforms/iris     \
	-I ../../../MyLocalTime/lib \


#	-I ../../../EnergyProfiler/lib \
#	-I ../../../EAJobs/interfaces \
#	-I ../../interfaces \
#	-I ../../../EAJobs/lib \
#	-I ../../../MyLocalTime/lib \
#	-I ../../lib \
#	-I ../../lib/jobs \
#	-I ../../lib/sensors \
#	-I ../../lib/configurator \
#	-I ../../lib/generic_crc \
#	-I ../../chips/atm128/flash
#        -I$(TOSDIR)/lib/printf
	
#LDFLAGS += ../../lib/FixPointMath.c
LDFLAGS += ../../lib/Statistics.c

include $(MAKERULES)
