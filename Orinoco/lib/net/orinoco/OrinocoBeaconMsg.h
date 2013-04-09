/** 
 * Orinoco beacon structure
 * @author Christian Renner (christian.renner@tu-harburg.de)
 */
#ifndef ORINOCO_BEACON_MSG_H
#define ORINOCO_BEACON_MSG_H

typedef nx_struct OrinocoBeaconMsg {
  nx_orinoco_pathcost_t  cost;      // Orinoco path metric offer
  nx_uint8_t             cw;        // congestion window 
} OrinocoBeaconMsg;


#endif 

