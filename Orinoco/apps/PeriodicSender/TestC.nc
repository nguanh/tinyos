module TestC {
  uses {
    interface Boot;
    interface Timer<TMilli>;
    interface SplitControl as RadioControl;
    interface StdControl as ForwardingControl;
    interface RootControl;
    interface Packet;
    interface QueueSend as Send;
  }
}
implementation {
  #define MSG_BURST_LEN  3
  message_t  myMsg;
  uint16_t  cnt = 0;

  event void Boot.booted() {
    // we're no root, just make sure
    call RootControl.unsetRoot();  // make this node a root

    // switch on radio and enable routing
    call RadioControl.start();
    call ForwardingControl.start();

    // start our packet timer
    call Timer.startPeriodic(30720);
  }

  event void Timer.fired() {
    uint8_t  msgCnt;

    for (msgCnt = 0; msgCnt < MSG_BURST_LEN; msgCnt++) {
      nx_uint16_t * d;

      // prepare message
      call Packet.clear(&myMsg);
      
      d = call Packet.getPayload(&myMsg, 2);
      *d = cnt++;

      // and send it
      call Send.send(&myMsg, 2);
    }
  }

  event void RadioControl.startDone(error_t error) {
    // nothing
  }

  event void RadioControl.stopDone(error_t error) {
    // nothing
  }
}
