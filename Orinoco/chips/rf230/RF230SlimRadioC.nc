configuration RF230SlimRadioC {
  provides {
    interface LinkPacketMetadata;
    interface RF230DriverConfig;
  }
}
implementation {
  components RF230SlimRadioP;
  LinkPacketMetadata = RF230SlimRadioP;
  RF230DriverConfig  = RF230SlimRadioP;

  components RF230DriverLayerC;
  RF230SlimRadioP.PacketRSSI        -> RF230DriverLayerC.PacketRSSI;
  RF230SlimRadioP.PacketLinkQuality -> RF230DriverLayerC.PacketLinkQuality;
}

