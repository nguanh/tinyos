#include "SunshinePolicy.h"

module EnergyPolicyMaxPowerC {
  provides {
    interface EnergyPolicy<fp_t>;
  }
}
implementation {
  /**
   * reach POLICY_MPP_VOLTAGE at least once *and* do not *ever* fall below
   * POLICY_DS_VOLTAGE
   *
   * => verdict is only ACCEPT, if at least one soc value reaches or
   *    exceeds POLICY_MPP_VOLTAGE *and* no soc value falls below
   *    POLICY_DS_VOLTAGE
   */

  bool              mpp     = FALSE;
  policy_verdict_t  verdict = POLICY_VERDICT_UNDECIDED;

  command policy_verdict_t EnergyPolicy.checkInitialState(fp_t v) {
    return (v < POLICY_CRIT_VOLTAGE) ?
           POLICY_VERDICT_REJECT : POLICY_VERDICT_UNDECIDED;
  }

  command policy_verdict_t EnergyPolicy.feed(fp_t v) {
    if (v >= POLICY_MPP_VOLTAGE) {
      mpp = TRUE;
    } else if (v < POLICY_DS_VOLTAGE) {
      verdict = POLICY_VERDICT_REJECT;
    }
    return verdict;
  }


  command policy_verdict_t EnergyPolicy.verdict() {
    policy_verdict_t  final = (verdict == POLICY_VERDICT_REJECT || ! mpp) ?
      POLICY_VERDICT_REJECT : POLICY_VERDICT_ACCEPT;

    mpp = FALSE;
    verdict = POLICY_VERDICT_UNDECIDED;
    return final;
  } 
}
