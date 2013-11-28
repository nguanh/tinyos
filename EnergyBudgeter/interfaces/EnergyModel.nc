interface EnergyModel {
  /**
   * start a calculation (simulation) of the future state-of-charge of the node
   * when this command is called, calculationDone() will be signaled eventually
   *
   * @param duration    prediction horizon
   * @param voltage     initial state-of-charge
   * @param currentIn   estimated input load (produced by, e.g., a harvester)
   * @param currentOut  estimated average output load (node consumption)
   */
  command void calculate(uint32_t duration, double voltage, double currentIn, double currentOut);

  /**
   * signaled, when the calculation (simulation) result is available
   * @param voltage the predicted state of charge corresponding to the 
   *                parameters provided to calculate()
   */
  event void calculationDone(double voltage);
}
