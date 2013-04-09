configuration OrinocoForwardLayerC {
  provides {
    interface AMSend as SendData;
  }
  uses {
    interface AMSend as SubSendData;
    interface OrinocoBackoffConfig as Config;
  }
}
implementation {
  components OrinocoForwardLayerP;
  SendData    = OrinocoForwardLayerP;
  SubSendData = OrinocoForwardLayerP;
  Config      = OrinocoForwardLayerP;

  components RandomC;
  OrinocoForwardLayerP.Random -> RandomC;

  components new TimerMilliC();
  OrinocoForwardLayerP.Timer -> TimerMilliC;
}
