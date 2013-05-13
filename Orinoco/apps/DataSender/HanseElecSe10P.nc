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
  provides interface AdcConfigure<const msp430adc12_channel_config_t*>;
  provides interface Read<uint16_t> as ReadX[uint8_t client];
  provides interface ReadStream<uint16_t> as ReadStreamX[uint8_t client];
  provides interface DeviceMetadata;
  
  uses interface Read<uint16_t> as HwRead[uint8_t client];
  uses interface ReadStream<uint16_t> as HwReadStream[uint8_t client];
  uses interface GeneralIO as EnablePin;  
}
implementation {

  void enable(void) {
    call EnablePin.makeOutput();
    call EnablePin.set();
  }
  
  void disable(void) {
    call EnablePin.clr();
  }
  
  command error_t ReadX.read[uint8_t client]() {
    enable();
    if (call HwRead.read[client]() == SUCCESS) {
      return SUCCESS;
    } else {
      disable();
      return FAIL;
    }
  }

  command error_t ReadStreamX.postBuffer[uint8_t client](uint16_t* buf, uint16_t count) {
    return call HwReadStream.postBuffer[client](buf, count);
  }
  
  command error_t ReadStreamX.read[uint8_t client](uint32_t usPeriod) {
    enable();
     if (call HwReadStream.read[client](usPeriod) == SUCCESS) {
      return SUCCESS;
    } else {
      disable();
      return FAIL;
    }
  }
  
  event void HwRead.readDone[uint8_t client](error_t result, uint16_t val) {
    disable();
    signal ReadX.readDone[client](result, val);
  }

  event void HwReadStream.bufferDone[uint8_t client](error_t result, uint16_t* buf, uint16_t count) {
    signal ReadStreamX.bufferDone[client](result, buf, count);
  }
  
  event void HwReadStream.readDone[uint8_t client](error_t result, uint32_t usActualPeriod) {
    disable();
    signal ReadStreamX.readDone[client](result, usActualPeriod);
  }
  
  msp430adc12_channel_config_t config = {
    inch: INPUT_CHANNEL_A1,
    sref: REFERENCE_VREFplus_AVss,
    ref2_5v: REFVOLT_LEVEL_NONE,
    adc12ssel: SHT_SOURCE_SMCLK,
    adc12div: SHT_CLOCK_DIV_1,
    sht: SAMPLE_HOLD_64_CYCLES,
    sampcon_ssel: SAMPCON_SOURCE_SMCLK,
    sampcon_id: SAMPCON_CLOCK_DIV_1
  };

  async command const msp430adc12_channel_config_t* AdcConfigure.getConfiguration() {
    return &config;
  }
  
  command uint8_t DeviceMetadata.getSignificantBits() {
    return 12;
  }
  
  // Define what happens to the data when no one wires our provided interface
  default event void ReadX.readDone[uint8_t client](error_t result, uint16_t val) {}
  default event void ReadStreamX.bufferDone[uint8_t client](error_t result, uint16_t* buf, uint16_t count) {}
  default event void ReadStreamX.readDone[uint8_t client](error_t result, uint32_t usActualPeriod) {}
  default command error_t HwRead.read[uint8_t client]() { return FAIL; }
  default command error_t HwReadStream.read[uint8_t client](uint32_t usPeriod) { return FAIL; }
  default command error_t HwReadStream.postBuffer[uint8_t client](uint16_t* buf, uint16_t count) { return FAIL; }
}