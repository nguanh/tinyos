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
 * Orinoco Definitions
 *
 * @author Christian Renner
 * @date December 13 2011
 */


#ifndef ORINOCO_H
#define ORINOCO_H

#include <message.h>
#include <OrinocoPlatform.h>
//#include <TimeSyncMessageLayer.h>

/* AM packet types */
enum {
  ORINOCO_AM_BEACON = 128,
  ORINOCO_AM_DATA   = 129
};

/* wake-up configuration (default values) */
enum {
  ORINOCO_DFLT_WAKEUP_INTERVAL    =  512,  /* ms */
  ORINOCO_DFLT_WAKEUP_DEVIATION   =   10,  /* percent */
  ORINOCO_DFLT_NUM_WAITING_INTVL  =    3,  /* multiple, absolute number */
  ORINOCO_DFLT_MIN_QUEUE_LEVEL    =    1,  /* min. number of packets in queue before forwarding */
};

/* collection data types */
typedef uint8_t    collection_id_t;
typedef nx_uint8_t nx_collection_id_t;

/* metric */
typedef uint8_t    orinoco_pathcost_t;
typedef nx_uint8_t nx_orinoco_pathcost_t;

enum {
  ORINOCO_PATHCOST_SINK = 0x00,
  ORINOCO_PATHCOST_INF  = 0xFF
};

/* orinoco routing footer */
/* NOTE the routing information must be a footer with final timestamping
 * field, so that we can easily exploit the TinyOS time stamping/sync
 * feature (works at least on Iris/RFxxx nodes)
 */
enum {
  ORINOCO_MAX_PATH_RECORD = 7
};
typedef nx_struct {
  nx_am_addr_t        origin;  // origin of data packet
  nx_uint8_t          seqno;   // sequence number
  nx_uint8_t          hopCnt;  // hop count
  nx_collection_id_t  type;    // packet type
#ifdef ORINOCO_DEBUG_PATH
  nx_uint8_t          path[ORINOCO_MAX_PATH_RECORD];
#endif
} orinoco_data_header_t;

typedef nx_struct {
  nx_uint32_t ctime;  // time of creation
} orinoco_delay_footer_t;

/**
 * QUEUE DEFINITIONS and DUPLICATE RECOGNITION
 */
/* forwaring layer duplicate recognition */
typedef struct {
  am_addr_t           origin;  // origin of data packet
  uint8_t             seqno;   // sequence number
  uint8_t             hopCnt;  // hop counter
} mc_entry_t;

/* message queue type and queue size */
typedef struct {
  message_t * ONE_NOK msg;   // message pointer
} mq_entry_t;

#ifndef ORINOCO_QUEUE_SIZE
#  define ORINOCO_QUEUE_SIZE          30
#endif
#ifndef ORINOCO_PACKETHISTORY_SIZE
#  define ORINOCO_PACKETHISTORY_SIZE  30
#endif

#endif /* ORINOCO_H */
