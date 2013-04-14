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
 * MASSACHUSETTS INSITIUTE OF TECHNOLOGY OR ITS CONTRIBUTORS BE LIABLE
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

module RF230PacketDelayMilliC {
  provides {
    // packet delay
    interface PacketDelay<TMilli> as PacketDelayMilli;
//    interface PacketField<uint8_t> as PacketTimeSyncOffset;
  }
  uses {
    // time stamping
    interface LocalTime<TRadio> as LocalTimeRadio;
    interface LocalTime<TMilli> as LocalTimeMilli;
    interface PacketField<uint8_t> as PacketTimeSyncOffset;
    interface PacketTimeStamp<TRadio, uint32_t> as PacketTimeStampRadio;
  }
}
implementation {

//  /***** PacketTimeSyncOffset ********************************************/ 
//  command void PacketTimeSyncOffset.set(message_t * msg, uint8_t len) {
//    call PacketTimeSyncOffset.set(msg, offsetof(message_t, data) + len + offsetof(orinoco_data_header_t, timestamp.absolute));
//  }


  /***** PacketDelay *****************************************************/
  async command uint32_t PacketDelayMilli.init(message_t * msg) {
    //
  }

  // TODO FIXME
  // this is already defined in OrinocoQueueP
  // we should do it differently here ...
  orinoco_data_header_t * getHeader(message_t * msg) {
    // add orinoco header to the end of the packet (behind regular payload)
    // to avoid packet copying for, e.g., serial transmission at the sink
    // (the orinico header would be between real payload and header!)
//    return (orinoco_data_header_t *)
//      (call SubPacket.getPayload(msg, call SubPacket.maxPayloadLength())
//      + call Packet.payloadLength(msg));
  }

  async command uint32_t PacketDelayMilli.delay(message_t * msg) {
    // FIXME does not work on a sink! what about is valid?
    //return (call PacketTimeStampRadio.timestamp(msg) - getHeader(msg)->timestamp.absolute) >> RADIO_ALARM_MILLI_EXP;
//    return (call PacketTimeStampRadio.timestamp(msg) - getHeader(msg)->timestamp.absolute) >> 10;
return 0;
  }


  async command uint32_t PacketDelayMilli.creationTime(message_t * msg) {
    // TODO what about isValid()?

    // give time based on actual millis
//    uint32_t  tm, tr;
//    tm = call LocalTimeMilli.get();
//    tr = call LocalTimeRadio.get();

//    return tm - ((tr - getHeader(msg)->timestamp.absolute) >> 10);
return 0;
  }

}

