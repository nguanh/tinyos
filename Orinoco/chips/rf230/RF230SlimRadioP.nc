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

