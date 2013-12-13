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

#ifndef ORINOCO_RADIO_H
#define ORINOCO_RADIO_H


/* platform/radio specific setup */
enum {
  ORINOCO_DFLT_CONGESTION_WIN_MIN =   24,  /* ms */
  ORINOCO_DFLT_CONGESTION_WIN_MAX =   64,  /* ms */
  ORINOCO_ACK_WAITING_TIME        =   40,  /* ms */
  ORINOCO_DATA_WAITING_TIME       =   16,  /* ms */
};

/* platform/radio spec. LIMITS for wake-up config */
enum {
  ORINOCO_WAKEUP_INTERVAL_MIN =   128,  /* ms */
  ORINOCO_WAKEUP_INTERVAL_MAX =  5120,  /* ms */
};

// from the radio driver layer to enable cross-platfrom compatibility
// could be revised at some point
//enum {
//  ORINOCO_MIN_RSSI           = 2, // min. RSSI needed to accept a beacon
//};

#endif /* ORINOCO_RADIO_H */
