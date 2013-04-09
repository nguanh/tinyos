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
 * MASSACHUSETTS INSITIUTE OF TECHNOLOGY OR ITS CONTRIBUTORS BE LIABLE
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

module RF230SlimRadioP {
  provides {
    interface LinkPacketMetadata;
    interface RF230DriverConfig;
  }
  uses {
    interface PacketField<uint8_t> as PacketRSSI;
    interface PacketField<uint8_t> as PacketLinkQuality;
  }
}
implementation {

  /*** LinkPacketMetadata ************************************************/
  async command bool LinkPacketMetadata.highChannelQuality(message_t * msg) {
    return call PacketRSSI.get(msg) >= ORINOCO_MIN_RSSI;
  }


  /*** RF230DriverConfig *************************************************/
  async command uint8_t RF230DriverConfig.headerLength(message_t* msg) {
    return offsetof(message_t, data) - sizeof(rf230packet_header_t);
  }

  async command uint8_t RF230DriverConfig.maxPayloadLength() {
    return sizeof(rf230packet_header_t) + TOSH_DATA_LENGTH;
  }

  async command uint8_t RF230DriverConfig.metadataLength(message_t* msg) {
          return 0;
  }

  async command uint8_t RF230DriverConfig.headerPreloadLength() {
    // we need the fcf, dsn, destpan and dest
    return 7;
  }

  async command bool RF230DriverConfig.requiresRssiCca(message_t* msg) {
    // FIXME
    //return call Ieee154PacketLayer.isDataFrame(msg);
    return FALSE;
  }

}

