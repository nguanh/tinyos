#include "Timer.h"
#include "LinkTestMsg.h"
 
#define NEW_PRINTF_SEMANTICS
#include "printf.h"

#define LINKTEST_PERIOD 1024

 
module LinkTestC @safe() {
  uses {
    interface Boot;
     interface Receive;
     interface AMSend;
     interface Timer<TMilli> as PeriodicTimer;
     interface Timer<TMilli> as SendTimer;
     interface SplitControl as AMControl;
     interface AMPacket;
     interface Packet;
     interface Random;
     interface LocalTime<TMilli>;
  }
}
implementation {

  message_t  msg;
  uint32_t   cnt = 0;

  event void Boot.booted() {
    call AMControl.start();
  }

  event void AMControl.startDone(error_t err) {
    if (err == SUCCESS) {
      call PeriodicTimer.startPeriodic(LINKTEST_PERIOD);
    }
    else {
      call AMControl.start();
    }
  }

  event void AMControl.stopDone(error_t err) {
    // do nothing
  }
   
   event void PeriodicTimer.fired() {
     call SendTimer.startOneShot(call Random.rand32() % LINKTEST_PERIOD);
   }
 
   event void SendTimer.fired() {
     LinkTestMsg * p = (LinkTestMsg *)call Packet.getPayload(&msg, sizeof(LinkTestMsg));
 
     p->cnt = cnt++;
 
     call AMSend.send(AM_BROADCAST_ADDR, &msg, sizeof(LinkTestMsg));
   }

  event message_t* Receive.receive(message_t * bufPtr, void * payload, uint8_t len) {
    LinkTestMsg * p = (LinkTestMsg *)payload;

    printf("%lu %u %u %lu\n", call LocalTime.get(), TOS_NODE_ID, call AMPacket.source(bufPtr), p->cnt);
    printfflush();
    
    return bufPtr;
  }

  event void AMSend.sendDone(message_t* bufPtr, error_t error) {
  }
}
