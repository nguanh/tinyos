#include "SunshinePolicy.h"

module EnergyPolicyDepletionSafeC {
  provides {
    interface EnergyPolicy<fp_t>;
  }
}
implementation {
  /**
   * all intermediate soc values must be equal to or above POLICY_DS_VOLTAGE
   *
   * violation policy => valid, if no single value violated the policy
   * Need to see all values (feed() is UNDECIDED) in case of compliance;
   * if no violation was found, final state is UNDECIDED, implying ACCEPTED;
   */
  policy_verdict_t  verdict = POLICY_VERDICT_UNDECIDED;

  command policy_verdict_t EnergyPolicy.checkInitialState(fp_t v) {
    return (v < POLICY_CRIT_VOLTAGE) ?
           POLICY_VERDICT_REJECT : POLICY_VERDICT_UNDECIDED;
  }

  command policy_verdict_t EnergyPolicy.feed(fp_t v) {
    if (v < POLICY_DS_VOLTAGE) {
      verdict = POLICY_VERDICT_REJECT;
    }
    return verdict;
  }

  command policy_verdict_t EnergyPolicy.verdict() {
    if (verdict == POLICY_VERDICT_UNDECIDED) {
      return POLICY_VERDICT_ACCEPT;
    } else {
      verdict = POLICY_VERDICT_UNDECIDED;
      return POLICY_VERDICT_REJECT;
    }
  } 
}
