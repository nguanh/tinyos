/*
 * Copyright (c) 2010, Vanderbilt University
 * Copyright (c) 2011, Hamburg University of Technology
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of the copyright holder nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Author: Janos Sallai
 * Author: Christian Renner
 */  
 
module Atm128HybridAlarmCounterP {
	uses {
		interface Counter<TMicro,uint32_t> as Counter1mhz;
		interface Counter<TMilli,uint32_t> as CounterMilli;
		interface GetNow<uint32_t> as MilliRef;
		interface GetNow<uint16_t> as MicroRef;
//		interface Alarm<TMicro,uint16_t> as AlarmMicro;
//		interface Alarm<TMilli,uint16_t> as AlarmMilli;
	}
	provides {
  		interface McuPowerOverride;
		interface Counter<TMicro,uint32_t> as CounterMicro;
//		interface Alarm<TMicro,uint32_t> as AlarmMicro;
	}
}
implementation {
	
//  norace uint32_t fireTime;
  norace uint32_t last = 0;

  /*------------------------- UTILITY FUNCTIONS -------------------------*/
  inline uint32_t refMilli() {
    return call MilliRef.getNow();
  }

  inline uint32_t nowMilli() {
    return call CounterMilli.get();
  }

  // returns the micro count since last capture event (timer 2 wake-up)
  inline uint32_t delta1mhz() {
    return call Counter1mhz.get();
  }

  inline uint32_t nowMicro() {
    uint32_t  tMilli, eMicro, tMicro;
//    uint32_t  mMilli, mMicro;
#ifdef PIN_DEBUG
    * (volatile uint8_t *) 40U |= 0x80;
#endif
    atomic {
      // reference milli time, i.e., the milli time of the latest
      // latest compare event
      tMilli = refMilli();
	
      // get delta of 1mhz counter, i.e., the micro time since the latest
      // compare event
      eMicro = delta1mhz();

      // current milli time
//      mMilli  = nowMilli();
    }
	
    // convert reference milli time to micro time
    tMicro = (tMilli) << 10;

    // adjust with the elapsed micro time since latest compare
    tMicro += eMicro;

    // get micro time from milli time
/*    mMicro = (mMilli + 1) << 10;
    if ((mMicro - tMicro) & 0x80000000UL) {
      return mMicro;
    } else {
      return tMicro;
    }
*/
//    if (mMicro < tMicro) *tMicro = mMicro;

    // new time must not be in the past
    // TODO possibly check whether the following is sufficient
    // min((*nowMilli+1) << 10, *tMicro);
    // wrap-around ?
    // TODO maybe change to comparison:
    // the delta cannot be larger than 255*2^10 or even 230*2^10,
    // since the timers are synced with that interval (worst case)
    // TODO instead of stopping the clock, we could use a correction bias (offset)
    if ((tMicro - last) & 0x80000000UL) {
#ifdef PIN_DEBUG
      * (volatile uint8_t *) 40U ^= ~0x40;
#endif
      tMicro = last;
    } else {  // TODO is it really faster to have a second jump as opposed to a (useless) assignment?
      last = tMicro;
    }

#ifdef PIN_DEBUG
    * (volatile uint8_t *) 40U &= ~0x80;
#endif

    return tMicro;
  }


  /*------------------------- COUNTER -------------------------*/
   
  /** 
   * Return counter value.
   * @return Current counter value.
   */ 
   async command uint32_t CounterMicro.get() {
	return nowMicro();
   }

  /** 
   * Return TRUE if an overflow event will occur after the outermost atomic
   * block exits.  FALSE otherwise.
   * @return Counter pending overflow status.
   */
  async command bool CounterMicro.isOverflowPending() {
  	return call CounterMilli.isOverflowPending();
  }

  /**
   * Cancel a pending overflow interrupt.
   */
  async command void CounterMicro.clearOverflow() {
  	return call CounterMilli.clearOverflow();
  }

  /**
   * micro timer overflows when milli timer does.
   */
  async event void CounterMilli.overflow() {
  	signal CounterMicro.overflow();
  }

  async event void Counter1mhz.overflow() {}
  default async event void CounterMicro.overflow() {}


  /*------------------------- ALARM -------------------------*/
	
  /**
   * Set a single-short alarm to some time units in the future. Replaces
   * any current alarm time. Equivalent to start(getNow(), dt). The
   * <code>fired</code> will be signaled when the alarm expires.
   *
   * @param dt Time until the alarm fires.
   */
/*
  async command void Alarm2ghz.start(uint32_t dt) {
   	uint16_t tMicro, t32khz;
	uint32_t t2ghz;
	
	// read all clocks
	now(&t32khz, &tMicro, &t2ghz);
	
	// stop running alarms
	call Alarm2ghz.stop();

	// absolute time of requested firing
	fireTime = t2ghz + dt;
	
	// if dt is close (less than 32 32khz ticks), set up Micro alarm
	if(dt < (1024ULL << 11)) {
		call AlarmMicro.startAt(tMicro, dt >> 11);
	} else {
		// set up 32khz alarm 8 ticks before it's time
		call Alarm32khz.startAt(t32khz, (dt >> 16) - 8);		
	}	
  }

  async event void Alarm32khz.fired() {
   	uint16_t tMicro, t32khz;
	uint32_t t2ghz, dt;
	
	// read all clocks
	now(&t32khz, &tMicro, &t2ghz);

	// compute time to firing
	dt = fireTime - t2ghz;
  	
	call AlarmMicro.startAt(tMicro, dt >> 11);
  }

  async event void AlarmMicro.fired() {
  	// signal Alarm2ghz.fired
	signal Alarm2ghz.fired();	
  }
*/
  /**
   * Cancel an alarm. Note that the <code>fired</code> event may have
   * already been signaled (even if your code has not yet started
   * executing).
   */
/*
  async command void Alarm2ghz.stop() {
	call Alarm32khz.stop();
	call AlarmMicro.stop();  	
  }

  default async event void Alarm2ghz.fired() {}
*/
  /**
   * Check if alarm is running. Note that a FALSE return does not indicate
   * that the <code>fired</code> event will not be signaled (it may have
   * already started executing, but not reached your code yet).
   *
   * @return TRUE if the alarm is still running.
   */
/*
  async command bool Alarm2ghz.isRunning() {
	return call Alarm32khz.isRunning()
		|| call AlarmMicro.isRunning();  	
  }
*/
  /**
   * Set a single-short alarm to time t0+dt. Replaces any current alarm
   * time. The <code>fired</code> will be signaled when the alarm expires.
   * Alarms set in the past will fire "soon".
   * 
   * <p>Because the current time may wrap around, it is possible to use
   * values of t0 greater than the <code>getNow</code>'s result. These
   * values represent times in the past, i.e., the time at which getNow()
   * would last of returned that value.
   *
   * @param t0 Base time for alarm.
   * @param dt Alarm time as offset from t0.
   */
/*
  async command void Alarm2ghz.startAt(uint32_t t0, uint32_t dt) {
   	uint16_t tMicro, t32khz;
	uint32_t t2ghz;
	
	// read all clocks
	now(&t32khz, &tMicro, &t2ghz);
	
	// stop running alarms
	call Alarm2ghz.stop();

	// absolute time of requested firing
	fireTime = t0 + dt;
	
	// time till requested firing
	dt = fireTime - t2ghz;

	// if dt is close (less than 32 32khz ticks), set up Micro alarm
	if(dt < (1024ULL << 11)) {
		call AlarmMicro.startAt(tMicro, dt >> 11);
	} else {
		// set up 32khz alarm 8 ticks before it's time
		call Alarm32khz.startAt(t32khz, (dt >> 16) - 8);		
	}	
  }
*/
  /**
   * Return the current time.
   * @return Current time.
   */
/*
  async command uint32_t Alarm2ghz.getNow(){
  	return now2ghz();
  }
*/
  /**
   * Return the time the currently running alarm will fire or the time that
   * the previously running alarm was set to fire.
   * @return Alarm time.
   */
/*
  async command uint32_t Alarm2ghz.getAlarm() {
  	return fireTime;
  }
*/

  async command mcu_power_t McuPowerOverride.lowestState() {
    // FIXME not needed unless we are implementing an alarm in here
    return ATM128_POWER_STANDBY;  // or should this be EXT_STANDBY
//
/*
// the following is only needed, when we use alarm functionality
  	if(call AlarmMicro.isRunning())
    		return ATM128_POWER_SAVE; // or should this be EXT_STANDBY ??
	else
    		return ATM128_POWER_DOWN;
*/
  }     
  
}

