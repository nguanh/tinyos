module OrinocoPathCostHopCountP {
  provides {
    interface OrinocoPathCost;
  }
  uses {
    interface RootControl;
    interface LinkPacketMetadata;
  }
}
implementation {
  // the current cost for data going through this link
  orinoco_pathcost_t  curCost_ = ORINOCO_PATHCOST_INF;
  // best alternative cost
  orinoco_pathcost_t  altCost_ = ORINOCO_PATHCOST_INF;

  // return current cost
  command orinoco_pathcost_t OrinocoPathCost.getCost() {
    return call RootControl.isRoot() ? 0 : curCost_;
  }

  // we could not accept any neighbor with acceptable cost,
  // so we're probably too picky. Adapt local cost to best offer
  command void OrinocoPathCost.reviseCost() {
    // there is a neighbor => slowly adapt
    // TODO check, if this is sound 
    if (altCost_ != ORINOCO_PATHCOST_INF && curCost_ != ORINOCO_PATHCOST_INF) {
      curCost_ = (curCost_ + altCost_ + 1) / 2;
    } else {
      curCost_ = ORINOCO_PATHCOST_INF;
    }
    // NOTE in sparse networks, the following code is prone to
    // routing loops, frequently to packets being sent back to where
    // they are coming from
    //curCost_ = altCost_;
    //altCost_ = ORINOCO_PATHCOST_INF;
  }

  // check whether to accept a beacon offer
  command bool OrinocoPathCost.inspectBeacon(message_t * msg, orinoco_pathcost_t cost, bool update) {
    // no forwarding for sinks, note that we should actually never end up
    // at this place on sink nodes
    if (call RootControl.isRoot()) {
      return FALSE;
    }

    // if beacon has poor link quality, reject
    if (! call LinkPacketMetadata.highChannelQuality(msg)) {
      return FALSE;
    }

    // do not react to infinite costs (these beacons should not be sent)
    if (cost == ORINOCO_PATHCOST_INF) {
      return FALSE;
    }

    // channel quality appears to be high => calculate offered cost
    cost += 1;  // total cost to sink
    if (cost > curCost_) {
      // cost is too much, but store as alternative
      if (cost < altCost_) {
        altCost_ = cost;
      }
      return FALSE;
    }

    // only update, if desired (per specification, this should only be the
    // case, if the beacon is an ack)
    if (update) {
      curCost_ = cost;
    }

    return TRUE;
  }
}
