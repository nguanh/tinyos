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
 * Orinoco Statistics
 *
 * @author Christian Renner
 * @date January 20th 2012
 */

#ifndef ORINOCO_STATISTICS_H
#define ORINOCO_STATISTICS_H

#include <inttypes.h>


/* update interval of pkt rates (creation and reception) */
#define  ORINOCO_PKTRATE_UPDATE_PERIOD  (180 * 1024UL)  /* binary ms */

/**
 * STATISTICS
 */
/* queue statistics */
// ORINOCO_DEBUG_STATISTICS
typedef struct {
  uint16_t  numPacketsDropped;    ///> number of dropped packets due to queue overflow
  uint16_t  numDuplicates;        ///> number of duplicates (among received packets)
} orinoco_queue_statistics_t;

/* statistics related to energy expenditure / load */
typedef struct {
  uint32_t  avgCreationRate;     ///> mean number of packets per ORINOCO_PKTRATE_UPDATE_PERIOD (in 1 / 1024)
  uint32_t  avgReceptionRate;    ///> mean number of packets per ORINOCO_PKTRATE_UPDATE_PERIOD (in 1 / 1024)
  uint32_t  avgForwardDelay;      ///> mean delay for packet delivery (waiting time before first beacon) (ms)
  uint16_t  avgTxBurstLen;        ///> average length of subsequently sent packets (in 1/256)
  uint16_t  avgRxBurstLen;        ///> average length of subsequently received packets (in 1/256)
} orinoco_traffic_statistics_t;

/* beacon and packet statistics */
// this will only be available, if the code is compiled with
// ORINOCO_DEBUG_STATISTICS
typedef struct {
  uint32_t  numTxBeacons;         ///> number of successfully sent beacons (including ack beacons)
  uint32_t  numTxAckBeacons;      ///> number of successfully sent beacons serving as an ack
  uint16_t  numTxBeaconsFail;     ///> number of failed beacon sending attempts
  uint32_t  numRxBeacons;         ///> number of received beacons (including ignored ones)
  uint32_t  numIgnoredBeacons;    ///> number of ignored beacons
  uint32_t  numTxPackets;         ///> number of *successfully* sent packets
  uint16_t  numTxPacketsFail;     ///> number of *failed* packet sending attempts
  uint32_t  numRxPackets;         ///> number of received packets (including duplicates)
  uint16_t  numTxTimeouts;        ///> number of tx timeouts (including metric resets)
  uint16_t  numMetricResets;      ///> number of metric resets
} orinoco_packet_statistics_t;


#endif /* ORINOCO_STATISTICS_H */
