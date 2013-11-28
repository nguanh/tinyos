interface AveragingSensor<T> {
  /**
   * @param clear if TRUE, the current average MUST be reset
   * @return the average of sensor samples since last clear
   */
  command T get(bool clear);
}
