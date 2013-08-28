/* $Id: $ */
/*
 * Copyright (c) 2011 Hamburg University of Technology (TUHH).
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of the Hamburg University of Technology nor
 *   the names of its contributors may be used to endorse or promote
 *   products derived from this software without specific prior written
 *   permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE
 * HAMBURG UNIVERSITY OF TECHNOLOGY OR ITS CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
 * OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
 * USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 */

/**
 * @author Christian Renner
 * @date December 14 2011
 */

#include "Orinoco.h"
#include "OrinocoStatistics.h"

module OrinocoQueueP {
  provides {
    // control and init
    interface Init;
    interface StdControl;
    interface RootControl;

    // send and receive
    interface QueueSend as Send[collection_id_t id];
    interface Receive[collection_id_t id];
    interface Receive as Snoop[collection_id_t id];
    interface Intercept[collection_id_t id];

    // packet
    interface Packet;
    interface CollectionPacket;

    // cache comparer for packet history
    interface CacheCompare<mc_entry_t>;

#ifdef ORINOCO_DEBUG_STATISTICS
    interface Get<const orinoco_queue_statistics_t *> as QueueStatistics;
#endif
  }
  uses {
    // config
    //interface OrinocoConfig;

    // MAC interface
    interface Packet as SubPacket;
    interface Send as SubSend;
    interface Receive as SubReceive;

    // packet queueing
    interface Queue<mq_entry_t> as SendQueue;
    interface Pool<message_t> as MsgPool;

    interface Cache<mc_entry_t> as PacketHistory;

    interface PacketDelay<TMilli> as PacketDelayMilli;

    // traffic statistics
    interface OrinocoTrafficUpdates as TrafficUpdates;

    // config
    interface OrinocoConfig as Config;
  }
}
implementation {
  // local state information
  bool     isForwarding_ = TRUE;
  bool     isRoot_       = FALSE;
  uint8_t  seqno_        = 0;

  // statistics
#ifdef ORINOCO_DEBUG_STATISTICS
  orinoco_queue_statistics_t  qs_ = {0};
#endif


  task void selfReceiveTask() {
    mq_entry_t  qe;

    // any data to send/receive?
    if (call SendQueue.empty()) {
      return;
    }

    // get the packet and put it into the queue
    qe = call SendQueue.head();
    call MsgPool.put(qe.msg);

    // FIXME
    // this is really crap! We must perform artificial sending, i.e., prepare
    // the whole message (including AM stuff, time stamping, etc.) and move it upwards
    
    post selfReceiveTask();
  }


  /* sending of packet */
  // @param force if TRUE, the minimum queue level for sending is ignored
  //              should be TRUE only when we come from sendDone (i.e., we are transmitting a burst of packets)
  void sendNext(bool force) {
    // do not forward data, unless we shall
    if (! isForwarding_) return;

    // check queue and try to send, if any packet available
    if (call SendQueue.size() > 0 &&
        (force || call SendQueue.size() >= call Config.getMinQueueSize()))
    {
      mq_entry_t  qe = call SendQueue.head();
      if (SUCCESS == call SubSend.send(qe.msg, call SubPacket.payloadLength(qe.msg))) {
        // DEBUG
        printf("%u que qs %p\n", TOS_NODE_ID, qe.msg);
        printfflush();
      }
    }
  }


  task void sendTask() {
    sendNext(FALSE);
  }

  /***** internal helpers ************************************************/
  message_t * ONE forward(message_t * ONE msg) {
    mq_entry_t    qe;
    
    // point queue element to new message
    qe.msg = msg;

    // get new receive buffer for lower layer
    // abort, if there is none
    msg = call MsgPool.get();
    if (msg == NULL) {
#ifdef ORINOCO_DEBUG_STATISTICS
      qs_.numPacketsDropped++;  // we are going to drop this packet
#endif
      return qe.msg;
    }
    
    // insert into queue
    if (FAIL == call SendQueue.enqueue(qe)) {
#ifdef ORINOCO_DEBUG_STATISTICS
      qs_.numPacketsDropped++;  // we are going to drop this packet
#endif
      call MsgPool.put(msg);    // put new buffer back into queue and
      return qe.msg;            // reuse current buffer
    }

    // DEBUG
    printf("%u que qf %p\n", TOS_NODE_ID, msg);
    printfflush();

    // FIXME this is a workaround only
    post sendTask();

    // return new space for next reception
    return msg;
  }

  orinoco_data_header_t * getHeader(message_t * msg) {
    // add orinoco header to the end of the packet (behind regular payload)
    // to avoid packet copying for, e.g., serial transmission at the sink
    // (the orinico header would be between real payload and header!)
    return (orinoco_data_header_t *)
      (call SubPacket.getPayload(msg, call SubPacket.maxPayloadLength())
      + call Packet.payloadLength(msg));
  }


  /***** Init ************************************************************/
  command error_t Init.init() {
    // initial routing state?
    call PacketHistory.flush();

    return SUCCESS;
  }


  /***** StdControl ******************************************************/
  command error_t StdControl.start() {
    isForwarding_ = TRUE;
    sendNext(FALSE);
    return SUCCESS;
  }

  command error_t StdControl.stop() {
    isForwarding_ = FALSE;
    return SUCCESS;
  }


  /***** RootControl *****************************************************/
  command error_t RootControl.setRoot() {
    isRoot_ = TRUE;
    return SUCCESS;
  }

  command error_t RootControl.unsetRoot() {
    isRoot_ = FALSE;
    return SUCCESS;
  }

  command error_t RootControl.isRoot() {
    return isRoot_;
  }


  /***** Send ************************************************************/
  /*
   * upon calling send, the packet is always copied (if possible) and
   * the copy is stored in the sending queue
   * if the routing layer is idle, a new transmission is initiated
   *
   * @return SUCCESS, if the packet was copied and stored in the queue
   *         successfully; ESIZE, if the packet is too large; FAIL
   *         otherwise
   */
  command error_t Send.send[collection_id_t type](message_t * msg, uint8_t len) {
    uint8_t                  i;
    mq_entry_t               qe;
    orinoco_data_header_t  * h;

    // check packet length
    if (len > call Send.maxPayloadLength[type]()) {
      return ESIZE;
    }
    
    // update creation statistics (also count packets that must be discarded due to a full queue)
    call TrafficUpdates.updatePktCreationIntvl();
    
    // make a quick check if there is room in the queue
    if (call SendQueue.size() == call SendQueue.maxSize()) {
#ifdef ORINOCO_DEBUG_STATISTICS
      qs_.numPacketsDropped++;  // we are going to drop this packet
#endif  
      return FAIL;
    }

    
    // STEP 1: copy the packet (by definition, also for sinks, or we'll run
    //         into mem violations
    
    // get memory for new packet
    qe.msg = call MsgPool.get();
    if (qe.msg == NULL) {
#ifdef ORINOCO_DEBUG_STATISTICS
      qs_.numPacketsDropped++;  // we are going to drop this packet
#endif
      return FAIL;
    }

    // copy message
    *(qe.msg) = *msg;
    msg = qe.msg;

    
    // STEP 2: init packet
    // NOTE must be done before storing in queue
    call Packet.setPayloadLength(msg, len);
    h = getHeader(msg);
    h->origin = TOS_NODE_ID;  // TODO (replace by SubAMPacket.address() ?)
    h->seqno  = seqno_++;
    h->hopCnt = 0;
#ifdef ORINOCO_DEBUG_PATH
    for (i = 0; i < ORINOCO_MAX_PATH_RECORD; i++) h->path[i] = 0x00;
#endif
    h->type   = type;

    // DEBUG
    printf("%u que qi %u %u %u %p\n", TOS_NODE_ID, h->origin, h->seqno, h->hopCnt, msg);
    printfflush();

    // attach time of creation for delay tracking
    call PacketDelayMilli.init(msg);

    // STEP 3: trigger self-reception (for roots) or sending
    if (call SendQueue.enqueue(qe) == SUCCESS) {
      if (call RootControl.isRoot()) {
        post selfReceiveTask();
      } else {
        //post sendTask();
        sendNext(FALSE);
      }
      return SUCCESS;
    } else {
      // we should never end up here
#ifdef ORINOCO_DEBUG_STATISTICS
      qs_.numPacketsDropped++;  // we are going to drop this packet
#endif
      dbg("Queue", "%s: send failed due to full queue", __FUNCTION__);
      call MsgPool.put(qe.msg);  // put unneeded buffer back into pool
      return FAIL;
    }
  }

/*
  command error_t Send.cancel[uint8_t client](message_t * msg) {
    // not supported
    return FAIL;
  }
*/

  command uint8_t Send.maxPayloadLength[collection_id_t type]() {
    return call Packet.maxPayloadLength();
  }

  command void * Send.getPayload[collection_id_t type](message_t * msg, uint8_t len) {
    return call Packet.getPayload(msg, len);
  }

/*
  default event void Send.sendDone[uint8_t client](message_t * msg, error_t error) {
  }
*/  

  /***** Receive *********************************************************/
  default event message_t * Receive.receive[collection_id_t collectId](message_t * msg, void * payload, uint8_t len) {
    return msg;
  }


  /***** Snoop ***********************************************************/
  default event message_t * Snoop.receive[collection_id_t collectId](message_t * msg, void * payload, uint8_t len) {
    return msg;
  }


  /***** Intercept *******************************************************/
  default event bool Intercept.forward[collection_id_t collectid](message_t * msg, void * payload, uint8_t len) {
    return TRUE;
  }

  
  /***** SubSend *********************************************************/
  event void SubSend.sendDone(message_t * msg, error_t error) {
    // check, if the packet is mine
     if (msg == (call SendQueue.head()).msg) {
      // remove from queue and put back into pool, if sending successful
      if (error == SUCCESS) {
        call MsgPool.put(msg);
        call SendQueue.dequeue();

        // DEBUG 
        printf("%u que qd %p\n", TOS_NODE_ID, msg);
        printfflush();
      } else {
        // TODO handle broken connections, retry count etc.
      }

      // send next packet in queue
      sendNext(TRUE);
    }
  }


  /***** SubReceive ******************************************************/
  event message_t *
  SubReceive.receive(message_t * msg, void * payload, uint8_t len) {
    mc_entry_t               mc;
    orinoco_data_header_t  * h;

    // get packet header
    h = getHeader(msg);
#ifdef ORINOCO_DEBUG_PATH
    if (h->hopCnt < ORINOCO_MAX_PATH_RECORD && ! call RootControl.isRoot()) {
      h->path[h->hopCnt] = TOS_NODE_ID;  // TODO call SubAMPacket.address() ?
    }
#endif
    h->hopCnt++;  // we're one hop away from previous station

    // get packet len for simplified code
    len = call Packet.payloadLength(msg);

    // duplicate control
    // NOTE while sinks may filter out all duplicates, intermediate nodes
    // are restricted to filtering out those packets with a non-larger hop
    // count (Orinoco must accept duplicates in case of topology changes)
    mc.origin = h->origin;
    mc.seqno  = h->seqno;
    mc.hopCnt = call RootControl.isRoot() ? 0 : h->hopCnt;

    // DEBUG    
    printf("%u que qr %u %u %u %p\n", TOS_NODE_ID, h->origin, h->seqno, h->hopCnt, msg);
    printfflush();

    if (call PacketHistory.lookup(mc)) {
      dbg("Queue", "%s: sorted out duplicate", __FUNCTION__);
#ifdef ORINOCO_DEBUG_STATISTICS
      qs_.numDuplicates++;  // this packet is a duplicate
#endif
      return msg;
    } else {
      call PacketHistory.insert(mc);
    }

    // update receive statistics (we ignore duplicates here at the moment,
    // though we should really check if that is smart or not)
    call TrafficUpdates.updatePktReceptionIntvl();

    // If I'm a root, signal receive, forward otherwise
    if (call RootControl.isRoot()) {
      return signal Receive.receive[h->type](msg, call Packet.getPayload(msg, len), len);
    } else if (! signal Intercept.forward[h->type](msg, call Packet.getPayload(msg, len), len)) {
      return msg;
    } else {
      return forward(msg);
    }
  }

  /***** Packet **********************************************************/
  command void Packet.clear(message_t * msg) {
    call SubPacket.clear(msg);
  }

  command uint8_t Packet.payloadLength(message_t * msg) {
    return call SubPacket.payloadLength(msg) - sizeof(orinoco_data_header_t);
  }

  command void Packet.setPayloadLength(message_t * msg, uint8_t len) {
    call SubPacket.setPayloadLength(msg, len + sizeof(orinoco_data_header_t));
  }

  command uint8_t Packet.maxPayloadLength() {
    return call SubPacket.maxPayloadLength() - sizeof(orinoco_data_header_t);
  }

  command void * Packet.getPayload(message_t * msg, uint8_t len) {
    /* NOTE @see getHeader */
    return call SubPacket.getPayload(msg, len +  sizeof(orinoco_data_header_t));
  }

    
  /***** CollectionPacket ************************************************/
  command am_addr_t CollectionPacket.getOrigin(message_t * msg) {
    return getHeader(msg)->origin;
  }

  command void CollectionPacket.setOrigin(message_t * msg, am_addr_t addr) {
    getHeader(msg)->origin = addr;
  }

  command collection_id_t CollectionPacket.getType(message_t * msg) {
    return getHeader(msg)->type;
  }

  command void CollectionPacket.setType(message_t * msg, collection_id_t id) {
    getHeader(msg)->type = id;
  }

  command uint8_t CollectionPacket.getSequenceNumber(message_t * msg) {
    return getHeader(msg)->seqno;
  }

  command void CollectionPacket.setSequenceNumber(message_t * msg, uint8_t seqno) {
    getHeader(msg)->seqno = seqno;
  }


  /***** CacheCompare ****************************************************/
  command bool CacheCompare.equal(mc_entry_t ce, mc_entry_t cmp) {
    return (ce.origin == cmp.origin) && (ce.seqno == cmp.seqno) && (ce.hopCnt >= cmp.hopCnt);
  }


  /***** QueueStatistics *************************************************/
#ifdef ORINOCO_DEBUG_STATISTICS
  command const orinoco_queue_statistics_t * QueueStatistics.get() {
    return &qs_;
  }
#endif

}

/* eof */
