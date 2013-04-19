/*
 * Copyright (c) 2013 The University of New South Wales, Sydney, Australia.
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
 * COPYRIGHT HOLDER OR ITS CONTRIBUTORS BE LIABLE
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
 * @author Andreas Reinhardt
 * @date 18 April 2013
 */

#ifndef SENDER_H
#define SENDER_H

// Sensor definitions
#define INVALID_SAMPLE_VALUE 0xFFFF
#define UNIQUEID "Once a jolly swagman camped by a billabong"

// Interval definitions
#define SENSOR_POLL_INTV 2024
#define SENSOR_SEND_INTV 5000

// Get some timer-independent sleep
#ifdef __MSP430__
static void __inline__ usleep(register uint16_t n) {
  __asm__ __volatile__ (
			"1: \n"
			" dec %[n] \n"
			" jne 1b \n"
			: [n] "+r"(n));
}
#endif

// Define how data are stored (NX types to keep this TX-able)
typedef nx_struct Entry {
  nx_uint8_t  flags;
  nx_uint32_t counter;
  nx_uint16_t values[uniqueCount(UNIQUEID)];
} Entry;

enum {
  ENTRY_SIZE = sizeof(Entry),
};

#endif
