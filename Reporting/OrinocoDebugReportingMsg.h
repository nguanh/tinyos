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
 * Orinoco Statistics Message
 *
 * @author Christian Renner
 * @date February 7th 2012
 */

#ifndef ORINOCO_DEBUG_REPORTING_MSG_H
#define ORINOCO_DEBUG_REPORTING_MSG_H

typedef nx_struct OrinocoDebugReportingMsg {
  nx_data_seqno_t seqno;
  nx_struct { // @see Statistics.h
    nx_uint16_t  numPacketsDropped;
    nx_uint16_t  numDuplicates;
  } qs;
  nx_struct { // @see Statistics.h
    nx_uint32_t  numTxBeacons;
    nx_uint32_t  numTxAckBeacons;
    nx_uint16_t  numTxBeaconsFail;
    nx_uint32_t  numRxBeacons;
    nx_uint32_t  numIgnoredBeacons;
    nx_uint32_t  numTxPackets;
    nx_uint16_t  numTxPacketsFail;
    nx_uint32_t  numRxPackets;
    nx_uint16_t  numTxTimeouts;
    nx_uint16_t  numMetricResets;
  } ps;
} OrinocoDebugReportingMsg;


#endif 

