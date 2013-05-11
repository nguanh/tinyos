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

module HanseElecSe10P {
  provides interface DeviceMetadata;
  provides interface AdcConfigure<const msp430adc12_channel_config_t*>;
  provides interface Read<uint16_t> as Se10Read;
  provides interface ReadStream<uint16_t> as Se10ReadStream;
  
  uses interface Read<uint16_t>;
  uses interface ReadStream<uint16_t>;
  uses interface HplMsp430GeneralIO as EnablePin;  
}
implementation {

  void enable(void) {
    call EnablePin.makeOutput();
    call EnablePin.set();
  }
  
  void disable(void) {
    call EnablePin.clr();
  }
  
  command error_t Se10Read.read() {
    enable();
    if (call Read.read() == SUCCESS) {
      return SUCCESS;
    } else {
      disable();
      return FAIL;
    }
  }

  command error_t Se10ReadStream.postBuffer(uint16_t* buf, uint16_t count) {
    return call ReadStream.postBuffer(buf, count);
  }
  
  command error_t Se10ReadStream.read(uint32_t usPeriod) {
    enable();
     if (call ReadStream.read(usPeriod) == SUCCESS) {
      return SUCCESS;
    } else {
      disable();
      return FAIL;
    }
  }
  
  event void Read.readDone(error_t result, uint16_t val) {
    disable();
    signal Se10Read.readDone(result, val);
  }
  
  event void ReadStream.bufferDone(error_t result, uint16_t* buf, uint16_t count) {
    signal Se10ReadStream.bufferDone(result, buf, count);
  }
  
  event void ReadStream.readDone(error_t result, uint32_t usActualPeriod) {
    disable();
    signal Se10ReadStream.readDone(result, usActualPeriod);
  }
 
  msp430adc12_channel_config_t config = {
    inch: INPUT_CHANNEL_A1,
    sref: REFERENCE_VREFplus_AVss,
    ref2_5v: REFVOLT_LEVEL_1_5,
    adc12ssel: SHT_SOURCE_ACLK,
    adc12div: SHT_CLOCK_DIV_1,
    sht: SAMPLE_HOLD_4_CYCLES,
    sampcon_ssel: SAMPCON_SOURCE_SMCLK,
    sampcon_id: SAMPCON_CLOCK_DIV_1
  };

  command uint8_t DeviceMetadata.getSignificantBits() { return 12; }

  async command const msp430adc12_channel_config_t* AdcConfigure.getConfiguration() {
    return &config;
  }
}