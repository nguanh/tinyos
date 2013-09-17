/* $Id: $ */
/*
 * Copyright (c) 2013 The University of New South Wales (UNSW)
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
 * - Neither the name of the University of New South Wales
 *   the names of its contributors may be used to endorse or promote
 *   products derived from this software without specific prior written
 *   permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE
 * UNIVERSITY OF NEW SOUTH WALES OR ITS CONTRIBUTORS BE LIABLE
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
 * Pre-defined multicast commands
 *
 * @author Andreas Reinhardt
 * @date September 17, 2013
 */


#ifndef MULTICASTCOMMANDS_H
#define MULTICASTCOMMANDS_H

// Commands that can directly be executed by routed destination nodes
// Bit 7 is reserved for routing layer internals and will always be stripped
typedef enum {
  ORINOCO_MULTICAST_COMMAND_SAMPLE_FAST  = 0x60, // 0110 0000
  ORINOCO_MULTICAST_COMMAND_SAMPLE_NORM  = 0x40, // 0100 0000
  ORINOCO_MULTICAST_COMMAND_SAMPLE_SLOW  = 0x20, // 0010 0000
                                                 //  00 - keep sampling rate 
                                                 
  ORINOCO_MULTICAST_COMMAND_LED1         = 0x10, // 0001 0000
  ORINOCO_MULTICAST_COMMAND_LED2         = 0x08, // 0000 1000
  ORINOCO_MULTICAST_COMMAND_LED3         = 0x04, // 0000 0100
  ORINOCO_MULTICAST_COMMAND_POLLCMD      = 0x02, // 0000 0010
  ORINOCO_MULTICAST_COMMAND_TBD          = 0x01, // 0000 0001
} orinoco_multicast_commands_t;

#ifdef PRINTF_H
  char* getFunctionName(uint8_t cmd) {
    switch(cmd){
    case 0: 
      return "none"; break;
    case ORINOCO_MULTICAST_COMMAND_SAMPLE_FAST:
      return "Fast sampling"; break;
    case ORINOCO_MULTICAST_COMMAND_SAMPLE_NORM:
      return "Normal sampling"; break;
    case ORINOCO_MULTICAST_COMMAND_SAMPLE_SLOW:
      return "Slow sampling"; break;
    case ORINOCO_MULTICAST_COMMAND_LED1:
      return "LED 0 toggle"; break;
    case ORINOCO_MULTICAST_COMMAND_LED2:
      return "LED 1 toggle"; break;
    case ORINOCO_MULTICAST_COMMAND_LED3:
      return "LED 2 toggle"; break;
    case ORINOCO_MULTICAST_COMMAND_POLLCMD:
    case ORINOCO_MULTICAST_COMMAND_TBD:
    default:
      return "Unsupported command"; break; 
    }  
  }
#endif
  
#endif /* MULTICASTCOMMANDS_H */
