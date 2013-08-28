/* $Id: $ */
/*
 * Copyright (c) 2013 University of Luebeck (UzL).
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
  DAMAGE.
 */

/**
 * @author Christian Renner
 * @date April 9th 2013
 */

module OrinocoPacketDelayLayerP {
  provides {
    interface AMSend;
    interface Receive;
    interface Packet;
    interface PacketDelay<TMilli> as PacketDelayMilli;
  }
  uses {
    interface AMSend as SubAMSend;
    interface Receive as SubReceive;
    interface Packet as SubPacket;
    interface LocalTime<TMilli> as LocalTimeMilli;
  }
}
implementation {
  bool      busy = FALSE;
  uint32_t  ctime;
  uint8_t   dtime;
  uint8_t   delay = 0;

  /*** tools *************************************************************/
  orinoco_delay_footer_t * getFooter(message_t * msg) {
    // add orinoco footer to the end of the packet (behind regular payload)
    // to avoid packet copying for, e.g., serial transmission at the sink
    // (the orinico header would be between real payload and header!)
    return (orinoco_delay_footer_t *)
      (call SubPacket.getPayload(msg, call SubPacket.maxPayloadLength())
      + call Packet.payloadLength(msg));
  }


  /*** AMSend.send *******************************************************/
  command error_t AMSend.send(am_addr_t dst, message_t * msg, uint8_t len) {
    error_t   ret;
    uint32_t  now;

    atomic {
      if (busy) {
        return EBUSY;
      }
      busy = TRUE;
    }

    // get current time
    now = call LocalTimeMilli.get();

    // memorize time of sending to calculate delay inside sendDone
    dtime = now;
    // remember creation time of packet to restore in sendDone
    ctime = getFooter(msg)->ctime;
    // get time difference of current time (+ average MAC delay) and packet creation time
    getFooter(msg)->ctime -= now + delay;

    ret = call SubAMSend.send(dst, msg, len + sizeof(orinoco_delay_footer_t));
    if (ret != SUCCESS) {
      getFooter(msg)->ctime = ctime;
      busy = FALSE;
    }
    return ret;
  }

  command error_t AMSend.cancel(message_t * msg) {
    return call SubAMSend.cancel(msg);
  }

  command void * AMSend.getPayload(message_t * msg, uint8_t len) {
    return call Packet.getPayload(msg, len);
  }

  command uint8_t AMSend.maxPayloadLength() {
    return call Packet.maxPayloadLength();
  }


  /*** SubAMSend *********************************************************/
  event void SubAMSend.sendDone(message_t * msg, error_t error) {
    busy = FALSE;
    if (error == SUCCESS) {
      // update avg delay (EWMA with coeff 0.5)
      delay  += (uint8_t)call LocalTimeMilli.get() - dtime;
      delay >>= 1;
    }

    getFooter(msg)->ctime = ctime;  // restore ctime
    signal AMSend.sendDone(msg, error);
  }


  /***** SubReceive ******************************************************/
  event message_t * SubReceive.receive(message_t * msg, void * payload, uint8_t len) {
    getFooter(msg)->ctime += call LocalTimeMilli.get();  // add negative delay
    return signal Receive.receive(msg, payload, len);
  }


  /***** Packet **********************************************************/ 
  command void Packet.clear(message_t * msg) {
    call SubPacket.clear(msg);
  }

  command uint8_t Packet.payloadLength(message_t * msg) {
    return call SubPacket.payloadLength(msg) - sizeof(orinoco_delay_footer_t);
  }

  command void Packet.setPayloadLength(message_t * msg, uint8_t len) {
    call SubPacket.setPayloadLength(msg, len + sizeof(orinoco_delay_footer_t));
  }

  command uint8_t Packet.maxPayloadLength() {
    return call SubPacket.maxPayloadLength() - sizeof(orinoco_delay_footer_t);
  }

  command void * Packet.getPayload(message_t * msg, uint8_t len) {
    return call SubPacket.getPayload(msg, len + sizeof(orinoco_delay_footer_t));
  }


  /***** PacketDelayMilli ************************************************/
  command void PacketDelayMilli.init(message_t * msg) {
    getFooter(msg)->ctime = call LocalTimeMilli.get();
  }

  command uint32_t PacketDelayMilli.delay(message_t * msg) {
    return call LocalTimeMilli.get() - getFooter(msg)->ctime;
  }

  command uint32_t PacketDelayMilli.creationTime(message_t * msg) {
    return getFooter(msg)->ctime;
  }
}

