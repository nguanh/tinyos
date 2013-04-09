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
 * @author Christian Renner
 * @date December 14 2011
 */

configuration SinkC {
}
implementation {
  components SinkP;
  
  components MainC;
  SinkP.Boot             -> MainC;

  components new TimerMilliC() as AliveTimer;
  SinkP.AliveTimer -> AliveTimer;

  components OrinocoP as Radio;
  SinkP.RootControl      -> Radio;
  SinkP.RoutingControl   -> Radio;
  SinkP.RadioControl     -> Radio;
  SinkP.OrinocoConfig    -> Radio;

  SinkP.RadioSend        -> Radio;
  SinkP.RadioReceive     -> Radio.Receive;
  SinkP.RadioPacket      -> Radio;
  SinkP.CollectionPacket -> Radio;
  SinkP.PacketDelayMilli -> Radio;

  components SerialActiveMessageC as Serial;
  SinkP.SerialControl    -> Serial;
  
  SinkP.UartSend         -> Serial;
  //SinkP.UartReceive      -> Serial.Receive;
  SinkP.UartPacket       -> Serial;
  SinkP.UartAMPacket     -> Serial;

  components OrinocoStatsReportingJobC;
  OrinocoStatsReportingJobC.Packet -> Radio;
  SinkP.OrinocoStatsReportingMsg   -> OrinocoStatsReportingJobC;

  components OrinocoDebugReportingJobC;
  OrinocoDebugReportingJobC.Packet -> Radio;
  SinkP.OrinocoDebugReportingMsg   -> OrinocoDebugReportingJobC;
  
  components LedsC as LedsC;
  SinkP.Leds             -> LedsC;
}
