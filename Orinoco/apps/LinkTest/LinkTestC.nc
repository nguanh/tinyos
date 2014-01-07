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
     interface ActiveMessageAddress as AMA;
     #ifdef TUDUNET
     interface Stm25pSpi as AddressFlash;
     interface Resource as AddressResource;
     #endif 
  }
}
implementation {

  message_t  msg;
  uint32_t   cnt = 0;

  #ifdef TUDUNET    
  typedef struct addrconf_t {
    nx_uint16_t adde5221;    // beware of the 
    nx_uint16_t address;     // endianness 
  } addrconf_t;
  addrconf_t addrconf_;
  uint8_t addrBuf[32]; // min. Flash read size (read fails for smaller values)
  #endif
  
  event void Boot.booted() {
   #ifdef TUDUNET
    call AddressResource.request();
  } /* This effectively terminates Boot.booted() here...
  ...and resumes operation when the address has been read from Flash! */
  task void updateAddress() {
    if (addrconf_.adde5221 == 0x5221) {
      call AMA.setAddress(TOS_AM_GROUP, ~addrconf_.address);
  	}
    #endif

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

    printf("%lu %u %u %lu\n", call LocalTime.get(), call AMA.amAddress(), call AMPacket.source(bufPtr), p->cnt);
    printfflush();
    
    return bufPtr;
  }

  event void AMSend.sendDone(message_t* bufPtr, error_t error) {
  }
  
  #ifdef TUDUNET

  event void AddressResource.granted() {
    call AddressFlash.powerUp();
    call AddressFlash.read(0, addrBuf, sizeof(addrBuf));
  }
  
  
  async event void AddressFlash.readDone(stm25p_addr_t addr, uint8_t* buf, stm25p_len_t len, error_t error) {
   
    if (error == SUCCESS) {
      memcpy(&addrconf_, buf, sizeof(addrconf_));
      post updateAddress();
    }
    
    call AddressFlash.powerDown();
    call AddressResource.release();
  }

  async event void AddressFlash.sectorEraseDone( uint8_t sector, error_t error ) {}
  async event void AddressFlash.bulkEraseDone( error_t error ) {}
  async event void AddressFlash.computeCrcDone( uint16_t crc, stm25p_addr_t addr,
				   stm25p_len_t len, error_t error ) {}
  async event void AddressFlash.pageProgramDone( stm25p_addr_t addr, uint8_t* buf, 
				    stm25p_len_t len, error_t error ) {}
  #endif
  
  async event void AMA.changed() { /* Ha ha, very funny. */ }
}
