configuration LinkTestAppC {
}
implementation {
  components PrintfC, SerialStartC;

  components MainC;
  components LinkTestC as App;
  
   components new AMSenderC(AM_LINKTEST_MSG);
   components new AMReceiverC(AM_LINKTEST_MSG);
   components new TimerMilliC() as PeriodicTimer;
   components new TimerMilliC() as SendTimer;
   components LocalTimeMilliC;
   components ActiveMessageC;
   components RandomC;

   App.PeriodicTimer -> PeriodicTimer;
   App.SendTimer     -> SendTimer;
   App.LocalTime -> LocalTimeMilliC;
   App.Random    -> RandomC;

   App.Boot       -> MainC.Boot;
   
   App.Receive    -> AMReceiverC;
   App.AMSend     -> AMSenderC;
   App.AMControl  -> ActiveMessageC;
   App.AMPacket   -> AMSenderC;
   App.Packet     -> AMSenderC;
}


