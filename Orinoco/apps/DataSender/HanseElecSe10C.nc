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
 * @date 10 May 2013
 */

configuration HanseElecSe10C {
  provides interface DeviceMetadata;
  provides interface Read<uint16_t> as ReadMotion;
  provides interface ReadStream<uint16_t> as ReadMotionStream;
} 
implementation {
    
  components HanseElecSe10P;
  
  // When providing something, use = to indicate which class actually implements it
  DeviceMetadata = HanseElecSe10P;  
  ReadMotion = HanseElecSe10P.Se10Read;  
  ReadMotionStream = HanseElecSe10P.Se10ReadStream;  

  // Provider.Interface <- Consumer.Interface
  // Consumer.Interface -> Provider.Interface
  components new AdcReadClientC();
  HanseElecSe10P.Read -> AdcReadClientC;
  AdcReadClientC.AdcConfigure -> HanseElecSe10P;
  
  components new AdcReadStreamClientC();
  HanseElecSe10P.ReadStream -> AdcReadStreamClientC;
  AdcReadStreamClientC.AdcConfigure -> HanseElecSe10P;
  
  components HplMsp430GeneralIOC;
  HanseElecSe10P.EnablePin -> HplMsp430GeneralIOC.Port62;
}