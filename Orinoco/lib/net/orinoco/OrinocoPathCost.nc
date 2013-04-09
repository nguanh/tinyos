#include "Orinoco.h"

interface OrinocoPathCost {

  // obtain path cost offered by this node
  command orinoco_pathcost_t getCost();

  // update current cost
  // TODO
  command void reviseCost();

  // check whether to accept a beacon offer
  // @param update if TRUE; the weight is updates (if better), otherwise no update will occur
  command bool inspectBeacon(message_t * msg, orinoco_pathcost_t cost, bool update);
}
