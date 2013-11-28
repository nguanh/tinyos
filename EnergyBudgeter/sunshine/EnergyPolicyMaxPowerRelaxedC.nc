#include "SunshinePolicy.h"

module EnergyPolicyMaxPowerRelaxedC {
  provides {
    interface EnergyPolicy<fp_t>;
  }
}
implementation {
  /**
   * reach POLICY_MPP_VOLTAGE at least once *and* do not fall below
   * POLICY_DS_VOLTAGE
   *
   * => verdict is only ACCEPT, if at least one soc value v reaches or
   *    exceeds POLICY_MPP_VOLTAGE *and* no soc value prior to v falls
   *    below POLICY_DS_VOLTAGE
   *
   * NOTE that this is a relaxed version of EnergyPolicyMaxPowerC
   */

  policy_verdict_t  verdict = POLICY_VERDICT_UNDECIDED;

  command policy_verdict_t EnergyPolicy.feed(fp_t v) {
    if (verdict == POLICY_VERDICT_UNDECIDED) {
      if (v >= POLICY_MPP_VOLTAGE) {
        verdict = POLICY_VERDICT_ACCEPT;
      } else if (v < POLICY_DS_VOLTAGE) {
        verdict = POLICY_VERDICT_REJECT;
      }
    }
    return verdict;
  }

  command policy_verdict_t EnergyPolicy.verdict() {
    policy_verdict_t  final = (verdict == POLICY_VERDICT_ACCEPT) ?
      POLICY_VERDICT_ACCEPT : POLICY_VERDICT_REJECT;

    verdict = POLICY_VERDICT_UNDECIDED;
    return final;
  } 
}
