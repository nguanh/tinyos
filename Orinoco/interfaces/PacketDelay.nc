interface PacketDelay<precision_tag> {
  /** 
   * Return the total packet delay, i.e., the time elapsed since
   * packet creation and the current time
   *
   * @return packet delay
   */
  command uint32_t delay(message_t * msg);

  /** 
   * Return the time at which the packet was created (on the origin node)
   * in locale time
   *
   * @return locale time, at which the packet was created at its origin
   */
  command uint32_t creationTime(message_t * msg);
}

