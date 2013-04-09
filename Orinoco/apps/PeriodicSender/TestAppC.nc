configuration TestAppC {
}
implementation {
  components MainC;
  components TestC;
  components OrinocoP;
  components new TimerMilliC();

  TestC.Boot              -> MainC.Boot;
  TestC.Timer             -> TimerMilliC;
  TestC.RadioControl      -> OrinocoP;
  TestC.ForwardingControl -> OrinocoP;
  TestC.Send              -> OrinocoP.Send[13];  // some arbitrary number
  TestC.RootControl       -> OrinocoP;
  TestC.Packet            -> OrinocoP;
}
