/** 
 * Orinoco beacon structure
 * @author Christian Renner (christian.renner@tuhh.de)
 */
#ifndef ORINOCO_BEACON_MSG_H
#define ORINOCO_BEACON_MSG_H

typedef enum {
  ORINOCO_BEACON_FLAGS_ACCEPTSDATA  = 0x01
} orinoco_beacon_flags_t;


typedef nx_struct OrinocoBeaconMsg {
  nx_uint8_t             seqno;
  nx_orinoco_pathcost_t  cost;      // Orinoco path metric offer
  nx_uint8_t             cw;        // congestion window
  nx_uint8_t             flags;     // status bits (see orinoco_beacon_flags_t)
  orinoco_routing_t      route;     // Support for down-tree routing
} OrinocoBeaconMsg;

#endif 

