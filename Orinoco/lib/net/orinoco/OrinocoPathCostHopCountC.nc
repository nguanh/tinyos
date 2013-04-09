configuration OrinocoPathCostHopCountC {
  provides {
    interface OrinocoPathCost;
  }
  uses {
    interface RootControl;
  }
}
implementation {
  components OrinocoPathCostHopCountP;
  OrinocoPathCost = OrinocoPathCostHopCountP;
  RootControl     = OrinocoPathCostHopCountP;

  // TODO move this to upper layer (it's quite hidden here)
  components RF230SlimRadioC;
  OrinocoPathCostHopCountP.LinkPacketMetadata -> RF230SlimRadioC;
}
