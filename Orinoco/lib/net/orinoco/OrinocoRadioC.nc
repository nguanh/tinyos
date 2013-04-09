#include "Orinoco.h"

configuration OrinocoRadioC {
  provides {
    interface SplitControl;

    interface Packet;
    interface Send;
    interface Receive;

    // packet time stamping and delay calculation
    interface LocalTime<TRadio> as LocalTimeRadio;
    interface PacketField<uint8_t> as PacketTimeSyncOffset;
    interface PacketTimeStamp<TRadio, uint32_t> as PacketTimeStampRadio;
  }
  uses {
    interface OrinocoPathCost;
    interface OrinocoTrafficUpdates as TrafficUpdates;
    interface OrinocoTrafficStatistics as TrafficStatistics;
  }
}
implementation {
  components OrinocoRadioP as Mac;

  SplitControl      = Mac;
  Packet            = Mac;
  Send              = Mac;
  Receive           = Mac;
  OrinocoPathCost   = Mac;
  TrafficUpdates    = Mac;
  TrafficStatistics = Mac;

  // why do we use active messages at all?
  components ActiveMessageC as AM;
  Mac.SubControl       -> AM;
  Mac.SubPacket        -> AM;
  Mac.SubAMPacket      -> AM;
  Mac.BeaconSubReceive -> AM.Receive[ORINOCO_AM_BEACON];  // get all beacons (wire twice!)
  Mac.BeaconSubReceive -> AM.Snoop[ORINOCO_AM_BEACON];
  Mac.DataSubReceive   -> AM.Receive[ORINOCO_AM_DATA];
  Mac.BeaconSubSend    -> AM.AMSend[ORINOCO_AM_BEACON];
  Mac.DataSubSend      -> OrinocoForwardLayerC; // AM.AMSend[ORINOCO_AM_DATA];

  PacketTimeStampRadio  = AM;

  components OrinocoForwardLayerC;
  OrinocoForwardLayerC.SubSendData -> AM.AMSend[ORINOCO_AM_DATA];
  OrinocoForwardLayerC.Config      -> Mac;

  // receive quality of packet
  #if defined (PLATFORM_IRIS)
    //components RF230ActiveMessageC as PlatformActiveMessageC;
    components RF230RadioC as PlatformRadioC;
    components RF230DriverLayerC as PlatformDriverLayerC;
  #else
  #  error "Platform not supported"
  #endif
  Mac.PacketLinkQuality -> PlatformRadioC.PacketLinkQuality;
  Mac.PacketRSSI        -> PlatformRadioC.PacketRSSI;

  LocalTimeRadio       = PlatformRadioC;

  PacketTimeSyncOffset = PlatformDriverLayerC.PacketTimeSyncOffset;

  components new TimerMilliC() as Timer;
  Mac.Timer -> Timer;

  components OrinocoConfigC;
  Mac.Config -> OrinocoConfigC;

  components RandomC;
  Mac.Random -> RandomC;

  components LedsC;
  //components NoLedsC as LedsC;
  Mac.Leds -> LedsC;
}

