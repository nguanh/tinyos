#include "SunshineConfigReportingMsg.h"

module SunshineConfigReportingJobP {
  provides {
    interface Receive;
  }
  uses {
    interface Packet;
    interface EAJob;
    interface GetSet<const capcontrol_config_t *>      as CapConfig;
    interface GetSet<const solar_converter_config_t *> as SolarConfig;

  }
}
implementation {
  message_t     msg_;
  message_t   * pmsg_ = &msg_;
  data_seqno_t  seqno_ = 0;

  // run job
  event void EAJob.run() {
    SunshineConfigReportingMsg * p = (SunshineConfigReportingMsg *)
      call Packet.getPayload(pmsg_, sizeof(SunshineConfigReportingMsg));

    // prepare data packet
    call Packet.clear(pmsg_);
    p->seqno = seqno_++;

    p->capacity          = (call CapConfig.get())->capacity;
    p->solarSensorOffset = (call SolarConfig.get())->offset;

    // signal data availability
    pmsg_ = signal Receive.receive(pmsg_, p, sizeof(SunshineConfigReportingMsg));

    // and we're done
    call EAJob.done();
  }
}

