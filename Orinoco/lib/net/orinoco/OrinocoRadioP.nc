/* $Id: $ */
/*
 * Copyright (c) 2011 Hamburg University of Technology (TUHH).
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of the Hamburg University of Technology nor
 *   the names of its contributors may be used to endorse or promote
 *   products derived from this software without specific prior written
 *   permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE
 * HAMBURG UNIVERSITY OF TECHNOLOGY OR ITS CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
 * OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
 * USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 */

/**
 * @author Christian Renner
 * @date December 14 2011
 */

//#include <RadioAssert.h>
#include "OrinocoBeaconMsg.h"
#include "Orinoco.h"
#include "OrinocoPlatform.h"
#include "Statistics.h"

module OrinocoRadioP {
  provides {
    interface SplitControl;

    interface Packet;
    interface Send;
    interface Receive;

    interface OrinocoBackoffConfig as BackoffConfig;

#ifdef ORINOCO_DEBUG_STATISTICS
    interface Get<const orinoco_packet_statistics_t *> as PacketStatistics;
#endif
  }
  uses {
    interface SplitControl as SubControl;
    interface Timer<TMilli>;
    interface LocalTime<TMilli>;

    // sending and receiving
    interface Packet as SubPacket;
    interface AMPacket as SubAMPacket;
    interface Receive as BeaconSubReceive; // NOTE and also snoop
    interface Receive as DataSubReceive;
    interface AMSend as BeaconSubSend;
    interface AMSend as DataSubSend;

    // path metric
    interface OrinocoPathCost as PathCost;
    interface LinkPacketMetadata;
//    interface PacketField<uint8_t> as PacketRSSI;

    // routing
    interface OrinocoRoutingInternal as Routing; 

    // configuration
    interface OrinocoConfig as Config;
    interface Random;

    interface Leds;

    interface OrinocoTrafficStatistics as TrafficStats;
    interface OrinocoTrafficUpdates    as TrafficUpdates;
  }
}
implementation {
  // current dwelling time
  uint8_t curCongestionWin_;

  // local buffer and state information for pending tx packet (if any)
  error_t      txDataError_;
  am_addr_t    txDataDst_;
  uint8_t      txAttempts_ = 0;
  message_t  * txDataMsg_  = NULL;
  uint8_t      txDataLen_;
  uint8_t      txDataMaxBackoff_ = 0;
  message_t    txBeaconMsg_;
  am_addr_t    txBeaconDst_  = AM_BROADCAST_ADDR;

  bool         beaconCancel_ = FALSE;

#ifdef ORINOCO_DEBUG_STATISTICS
  orinoco_packet_statistics_t   ps_ = {0};
#endif


  /*** beacon handling ***************************************************/
  
  // prepare and send a beacon
  error_t sendBeacon() {
    OrinocoBeaconMsg  * p;
    error_t             error;

    call SubPacket.clear(&txBeaconMsg_);
    p = call BeaconSubSend.getPayload(&txBeaconMsg_, sizeof(OrinocoBeaconMsg));
    p->cost  = call PathCost.getCost();
    p->cw    = curCongestionWin_;
    p->route = *(call Routing.getCurrentBloomFilter()); 
    
    // try sending
    #ifdef PRINTF_H
      printf("%lu: sending beacon to 0x%04x (routing version %d)\n", call LocalTime.get(), txBeaconDst_, p->route.version);
      printfflush();
    #endif
    
    error = call BeaconSubSend.send(txBeaconDst_, &txBeaconMsg_, sizeof(OrinocoBeaconMsg));

    // reset beacon sending address (next one is no ack by default)
    txBeaconDst_ = AM_BROADCAST_ADDR;
    
    return error;
  }

  // process beacon and determine whether to accept neigbhor for data forwarding
  bool processBeacon(message_t * msg, bool update) {
    bool accept = FALSE;

    // TODO this could be encapsulated by a stand-alone module to enable
    // different implementations
    // FIXME experimental
    if (TRUE) { //call LinkPacketMetadata.highChannelQuality(msg) || call PathCost.getCost() == ORINOCO_PATHCOST_INF) {
      OrinocoBeaconMsg * p = (OrinocoBeaconMsg *)call SubPacket.getPayload(msg, sizeof(OrinocoBeaconMsg *));

      accept = call PathCost.inspectBeacon(msg, p->cost, update);
      if (accept) {
        // if this beacon is acceptible, store sender id for (immediate) forwarding
        txDataDst_        = call SubAMPacket.source(msg);
        // store max. backoff (the back-offing is implemented in OrinocoForwardLayer)
        txDataMaxBackoff_ = p->cw;
        
        // forwarded accepted beacon routing payload to routing subcomponent
        call Routing.updateBloomFilter(p->route);
      }
    }

#ifdef ORINOCO_DEBUG_STATISTICS
    ps_.numRxBeacons++;
    if (! accept) ps_.numIgnoredBeacons++;
#endif

    //printf("%lu: processing beacon from 0x%04x, accept = %u\n", call LocalTime.get(), call SubAMPacket.source(msg), accept);
    //printfflush();
    
    return accept;
  }
  
  /*** beacon preparation and sending ************************************/
  inline uint16_t getRandomSleepTime() {
    uint16_t   rdev;
    rdev  = call Random.rand16() % (2 * call Config.getAbsWakeUpDeviation());
    return call Config.getWakeUpInterval() + call Config.getAbsWakeUpDeviation() - rdev;
  }

  inline uint32_t getMaxWaitingTime() {
    //return call Config.getWakeUpInterval() + call Config.getAbsWakeUpDeviation();
    // assuming there is only one neighbor, its estimated beacon interval would
    // be 2*E{fwdDelay}. This minimum waiting window is increased to avoid
    // premature adaptation to poor weights (most likely leading to routing loops)
    return call Config.getNumWaitingIntervals() * (2 * call TrafficStats.getForwardDelay());
  }


  /*** state machine *****************************************************/
  // TODO check which ones MUST have consecutive indices
  // those marked with a '+' must be consecutive (the one with the plus follow its predecessor)
  enum {
    OFF,                         //  we're off
    OFF_SUBSTOP,                 //  shall call SubControl.stop
    OFF_SUBSTOP_DONE,            //+ waiting for SubControl.stopDone
    OFF_STOP,                    //+ stop protocol
    OFF_START,                   //  start protocol

    RECEIVE_SUBSTART,            //+ shall call SubControl.start to enable reception
    RECEIVE_SUBSTART_DONE,       //+ waiting for SubControl.startDone
    RECEIVE_SUBSEND,             //+ shall send beacon via SubSend.send
    RECEIVE_SUBSEND_DONE,        //+ waiting for SubSend.sendDone (sent beacon)
    RECEIVE_TIMER,               //+ set timer after beacon
    RECEIVE,                     //+ may receive data
    RECEIVE_DONE,                //  current reception phase completed, TODO needed?

    FORWARD_SUBSTART,            //  shall call SubControl.start to forward data
    FORWARD_SUBSTART_DONE,       //+ waiting for SubControl.startDone
    FORWARD_TIMER,               //  set timer
    FORWARD,                     //  listen and wait for a beacon
    FORWARD_SUBSEND,             //  shall send data packet via SubSend.send
    FORWARD_SUBSEND_DONE,        //+ waiting for SubSend.sendDone
    FORWARD_DONE,                //  packet has been sent, TODO what comes afterwards?

    SLEEP_SUBSTOP,               //  shall call SubControl.stop to sleep
    SLEEP_SUBSTOP_DONE,          //+ waiting for SubControl.stopDone
    SLEEP_TIMER,                 //+ set wake-up timer
    SLEEP                        //  sleeping
  };
  uint8_t state_ = OFF;  // disabled by default


  task void transition() {
    error_t  error;

    // switch on radio to receive or forward
    if (state_ == RECEIVE_SUBSTART || state_ == FORWARD_SUBSTART) {
      error = call SubControl.start();
      //RADIO_ASSERT(error == SUCCESS || error == EBUSY);

      if (error == SUCCESS) {
        state_++;             // ok -> next state
      } else {
        post transition();    // error -> retry (keep state, repost this task)
      }

    // switch off radio for sleeping or complete disable (off)
    } else if (state_ == SLEEP_SUBSTOP || state_ == OFF_SUBSTOP) {
      error = call SubControl.stop();
      //RADIO_ASSERT(error == SUCCESS || error == EBUSY);
    
      if (error == SUCCESS) {
        state_++;             // ok -> next state
      } else {
        post transition();    // error -> retry (keep state, repost this task)
      }

    // protocol enabled after off-state
    } else if (state_ == OFF_START) {
      // reset congestion window
      curCongestionWin_ = call Config.getMinDwellTime();

      // TODO what about the init phase?
      state_ = RECEIVE_SUBSTART;
      post transition();
      signal SplitControl.startDone(SUCCESS);

    // switched off
    } else if (state_ == OFF_STOP) {
      state_ = OFF;
      signal SplitControl.stopDone(SUCCESS);

    // start sleep timer and proceed to sleep state
    } else if (state_ == SLEEP_TIMER) {
      call Timer.startOneShot(getRandomSleepTime());
      state_ = SLEEP;

    // start timer to limit waiting time
    } else if (state_ == FORWARD_TIMER) {
      call Timer.startOneShot(getMaxWaitingTime());
      state_ = FORWARD;

      call TrafficUpdates.updateForwardDelay(TRUE);

    // start receive timer (timeout)
    } else if (state_ == RECEIVE_TIMER) {
      call Timer.startOneShot(curCongestionWin_ + ORINOCO_DATA_WAITING_TIME);
      state_ = RECEIVE;

    // shall send current packet
    } else if (state_ == FORWARD_SUBSEND) {
      //RADIO_ASSERT(txDataMsg_ != NULL);
      txDataError_ = call DataSubSend.send(txDataDst_, txDataMsg_, txDataLen_);

      if (txDataError_ == SUCCESS) {
        state_ = FORWARD_SUBSEND_DONE;
      } else {
        state_ = FORWARD_DONE;  // FIXME is this correct? why should we give up, if sending is not possible at the moment? The question is: will we enable reception in between, so that we cannot block the network?
        post transition();
      }

    // shall send current packet
    } else if (state_ == RECEIVE_SUBSEND) {
      error = sendBeacon();

      if (error == SUCCESS) {
        state_ = RECEIVE_SUBSEND_DONE;
      } else {
        state_ = RECEIVE_DONE;
        post transition();
      }

    // forwarding phase completed -> sleep
    } else if (state_ == FORWARD_DONE) {
      // TODO check: is anything else handled before?
      state_ = SLEEP_SUBSTOP;
      post transition();

      // TODO is this the only place?
      call TrafficUpdates.updateTxBurst(TRUE);
    
    // reception completed
    } else if (state_ == RECEIVE_DONE) {
      // reception is done, reset congestion window for next receive
      //curCongestionWin_ = call Config.getMinDwellTime();
      /* TODO check
      if (curCongestionWin_ > call Config.getMinDwellTime()) {
        curCongestionWin_--;
      }*/

      // TODO this should also be called on any other receive interruption
      // (at least when switching this layer off)
      call TrafficUpdates.updateRxBurst(TRUE);

      // e.g., could the timer still be running and should be canceled?
      state_ = SLEEP_SUBSTOP;
      post transition();
    }
  }


  /*** SplitControl ******************************************************/
  command error_t SplitControl.start() {
    // when bringing up the radio, check for 
  
    // three cases:
    // 1.) we're off -> can switch on now
    if (state_ == OFF) {
      // NOTE we need an extra state here, because SplitControl is
      // synchronous, i.e., startDone must not be called before start
      // has returned
      state_ = OFF_START;
      post transition();
      return SUCCESS;
    // 2.) starting has just completed (we're busy then?)
    //} else if (state_ == OFF_START) {
    } else if (state_ == OFF_STOP || state_ == OFF_SUBSTOP || state_ == OFF_SUBSTOP_DONE) {
      return EBUSY;
    // 3.) any other state, we're already on!
    } else {
      return EALREADY;
    }
  }


  default event void SplitControl.startDone(error_t) {
    /* void */
  }


  command error_t SplitControl.stop() {
    // we must cancel a pending timer (yet do not interrupt reception,
    // since we sent out a beacon)
    if (state_ == SLEEP || state_ == FORWARD) {
      call Timer.stop();
      post transition();  // need explicit transition (no Timer.fired()!)
    }

    // already off?
    if (state_ == OFF) {
      return EALREADY;

    // off, but event not signalled yet
    } else if (state_ == OFF_STOP || state_ == OFF_SUBSTOP || state_ == OFF_SUBSTOP_DONE) {
      return SUCCESS;

    // we're about to start -> busy (as defined in the interface spec)
    } else if (state_ == OFF_START) {
      return EBUSY;

    // shall start reception or forwarding, but radio is not on yet -> off
    } else if (state_ == RECEIVE_SUBSTART || state_ == FORWARD_SUBSTART) {
      state_ = OFF_STOP;

    // reception must not be interrupted before its end!
    } else if (state_ == RECEIVE_DONE) {
      state_ = OFF_SUBSTOP;

    // waiting to forward data or switching of hardware to sleep
    } else if (state_ == FORWARD_TIMER || state_ == FORWARD || state_ == SLEEP_SUBSTOP) {
      state_ = OFF_SUBSTOP;

    // forwarding completed -> switch off
    } else if (state_ == FORWARD_DONE) {
      state_ == OFF_SUBSTOP;

    // waiting for stopDone (to sleep) -> change to corresponding off step
    } else if (state_ == SLEEP_SUBSTOP_DONE) {
      state_ = OFF_SUBSTOP_DONE;

    // sleeping -> directly off
    } else if (state_ == SLEEP || state_ == SLEEP_TIMER) {
      state_ = OFF_STOP;

    // in any other case, it's a little tricky to shut down, so we
    // 'pretend' to be busy (telling the user to retry later)
    } else {
      return EBUSY;
    }

    // TODO what about these two?
    //  FORWARD_SUBSEND,             //  shall send data packet via SubSend.send
    //  FORWARD_SUBSEND_DONE,        //  waiting for SubSend.sendDone
    // might be even more!

    return SUCCESS;  // for all the cases in which we directly changed the state
  }



  default event void SplitControl.stopDone(error_t) {
    /* void */
  }


  /*** OrinocoBackoffConfig **********************************************/
  command uint8_t BackoffConfig.getMaximumBackoff() {
    return txDataMaxBackoff_;
  }


  /*** PacketStatistics **************************************************/
#ifdef ORINOCO_DEBUG_STATISTICS
  command const orinoco_packet_statistics_t * PacketStatistics.get() {
    return &ps_;
  }
#endif


  /*** SubControl ********************************************************/
  event void SubControl.startDone(error_t error) {
    //RADIO_ASSERT(error == SUCCESS || error == EBUSY);
    //RADIO_ASSERT(state_ == FORWARD_SUBSTART_DONE || state_ == RECEIVE_SUBSTART_DONE);

    if (error == SUCCESS) {
      call Leds.led0Off();
      state_++;  // fine -> next state
    } else {
      state_--;  // retry
    }

    post transition();
  }


  event void SubControl.stopDone(error_t error) {
    //RADIO_ASSERT(error == SUCCESS || error == EBUSY);
    //RADIO_ASSERT(state_ == OFF_SUBSTOP_DONE || state_ == SLEEP_SUBSTOP_DONE);

    if (error == SUCCESS) {
      call Leds.led0On();
      state_++;  // fine -> next state
    } else {
      state_--;  // retry
    }

    post transition();
  }


  /*** Timer *************************************************************/
  event void Timer.fired() {
    //RADIO_ASSERT(state_ == SLEEP || state_ == RECEIVE || state_ == FORWARD ||
    //             state_ == FORWARD_SUBSEND || state_ == FORWARD_SUBSEND_DONE);

    // The timer may fire within FORWARD_SUBSEND or FORWARD_SUBSEND_DONE,
    // which should be a very rare event! To avoid any additional complexity
    // of the state machine, we follow this course:
    // Since we just received an acceptible beacon, let's try to get rid of
    // our data. We hence simply ignore the timer and let the corresponding
    // states (see above) handle the situation. Note that this requires
    // both states to check whether the timer is still running.
    if (state_ == FORWARD_SUBSEND || state_ == FORWARD_SUBSEND_DONE) {
      return;
    }

    // node is sleeping
    if (state_ == SLEEP) {
      //DEBUG printf("sleep timer\n");
      // no packet to send => try to receive, otherwise send first
      if (txDataMsg_ == NULL) {
        // only try receiving, if path metric is known (i.e., is not infinite)
        if (call PathCost.getCost() == ORINOCO_PATHCOST_INF) {
          state_ = SLEEP_TIMER;
        } else {
          state_ = RECEIVE_SUBSTART;
        }
      } else {
        // FIXME when may this happen at all?
        state_ = FORWARD_SUBSTART;
      }

    // node is in forwarding state and we get a timeout (no beacon or beacon and no ack)
    } else if (state_ == FORWARD) {
      dbg("forward timeout\n");
      // revise the cost metric; this will either adopt the best alternative
      // among all beacons heard since we started forwarding or resets the
      // cost metric
      call PathCost.reviseCost();

#ifdef ORINOCO_DEBUG_STATISTICS
      ps_.numTxTimeouts++;
      if (call PathCost.getCost() == ORINOCO_PATHCOST_INF) {
        ps_.numMetricResets++;
      }
#endif

      // if there was no beacon at all, cost will be infinite.
      // since no-one will accept an offer (beacon) from us, we must either
      // suspend (sleep) or wait for the next beacon
      // TODO signal an event telling us what to do
      // for the moment, just retry
      if (call PathCost.getCost() == ORINOCO_PATHCOST_INF) {
        /* TODO
        // NOTE what about resetting the waiting time?
        if (TRUE == signal Orinoco.sleepAfterForwardError()) {
          state_ = SLEEP_TIMER;
        } else {
          state_ = FORWARD_TIMER;
        }
        */
        state_ = FORWARD_TIMER;
      } else {
        state_ = FORWARD_TIMER;
      }

    // node is in received state but no data came in
    } else if (state_ == RECEIVE) {
      dbg("receive timeout\n");
      state_ = RECEIVE_DONE;
    }

    post transition();
  }

  
  /*** BeaconSubReceive **************************************************/
  //event message_t * BeaconSubReceive.receive(message_t * msg) {
  event message_t * BeaconSubReceive.receive(message_t * msg, void *, uint8_t) {
  
    dbg("received beacon (checking further action)\n");

    // when receiving a beacon, ignore any other case than FORWARD
    // particularly do not update parent when a data packet has already been sent (ack pending)
    // schedules (back-offs may be different, resulting in timeout at receiver/parent)
    if (state_ == FORWARD) {
      bool isAck = FALSE;

      //RADIO_ASSERT(txDataMsg_ != NULL);
      //call Leds.led1Toggle();  // DEBUG

      // STEP 1
      // if the beacon is addressed to me, its an ack to txDataMsg_
      // TODO possibly check whether senderId == txDataDst_
      if (call SubAMPacket.address() == call SubAMPacket.destination(msg)) {
        message_t  * txDataMsgTmp = txDataMsg_;
        txDataMsg_ = NULL;  /* delete reference *before* signaling sendDone,
                             * to allow a nested send-call */
        // TODO change state if this takes too much time?
        signal Send.sendDone(txDataMsgTmp, txDataError_);
        isAck = TRUE;  // this beacon was an (implicit) ack!

        // statistics, must be in this order!
        call TrafficUpdates.updateTxBurst(FALSE);
        call TrafficUpdates.updateForwardDelay(FALSE);
      }

      // check whether to accept forwarding offer, if there is any packet.
      // order of this expression is intended (and required), since
      // processBeacon() will adapt the local weight (if possible)
      // TODO why do we care for the result of processBeacon at all?
      // -> it's an ack, so we were able to transmit before, why not continue anyway?
      if (processBeacon(msg, isAck) && txDataMsg_ != NULL) {
        // reset timer only if beacon was an ack
        if (isAck) {
          // convenient hack avoiding yet another state
          call Timer.startOneShot(call Timer.getdt());
        }
        state_ = FORWARD_SUBSEND;  // only send packet
        post transition();
      } else {
        // forwarding is complete, if no packet is left
        if (txDataMsg_ == NULL) {
          call Timer.stop();
          state_ = FORWARD_DONE;  // nothing
          post transition();
        }
      }
    } else if (state_ == FORWARD_SUBSEND || state_ == FORWARD_SUBSEND_DONE) {
      // if the beacon is from our current tx-destination, but addressed to
      // someone else, we are too late and should re-schedule sending
      if (call SubAMPacket.source(msg) == txDataDst_ && ! call SubAMPacket.isForMe(msg)) {
        //RADIO_ASSERT(txDataMsg_ != NULL);

        //DEBUG printf("ups (tx seqno %u, beac seqno %u)\n", ((orinoco_data_header_t *)(1 + call SubPacket.getPayload(txDataMsg_, txDataLen_)))->seqno, ((OrinocoBeaconMsg *)call SubPacket.getPayload(msg, sizeof(OrinocoBeaconMsg *)))->seqno); printfflush();

        if (state_ == FORWARD_SUBSEND) {
          // we did not send yet (which is very unlikely), process beacon and resend or sit back
          if (processBeacon(msg, FALSE)) {  // TODO when should this fail at all?
            state_ = FORWARD_SUBSEND;
            post transition();
          } else {
            state_ = FORWARD;
          }
        } else {
          // our packet is already in a lower layer; we must cancel and wait for sendDone
          if (SUCCESS == call DataSubSend.cancel(txDataMsg_)) {
            if (processBeacon(msg, FALSE)) {
              beaconCancel_ = TRUE;
            }
          }          
        }
      }
    }

    return msg;
  }


  /*** DataSubReceive ****************************************************/
  //event message_t * DataSubReceive.receive(message_t * msg) {
  event message_t * DataSubReceive.receive(message_t * msg, void * payload, uint8_t len) {
    dbg("received data\n");

    // received data outside receive => ignore for the moment (TODO?)
    if (state_ == RECEIVE) {
      call Timer.stop();  // just received data, stop timer

      txBeaconDst_   = call SubAMPacket.source(msg);  // store sender of data for beacon ack

      state_ = RECEIVE_SUBSEND;                  // and send another beacon
      post transition();

#ifdef ORINOCO_DEBUG_STATISTICS
      ps_.numRxPackets++;
#endif

      // statistics
      call TrafficUpdates.updateRxBurst(FALSE);

      // we're done, so signal reception
      msg = signal Receive.receive(msg, payload, len);
    } else if (state_ == RECEIVE_SUBSEND || state_ == RECEIVE_SUBSEND_DONE) {
      //DEBUG printf("IGNORED");
      // we got another data packet that we cannot handle, so the congestion window
      // might have been too small
      /* TODO check this
      // FIXME doing this here is problematic, because the congestion time in the next beacon
      // and the current timer may be have different values! We need something to cope with that
      if (curCongestionWin_ >= call Config.getMaxDwellTime() / 2) {
        curCongestionWin_ = call Config.getMaxDwellTime();
      } else {
        curCongestionWin_ *= 2;
      }*/
    } else {
      dbg("ignored data (NOT in receive state)\n");
    }

    return msg;
  }


  /*** BeaconSubSend *****************************************************/
  event void BeaconSubSend.sendDone(message_t * msg, error_t error) {
    //RADIO_ASSERT(state_ == RECEIVE_SUBSEND_DONE);
    //RADIO_ASSERT(msg == &txBeaconMsg_);

#ifdef ORINOCO_DEBUG_STATISTICS
    if (error == SUCCESS) {
      if (call SubAMPacket.destination(msg) != AM_BROADCAST_ADDR) {
        ps_.numTxAckBeacons++;
      }
      ps_.numTxBeacons++;
    } else {
      ps_.numTxBeaconsFail++;
    }
#endif

    if (error == SUCCESS) {
      //call Leds.led2Toggle();  // DEBUG
      state_++;   // ok -> next state
    } else {
      state_ = SLEEP_SUBSTOP;  // could not send beacon, abort
    }

    post transition();
  }


  /*** DataSubSend *******************************************************/
  event void DataSubSend.sendDone(message_t * msg, error_t error) {
    //RADIO_ASSERT(state_ == FORWARD_SUBSEND_DONE);
    //RADIO_ASSERT(msg == txDataMsg_);
//printf(" sent %u\n", error);

    // if the timer should not be running (which may happen if it fired
    // during either FORWARD_SUBSEND or FORWARD_SUBSEND_DONE, we extend it
    // to wait for the ack (or ~0ms to let Timer.fired() cope with the case)
    if (! call Timer.isRunning()) {
      if (error == SUCCESS) {
        call Timer.startOneShot(ORINOCO_ACK_WAITING_TIME);
      } else {
        call Timer.startOneShot(0);  // TODO check
      }
    }

#ifdef ORINOCO_DEBUG_STATISTICS
    if (error == SUCCESS) {
      ps_.numTxPackets++;
    } else {
      ps_.numTxPacketsFail++;
    }
#endif

    // send was aborted by a beacon from current destination
    // (this happens, if some contender was faster than us!)
    // this flag asks us to immediately retry!
    if (error == ECANCEL) {
      if (beaconCancel_ == TRUE) {
        beaconCancel_ = FALSE,
        state_ = FORWARD_SUBSEND;
        post transition();
      } else {
        state_ = FORWARD;   // sit there and wait again
      }
    } else {
      state_ = FORWARD;   // sit there and wait again
    }
  }


  /*** Send **************************************************************/
  command error_t Send.send(message_t * msg, uint8_t len) {
    // make sure we're not trying to deliver a packet already
    if (txDataMsg_ != NULL) {
      return EBUSY;
    }

    // if the radio is off, about to shut down or just starting, we do not
    // accept sending
    if (state_ == OFF || state_ == OFF_SUBSTOP || state_ == OFF_SUBSTOP_DONE ||
        state_ == OFF_STOP || state_ == OFF_START) {
      return EOFF;
    }

    // cancel timer when sleeping and post transition (required, since next
    // state-change would be triggered via Timer.fired)
    if (state_ == SLEEP) {
      call Timer.stop();
      post transition();
    }

    // NOTE when we are inside a reception state later than switching on
    // the radio, we have already sent out a beacon signaling that we're
    // ready for reception. We must hence not directly switch to sending,
    // for that might lead to collisions ...
    // => sending will be taken care of at the end of a reception phase

    // TODO which states are acceptible?
    // if I'm starting up the radio for a reception, switch to sending
    // FIXME -> deadlock? (if everybody is doing that)
    if (state_ == SLEEP_TIMER ||
        state_ == SLEEP ||
        state_ == RECEIVE_SUBSTART)
    {
      state_ = FORWARD_SUBSTART;
      //post transition();  // NOTE should be already pending

    } else if (state_ == RECEIVE_SUBSTART_DONE) {
      state_ = FORWARD_SUBSTART_DONE;

    } else if (
      state_ == RECEIVE_DONE ||   // nothing to receive (radio is still on)
      state_ == FORWARD_DONE ||   // forwarding just completed (radio is still on)
      state_ == SLEEP_SUBSTOP)    // shall go to sleep (radio is still on)
    {
      // => directly set forwarding timer
      state_ = FORWARD_TIMER;
    }

    // SLEEP_SUBSTOP_DONE is not handled here, since:
    // radio was asked to stop (confirmation is pending), resulting in a
    // somewhat tricky situation
    // => it's probably best to store the packet and wait till sleeping-state
    // is entered (which handles new tx-packets automatically)

    // init new packet transmission
    txDataMsg_   = msg;
    txDataLen_   = len;
    txDataError_ = FAIL;
    txAttempts_  = 0;

    return SUCCESS;
  }

  command void * Send.getPayload(message_t * msg, uint8_t len) {
    return call Packet.getPayload(msg, len);
  }

  command uint8_t Send.maxPayloadLength() {
    return call Packet.maxPayloadLength();
  }

  command error_t Send.cancel(message_t * msg) {
    // TODO not supported
    return FAIL;
  }

  /*** Packet ************************************************************/
  command void Packet.clear(message_t * msg) {
    return call SubPacket.clear(msg);
  }

  command uint8_t Packet.payloadLength(message_t* msg) {
    return call SubPacket.payloadLength(msg);
  }

  command void Packet.setPayloadLength(message_t * msg, uint8_t len) {
    call SubPacket.setPayloadLength(msg, len);
  }

  command uint8_t Packet.maxPayloadLength() {
    return call SubPacket.maxPayloadLength();
  }

  command void * Packet.getPayload(message_t * msg, uint8_t len) {
    return call SubPacket.getPayload(msg, len);
  }
}


/* EOF */
