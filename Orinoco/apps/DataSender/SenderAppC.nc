/*
 * Copyright (c) 2013 The University of New South Wales, Sydney, Australia.
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
 * @author Christian Renner
 * @date 18 April 2013
 */


#include "Sender.h"

configuration SenderAppC {
}
implementation {
  components MainC;
  components SenderC as MainProgram;
  components OrinocoP;
  components LedsC;
  components new TimerMilliC() as PollTimer, new TimerMilliC() as SendTimer;

  components new SensirionSht11C() 				as TempAndHumid,
  			 new HamamatsuS1087ParC() 			as PhotoPar,
			 new HamamatsuS10871TsrC() 			as PhotoTsr,
			 new Msp430InternalVoltageC() 		as InternalVoltage;

  MainProgram.Boot              -> MainC.Boot;
  MainProgram.PollTimer         -> PollTimer;
  MainProgram.SendTimer         -> SendTimer;
  MainProgram.RadioControl      -> OrinocoP;
  MainProgram.ForwardingControl -> OrinocoP;
  MainProgram.Send              -> OrinocoP.Send;
  MainProgram.RootControl       -> OrinocoP;
  MainProgram.Packet            -> OrinocoP;
  MainProgram.Leds				-> LedsC;

  MainProgram.Read[unique(UNIQUEID)] -> TempAndHumid.Temperature;
  MainProgram.Read[unique(UNIQUEID)] -> TempAndHumid.Humidity;
  MainProgram.Read[unique(UNIQUEID)] -> PhotoTsr;
  MainProgram.Read[unique(UNIQUEID)] -> PhotoPar;
  MainProgram.Read[unique(UNIQUEID)] -> InternalVoltage;

  // Orinoco internal reporting
  components OrinocoStatsReportingJobC;
  OrinocoStatsReportingJobC.Packet     -> OrinocoP;
  MainProgram.OrinocoStatsReportingMsg -> OrinocoStatsReportingJobC;

  components OrinocoDebugReportingJobC;
  OrinocoDebugReportingJobC.Packet     -> OrinocoP;
  MainProgram.OrinocoDebugReportingMsg -> OrinocoDebugReportingJobC;
}
