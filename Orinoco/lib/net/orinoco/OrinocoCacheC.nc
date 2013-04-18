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
 * A cache implementation (ring buffer) used as packet history for
 * duplicate recognition (at sink)
 *
 * @author Christian Renner
 * @date January 4 2012
 */


generic module OrinocoCacheC(typedef cache_t, uint8_t SIZE) {
  provides {
    interface Cache<cache_t>;
  }
  uses {
    interface CacheCompare<cache_t>;
  }
}

implementation {
  cache_t  cache[SIZE];
  uint8_t  newest = 0, len = 0;

  command void Cache.flush() {
    newest = 0;
    len    = 0;
  }

  command void Cache.insert(cache_t c) {
    if (newest == 0) {
      newest = SIZE - 1;
    } else {
      newest--;
    }
    cache[newest] = c;
    if (len < SIZE) len++;
  }

  command bool Cache.lookup(cache_t c) {
    uint8_t  i, pos = newest;
    for (i = 0; i < len; i++) {
      if (call CacheCompare.equal(cache[pos], c)) {
        return TRUE;
      }
      if (++pos >= SIZE) { pos = 0; }
    }
    return FALSE;
  }
}

