#include "Orinoco.h"

// compatibility check
#ifdef PACKET_LINK
#	error Please deactivate PACKET_LINK
#endif

#ifdef LOW_POWER_LISTENING
#	error Please deactivate LOW_POWER_LISTENING
#endif

configuration OrinocoP {
  provides {
    // control
    interface RootControl;
    interface StdControl as ForwardingControl;  // enable forwarding (sending)
    interface SplitControl as RadioControl;     // enable radio

    // send and receive
    interface QueueSend as Send[collection_id_t id];
    interface Receive[collection_id_t id];
    interface Receive as Snoop[collection_id_t id];
    interface Intercept[collection_id_t id];

    // packet
    interface Packet;
    interface CollectionPacket;
    interface PacketDelay<TMilli>;

    // make config and traffic statistics available
    interface OrinocoConfig;
    interface OrinocoTrafficStatistics;
  }
}
implementation {
  components MainC;

  components OrinocoQueueP as Queue;
  RootControl           = Queue;
  ForwardingControl     = Queue;
  Packet                = Queue;
  CollectionPacket      = Queue;
  Send                  = Queue;
  Receive               = Queue.Receive;
  Snoop                 = Queue.Snoop;
  Intercept             = Queue;
  MainC                -> Queue.Init;
  PacketDelay           = Queue;

  components OrinocoRadioC;
  RadioControl          = OrinocoRadioC;
  Queue.SubPacket  -> OrinocoRadioC;
  Queue.SubReceive -> OrinocoRadioC.Receive;
  Queue.SubSend    -> OrinocoRadioC;

  // packet time stamping and delay calculation
  Queue.LocalTimeRadio       -> OrinocoRadioC;
  Queue.PacketTimeSyncOffset -> OrinocoRadioC;
  Queue.PacketTimeStampRadio -> OrinocoRadioC;

  components LocalTimeMilliC;
  Queue.LocalTimeMilli -> LocalTimeMilliC;

  // config
  components OrinocoConfigC;
  OrinocoConfig = OrinocoConfigC;
  Queue.Config -> OrinocoConfigC;

  components OrinocoPathCostHopCountC as PathCost;
  PathCost.RootControl -> Queue;
  OrinocoRadioC.OrinocoPathCost  ->  PathCost;

  components new QueueC(mq_entry_t, ORINOCO_QUEUE_SIZE) as SendQueue;
  Queue.SendQueue  -> SendQueue;

  components new PoolC(message_t, ORINOCO_QUEUE_SIZE) as MsgPool;
  Queue.MsgPool    -> MsgPool;

  components new OrinocoCacheC(mc_entry_t, ORINOCO_PACKETHISTORY_SIZE) as PacketHistory;
  Queue.PacketHistory    -> PacketHistory;
  PacketHistory.CacheCompare -> Queue;

  components OrinocoTrafficStatisticsC;
  OrinocoTrafficStatistics         = OrinocoTrafficStatisticsC;
  Queue.TrafficUpdates            -> OrinocoTrafficStatisticsC;
  OrinocoRadioC.TrafficUpdates    -> OrinocoTrafficStatisticsC;
  OrinocoRadioC.TrafficStatistics -> OrinocoTrafficStatisticsC;
}
