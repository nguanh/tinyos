#include "FixPointMath.h"
#include "Sunshine.h"
#include "Orinoco.h"
#include "Reporting.h"
#include "HarvestForecastReportingMsg.h"
#include "OrinocoConfigReportingMsg.h"

module TestC {
  uses {
    interface Boot;

    interface Caplibrate;

    interface EnergyBudget;

    interface SplitControl as RadioControl;
    interface StdControl as ForwardingControl;
    interface RootControl;
    interface Packet;
    interface QueueSend as Send[collection_id_t];

    interface OrinocoConfig;

    interface OrinocoTrafficStatistics as OrinocoStats;
    interface Slotter;

    interface Receive as EnergyReportingMsg;
    interface Receive as OrinocoStatsReportingMsg;
    interface Receive as OrinocoDebugReportingMsg;
    interface Receive as SunshineConfigReportingMsg;
  }
}
implementation {
  event message_t * EnergyReportingMsg.receive(message_t * msg, void * payload, uint8_t len) {
    call Send.send[CID_ENERGY_REPORT](msg, len);  // packet is copied or rejected
    return msg;
  }

  event message_t * OrinocoStatsReportingMsg.receive(message_t * msg, void * payload, uint8_t len) {
    call Send.send[CID_ORINOCO_STATS_REPORT](msg, len);  // packet is copied or rejected
    return msg;
  }

  event message_t * OrinocoDebugReportingMsg.receive(message_t * msg, void * payload, uint8_t len) {
    call Send.send[CID_ORINOCO_DEBUG_REPORT](msg, len);  // packet is copied or rejected
    return msg;
  }

  event message_t * SunshineConfigReportingMsg.receive(message_t * msg, void * payload, uint8_t len) {
    call Send.send[CID_SUNSHINE_CONFIG_REPORT](msg, len);  // packet is copied or rejected
    return msg;
  }


  event void Boot.booted() {
    // we're no root, just make sure
    call RootControl.unsetRoot();  // make this node a root

    // switch on radio and enable routing
    call RadioControl.start();
    call ForwardingControl.start();

//    call OrinocoConfig.setMinQueueSize(5);  // FIXME remove

    // trigger cap calibration after start-up
    call Caplibrate.calibrateCap();  // FIXME should not be here ...
  }


  event void EnergyBudget.budgetUpdated(fp_t maxCurrent) {
    static data_seqno_t seqno = 0;
    message_t  msg;
    OrinocoConfigReportingMsg * p;

    uint16_t  rxIntvl, crIntvl;

    float     den, tb, t, tp;
    float     q;
    uint32_t  tslp;

    // setup
    const double curActive = 19.5;
    const double curSleep  = 40e-3;


    // consumption information for current period
    // Orinoco sending consumption (waiting + sending)
    // Orinoco receiving consumption (beacon + rx)
    // Rest is self-consumption
    // check consumption vs. scheduled load
/*
    struct {
      uint32_t      startTime;         // starting time of elapsed period
      consumption_t startConsumption;  // consumption count at period start
      uint16_t      maxLoad;           // max load for current/last interval
      uint16_t      schedLoad;         // actually scheduled load
      uint ...
    } period_t;
*/
    

//printf("EnergyBudget.budgetUpdated\n");
//printfflush();

    crIntvl = call OrinocoStats.getPktCreationIntvl();
    rxIntvl = call OrinocoStats.getPktReceptionIntvl();
    if (rxIntvl == 0) {
      rxIntvl = 1;
    }

    // denominator
    tp  = (ORINOCO_ACK_WAITING_TIME + ORINOCO_DATA_WAITING_TIME + call OrinocoConfig.getMinDwellTime()/2);
    den = FP_FLOAT(maxCurrent) / curActive;
    //den = 1024.0 * den * crIntvl * rxIntvl - tp * (rxIntvl + 2.0 * crIntvl);
    den = 1024.0 * den * crIntvl * rxIntvl - 2 * tp * (rxIntvl + crIntvl);

    // ack time == beacon time
    t = (call OrinocoStats.getForwardDelay() + ORINOCO_ACK_WAITING_TIME) * ((float)rxIntvl + crIntvl);

    // optimal queue length
    if (den > 0) {
      q = 2 * t / den;

      // check boundaries
      if (q > ORINOCO_QUEUE_SIZE / 3) {
        q = ORINOCO_QUEUE_SIZE / 3;
      } else {
        q = 1 + (uint8_t)q; // ceil(x) approx. 1 + floor(x), but faster
      }
    } else {
      // low energy => max allowed queue size
      q = ORINOCO_QUEUE_SIZE / 3;
    }


    // optimal sleep interval
    // FIXME => this is the wrong equation! Its sole purpose is equalize consumption, which
    // gives wrong results / parameters, if q is forced down to its maximum! We must use the
    // energy consumption equation at this point!
    tb = (ORINOCO_ACK_WAITING_TIME + ORINOCO_DATA_WAITING_TIME + call OrinocoConfig.getMinDwellTime());

    //den -= ( curSleep / curActive ) + ( t / q );
    //den = 1024.0 * den * crIntvl * rxIntvl - tp * (rxIntvl + 2.0 * crIntvl);
    den = ( FP_FLOAT(maxCurrent) - curSleep) / curActive;
    den = 1024.0 * den * crIntvl * rxIntvl  - t/q - tp * (rxIntvl + 2*crIntvl);

    if (den > 0) {
      tslp = (uint32_t)((1024.0 * tb * rxIntvl * crIntvl) / den);  // result is ms
      if (tslp > tb) {
        tslp -= tb;
      } else {
        tslp = 0;
      }
    } else {
      tslp = ORINOCO_WAKEUP_INTERVAL_MAX;
    }

    //tslp = (uint32_t)((1024.0 * tb * q * rxIntvl * crIntvl) / t);
    // TODO overflow?
   
    // check boundaries
    if (tslp < ORINOCO_WAKEUP_INTERVAL_MIN) {
      tslp = ORINOCO_WAKEUP_INTERVAL_MIN;
    } else if (tslp > ORINOCO_WAKEUP_INTERVAL_MAX) {
      tslp = ORINOCO_WAKEUP_INTERVAL_MAX;
    }

    // update config
    call OrinocoConfig.setWakeUpInterval((uint16_t)tslp);
    call OrinocoConfig.setMinQueueSize((uint8_t)q);

    // prepare reporting packet and send it
    call Packet.clear(&msg);
    p = (OrinocoConfigReportingMsg *)call Packet.getPayload(&msg, sizeof(OrinocoConfigReportingMsg));
    p->seqno        = seqno++; 
    p->minQueueSize = call OrinocoConfig.getMinQueueSize();
    p->wakeUpIntvl  = call OrinocoConfig.getWakeUpInterval();
    p->maxLoad      = maxCurrent;
    p->receiveIntvl = rxIntvl;
    p->createIntvl  = crIntvl;
    p->forwardDelay = call OrinocoStats.getForwardDelay();

//printf("%u %u %u %u", seqno-1, p->minQueueSize, p->wakeUpIntvl, p->maxLoad);
//printfflush();

    call Send.send[CID_ORINOCO_CONFIG_REPORT](&msg, sizeof(OrinocoConfigReportingMsg));  // packet is copied or rejected
  }

  event void Slotter.slotEnded(uint8_t) { }

  event void Slotter.cycleEnded() {
    static data_seqno_t            seqno = 0;
    message_t                      msg;
    HarvestForecastReportingMsg  * p;
    uint8_t                        s, i;

    //printf("cycleEnded (paylen %u)\n", sizeof(HarvestForecastReportingMsg));

    for (s = 0; s < call Slotter.getNumSlots();) {
      call Packet.clear(&msg);
      p = (HarvestForecastReportingMsg *)call Packet.getPayload(&msg, sizeof(HarvestForecastReportingMsg));
      p->seqno     = seqno++;
      p->numSlots  = call Slotter.getNumSlots();
      p->firstSlot = s;
      for (i = 0; i < MAX_SLOTS_PER_MSG /*&& s < call Slotter.getNumSlots()*/; i++, s++) {
        // NOTE calls to Slotter.getSlotValue/Len return 0 for invalid indices
        p->slotVal[i] = call Slotter.getSlotValue(s);
        p->slotLen[i] = call Slotter.getSlotLength(s);
      }
      call Send.send[CID_HARVEST_FORECAST_REPORT](&msg, sizeof(HarvestForecastReportingMsg));  // packet is copied or rejected
      //printf("sent packet %u-%u / %u (%u)\n", p->firstSlot, s-1, p->numSlots, sizeof(HarvestForecastReportingMsg));
    }
    //printfflush();
  }


  event void Caplibrate.calibrateCapDone(fp_t, error_t) {
    // nothing
  }


  event void RadioControl.startDone(error_t res) {
  }

  event void RadioControl.stopDone(error_t res) {
  }
}
