#include "EnergyPolicy.h"

interface EnergyPolicy<T> {
  /**
   * Check the initial state of charge (type T).
   * @return POLICY_VERDICT_UNDECIDED, if a final decision is not yet
   *         possible; POLICY_VERDICT_REJECT, if it will not be possible
   *         to fulfill the policy regardless of intermediate states.
   *
   * if this function returns POLICY_VERDICT_REJECT, subsequent calls to
   * feed() and verdict() are prohibited
   */
  command policy_verdict_t checkInitialState(T soc);

  /**
   * Feed an intermediate state-of-charge (of type T) for final policy
   * evaluation.
   * This function determines the compliance of the current, intermediate
   * state-of-charge against policy compliance.
   * If the policy allows for making an early decision (i.e., subsequent
   * intermediate values do not influence the final verdict), feed()
   * SHOULD return the final verdict, i.e., either POLICY_VERDICT_ACCEPT
   * or POLICY_VERDICT_REJECT. The function MUST return
   * POLICY_VERDICT_UNDECIDED otherwise. Note that if feed() returns
   * a value other than POLICY_VERDICT_UNDECIDED, it MUST return that same
   * value for every following call, until the final verdict us requested.
   *
   * @param soc intermediate state-of-charge
   * @return POLICY_VERDICT_UNDECIDED, if a final decision is not yet
   *         possible; POLICY_VERDICT_ACCEPT or POLICY_VERDICT_ACCEPT, if the
   *         decision does not depend on additional (future) soc values.
   */
  command policy_verdict_t feed(T soc);

  /**
   * Final evaluation of the energy policy, that MUST consider all intermediate
   * values. This particularly implies that verdict() MUST return a verdict
   * compliant to a prior call to feed()
   * After a call to evaluate(), a possible memory resulting from calls to
   * feed() must be discarded
   *
   * @return POLICY_VERDICT_ACCEPT, if the series of intermediate values
   *         since the last call to verdict() satisfy the policy;
   *         POLICY_VERDICT_REJECT in any other case
   */
  command policy_verdict_t verdict();
}
