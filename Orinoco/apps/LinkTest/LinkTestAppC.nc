#ifdef TUDUNET
  #include "StorageVolumes.h"
#endif

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
   
   components ActiveMessageAddressC as Address;
   App.AMA -> Address;
   
   #ifdef TUDUNET
   components Stm25pSpiC as AddressFlash;
   App.AddressFlash    -> AddressFlash;
   App.AddressResource -> AddressFlash;
   #endif 

   App.Receive    -> AMReceiverC;
   App.AMSend     -> AMSenderC;
   App.AMControl  -> ActiveMessageC;
   App.AMPacket   -> AMSenderC;
   App.Packet     -> AMSenderC;
}


