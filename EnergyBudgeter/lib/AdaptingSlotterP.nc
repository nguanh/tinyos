//#include "Timer.h"
#include "parameters.h"

typedef uint8_t  slice_t;
typedef uint8_t  slot_t;
typedef uint8_t  slotlen_t;
typedef uint16_t slotval_t;

// solar current as fp_t needs maximum 14 bits (max 35.0 mA -> 6+8 Bits)
// algorithm can only handle 10 bit values
#define SHIFT 6

//  S:          number of slots
//  baseIntvl:  length of one base interval (s)
//  T:          number of intervals per period
generic module AdaptingSlotterP(slot_t S, uint16_t baseIntvl, uint16_t T, uint16_t ALPHA, uint16_t XI, uint16_t BETA)
{
  provides {
    interface Slotter;
    interface EAJob;
    interface Performance;
  }
  uses {
    interface IntervallSensor<fp_t>;
    interface Leds;

    interface AMPacket;
    interface Packet;
    interface AMSend;
    interface GlobalTime<TMilli> @atleastonce();
    interface Receive;
  }
}
implementation
{  
  uint8_t firstRun;

  typedef nx_struct {
    nx_uint16_t value:10;
    nx_uint16_t length:6;
  } NxSlot;

  typedef nx_struct SlotsMsg {
    //nx_uint32_t time;
    nx_uint8_t numSlots;
    nx_uint8_t currentSlot;
    NxSlot slots[S];
  } SlotsMsg;

  message_t msg;
  uint8_t externalInit = 0;

#include "../../SolarPredictor/predictor/predictorAlgorithm.c"

#define SLEEP_TIME (((uint32_t)baseIntvl) * getCurSliceLength())
  command void Slotter.start() {
    //*(volatile uint8_t *)39U |= 1 << 3;  // make output 
    init();
    firstRun = 1;
    //signal EAJob.postJob((1024*SLEEP_TIME)/SPEEDUP);
    //signal EAJob.postJob((1024*60*8)/SPEEDUP); // should be long enough for measuring current solar power
    signal EAJob.postJob(1024*(uint32_t)120);
  }

  command slotlen_t Slotter.getLength(slot_t slotNumber)
  {
    return LENGTH(slotNumber);
  }

  command fp_t Slotter.getValue(slot_t slotNumber)
  {
#if SHORTTERM
    if(slotNumber == curSlot) {
      return shortTermPrediction;
    } else {
#endif
      return MEAN(slotNumber)<<SHIFT;
#if SHORTTERM
    }
#endif
  }

  command uint16_t Slotter.getBaseIntvl()
  {
    return baseIntvl;
  }

  command slot_t Slotter.getS()
  {
    return S;
  }

  command slot_t Slotter.getCurrentSlot()
  {
    return curSlot;
  }
/*
  command uint32_t Slotter.getTime()
  {
    return time;
  }
  */

// TODO 32?
  command void EAJob.run()
  {
    uint32_t currentTime;
    uint32_t nextTime;
    uint8_t s, sli;
    bool slotEnded = 0;

    if(!firstRun) {
      //  *(volatile uint8_t *)40U |= 1 << 3;  // set
      switch(finishSlice(call IntervallSensor.get(TRUE)>>SHIFT)) {
        case 2:
          signal Slotter.cycleEnded();
          // no break - handle case 1 too    TODO does this work???
        case 1:
          signal Slotter.slotEnded();
          slotEnded = 1;
          break;
        default:
          break;
      }
      //  *(volatile uint8_t *)40U &= ~(1 << 3);  // clear

      // FIXME above finishSlice???
      //    call Timer.startOneShot(baseIntvl * getCurSliceLength() - (call Timer.getNow() - call Timer.gett0()));
      // TODO duration of task
//      signal EAJob.postJob((1024*SLEEP_TIME)/SPEEDUP);
    }

    // correcting timeshift - slot[0] should start at 0:00 for better comparison
    call GlobalTime.getGlobalTime(&currentTime);
    currentTime /= (1024/SPEEDUP);
    currentTime = (currentTime+(TIMEZONE*60*60))%(((uint32_t)60)*60*24);

    nextTime = 0;
    for(s = 0; s < S; s++) {
      if(nextTime+LENGTH(s)*baseIntvl > currentTime) {
        break;
      }
      nextTime+=LENGTH(s)*baseIntvl;
    }

    for(sli = 0; sli < NUM_SLICES; sli++) {
      nextTime+=(LENGTH(s)*baseIntvl)/NUM_SLICES;
      if(nextTime > currentTime) {
        break;
      }
    }

    curSlot = s;
    curSlice = sli;
    //signal EAJob.postJob((1024*SLEEP_TIME)/SPEEDUP);

    // convert into local times (for local TMilli Timer)
    currentTime*=(1024/SPEEDUP);
    nextTime*=(1024/SPEEDUP);
    call GlobalTime.global2Local(&currentTime);
    call GlobalTime.global2Local(&nextTime);
    if(nextTime > currentTime) {
      signal EAJob.postJob(nextTime-currentTime);
    } else {
      signal EAJob.postJob(0);
    }


    if(!firstRun && slotEnded) {
      uint8_t  slot;
#ifdef SIMULATE
      float time = NOW;
      uint8_t lastSlot = curSlot;
      if(lastSlot == 0) {
        lastSlot = S;
      }
      lastSlot--;
      dbg("Slotter","%f\t %i\t # curSlot\n",NOW,curSlot);

      for(slot = curSlot; slot != lastSlot; slot=(slot+1)%S) {
        fp_t Is = call Slotter.getValue(slot);                                   // in mA
        uint16_t len = call Slotter.getLength(slot)*call Slotter.getBaseIntvl(); // in s, max 18 h
        dbg("Slotter","%f\t %f\t # predIh\n",time,FP_FLOAT(Is));
        dbg("Slotter","%f\t %i\t # slotLen\n",time,call Slotter.getLength(slot));
        dbg("Slotter","%f\t %i\t # slolen\n",time,len);
        time+=(call Slotter.getLength(slot)*call Slotter.getBaseIntvl())/(60.0*60.0);
      }
      signal EAJob.done();
#else
      SlotsMsg* p;
      p = (SlotsMsg *)call Packet.getPayload(&msg, sizeof(SlotsMsg));
      call Packet.clear(&msg);

      //i = call GlobalTime.getGlobalTime(&timestamp);
      //p->time = (i == 0)?timestamp:0; TODO

      p->numSlots = S;
      p->currentSlot = curSlot;

      for(slot = 0; slot < S; slot++) {
        p->slots[slot].value = MEAN(slot);
        p->slots[slot].length = LENGTH(slot);
      }

      if (SUCCESS != call AMSend.send(0, &msg, sizeof(SlotsMsg))) {
        signal EAJob.done();
      }
#endif
    }
    else {
      firstRun = 0;
      signal EAJob.done();
    }
  }
  
  event void AMSend.sendDone(message_t * rmsg, error_t res) {
    signal EAJob.done();
  }

  event message_t* Receive.receive(message_t* bufPtr, void* payload, uint8_t len) {
    if (externalInit == 0 && len == sizeof(SlotsMsg)
        && call AMPacket.destination(bufPtr) == call AMPacket.address()) { // do not use broadcasted packets
      uint8_t i;
      SlotsMsg* p = (SlotsMsg*)payload;
      externalInit = 1;
      curSlot = p->currentSlot;
      curSlice = 0;

      for(i = 0; i < S; i++) {
        SET_MEAN(i,p->slots[i].value);
        SET_LENGTH(i,p->slots[i].length);
      }
      call Leds.led2Off();
    }

    return bufPtr;
  }

#ifdef SIMULATE
  command consumption_t EAJob.getSimulatedConsumption() {
    return 7;
  }

  command uint32_t EAJob.getSimulatedDuration() {
    return 1;
  }
#endif

  command HourlyConsumption Performance.getHourlyConsumption(Level level) {
    HourlyConsumption res;
    res.energy = (signal EAJob.requestConsumption()*S)/call Slotter.getS();
    res.duration = (signal EAJob.requestDuration()*S)/call Slotter.getS();
    return res;
  }

  command void Performance.setLevel(Level level) {
  }
}

