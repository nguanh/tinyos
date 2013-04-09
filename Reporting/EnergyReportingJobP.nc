#include "EnergyReportingMsg.h"
#include "EnergyTracker.h"  /* auto-generated at compile time */

extern uint32_t epWasteTime;  // in EnergyProfiler

module EnergyReportingJobP {
  provides {
    interface Receive;
  }
  uses {
    interface Packet;

    interface EAJob;

    interface Get<fp_t>    as SolarCurrent;
    interface Get<fp_t>    as CapVoltage;
#ifdef USE_REFCAP
    interface Get<fp_t>    as RefCapVoltage;
#endif
    interface Get<sfp_t>   as TempSensor;
    interface Get<fp_t>    as LightSensor;

    interface SensorValueUpdate<fp_t>    as SolarCurrentUpdate;
    interface SensorValueUpdate<sfp_t>   as TempSensorUpdate;
    interface SensorValueUpdate<fp_t>    as LightSensorUpdate;

    interface EnergyConsumption;
  }
}
implementation {
  message_t     msg_;
  message_t   * pmsg_ = &msg_;
  data_seqno_t  seqno_ = 0;

  // internal values
  uint16_t      nCur_ = 0, nTemp_ = 0, nLight_ = 0;
  uint32_t      sCur_, sLight_;
  int32_t       sTemp_;

  // event updates
  event void SolarCurrentUpdate.update(fp_t val) {
    sCur_ += val;
    nCur_++;
  }

  event void TempSensorUpdate.update(sfp_t val) {
    sTemp_ += val;
    nTemp_++;
  }

  event void LightSensorUpdate.update(fp_t val) {
    sLight_ += val;
    nLight_++;
  }


  // run job
  event void EAJob.run() {
    EnergyReportingMsg * p = (EnergyReportingMsg *)
      call Packet.getPayload(pmsg_, sizeof(EnergyReportingMsg));

    // prepare data packet
    call Packet.clear(pmsg_);
    p->seqno = seqno_++;

    p->Vc    = call CapVoltage.get();
#ifdef USE_REFCAP
    p->Vref  = call RefCapVoltage.get();
#else
    p->Vref  = 0;
#endif
    p->Is    = (nCur_   > 0) ? (sCur_   / nCur_)   : call SolarCurrent.get();
    p->light = (nLight_ > 0) ? (sLight_ / nLight_) : call LightSensor.get();
    p->temp  = (nTemp_  > 0) ? (sTemp_  / nTemp_)  : call TempSensor.get();
    nCur_   = sCur_   = 0;
    nLight_ = sLight_ = 0;
    nTemp_  = sTemp_  = 0;

    p->conMCU   = call EnergyConsumption.getConsumption(EPC_MCU);
    p->conRadio = call EnergyConsumption.getConsumption(EPC_RADIO);
    p->conTotal = call EnergyConsumption.getTotalConsumption();
    p->epWaste  = epWasteTime;

    // signal data availability
    pmsg_ = signal Receive.receive(pmsg_, p, sizeof(EnergyReportingMsg));

    // and we're done
    call EAJob.done();
  }
}

