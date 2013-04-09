configuration Atm128Counter1mhzC {
  provides {
    interface Counter<TMicro, uint32_t>;
  }
}
implementation
{
  components Atm128Counter1mhzP;
  Counter   = Atm128Counter1mhzP;

  components HplAtm128Timer3C as HWTimer;
  Atm128Counter1mhzP.Timer     -> HWTimer;
  Atm128Counter1mhzP.TimerCtrl -> HWTimer;
  Atm128Counter1mhzP.Capture   -> HWTimer;

  components PlatformC;
  Atm128Counter1mhzP <- PlatformC.SubInit;
}
