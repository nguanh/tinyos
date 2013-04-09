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
 * MASSACHUSETTS INSITIUTE OF TECHNOLOGY OR ITS CONTRIBUTORS BE LIABLE
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
