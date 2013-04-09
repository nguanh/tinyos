configuration SinkC {
}
implementation {
  components SinkP;
  
  components MainC;
  SinkP.Boot             -> MainC;

  components new TimerMilliC() as AliveTimer;
  SinkP.AliveTimer -> AliveTimer;

  components OrinocoP as Radio;
  SinkP.RootControl      -> Radio;
  SinkP.RoutingControl   -> Radio;
  SinkP.RadioControl     -> Radio;
  SinkP.OrinocoConfig    -> Radio;

  SinkP.RadioSend        -> Radio;
  SinkP.RadioReceive     -> Radio.Receive;
  SinkP.RadioPacket      -> Radio;
  SinkP.CollectionPacket -> Radio;
  SinkP.PacketDelayMilli -> Radio;

  components SerialActiveMessageC as Serial;
  SinkP.SerialControl    -> Serial;
  
  SinkP.UartSend         -> Serial;
  //SinkP.UartReceive      -> Serial.Receive;
  SinkP.UartPacket       -> Serial;
  SinkP.UartAMPacket     -> Serial;

  components OrinocoStatsReportingJobC;
  OrinocoStatsReportingJobC.Packet -> Radio;
  SinkP.OrinocoStatsReportingMsg   -> OrinocoStatsReportingJobC;

  components OrinocoDebugReportingJobC;
  OrinocoDebugReportingJobC.Packet -> Radio;
  SinkP.OrinocoDebugReportingMsg   -> OrinocoDebugReportingJobC;
  
  components LedsC as LedsC;
  SinkP.Leds             -> LedsC;
}
