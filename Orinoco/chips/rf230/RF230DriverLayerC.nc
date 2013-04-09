/*
 * Copyright (c) 2007, Vanderbilt University
 * All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose, without fee, and without written agreement is
 * hereby granted, provided that the above copyright notice, the following
 * two paragraphs and the author appear in all copies of this software.
 * 
 * IN NO EVENT SHALL THE VANDERBILT UNIVERSITY BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT
 * OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF THE VANDERBILT
 * UNIVERSITY HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 * THE VANDERBILT UNIVERSITY SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE VANDERBILT UNIVERSITY HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 *
 * Author: Miklos Maroti
 */
/* modifications by Christian Renner */

#include <RadioConfig.h>
#include <RF230DriverLayer.h>

configuration RF230DriverLayerC
{
	provides
	{
		interface RadioState;
		interface RadioSend;
		interface RadioReceive;
		interface RadioCCA;
		interface RadioPacket;

		interface PacketField<uint8_t> as PacketTransmitPower;
		interface PacketField<uint8_t> as PacketRSSI;
		interface PacketField<uint8_t> as PacketTimeSyncOffset;
		interface PacketField<uint8_t> as PacketLinkQuality;
		interface LinkPacketMetadata;

		interface LocalTime<TRadio> as LocalTimeRadio;
		interface Alarm<TRadio, tradio_size>;
	}

	uses
	{
		interface RF230DriverConfig as Config;
		interface PacketTimeStamp<TRadio, uint32_t>;

		interface PacketFlag as TransmitPowerFlag;
		interface PacketFlag as RSSIFlag;
		interface PacketFlag as TimeSyncFlag;
		interface RadioAlarm;

	}
}

implementation
{
	components RF230DriverLayerP as DriverLayerP,
		HplRF230C, BusyWaitMicroC, TaskletC, MainC;

	RadioState = DriverLayerP;
	RadioSend = DriverLayerP;
	RadioReceive = DriverLayerP;
	RadioCCA = DriverLayerP;
	RadioPacket = DriverLayerP;

	//CR
	// NOTE we need a different timing to access delay in the app
	// the clock we're using does not stop when the node/MCU is sleeping
	// FIXME how about circumventing this problem by manipulating timing
	// in an upper layer?
	//LocalTimeRadio = HplRF230C;
	components LocalTimeSyncedMicroC;
	LocalTimeRadio = LocalTimeSyncedMicroC;

	Config = DriverLayerP;

	PacketTransmitPower = DriverLayerP.PacketTransmitPower;
	TransmitPowerFlag = DriverLayerP.TransmitPowerFlag;

	PacketRSSI = DriverLayerP.PacketRSSI;
	RSSIFlag = DriverLayerP.RSSIFlag;

	PacketTimeSyncOffset = DriverLayerP.PacketTimeSyncOffset;
	TimeSyncFlag = DriverLayerP.TimeSyncFlag;

	PacketLinkQuality = DriverLayerP.PacketLinkQuality;
	PacketTimeStamp = DriverLayerP.PacketTimeStamp;
	LinkPacketMetadata = DriverLayerP;

	//CR see above
	//DriverLayerP.LocalTime -> HplRF230C;
	DriverLayerP.LocalTime -> LocalTimeSyncedMicroC;

	Alarm = HplRF230C.Alarm;
        RadioAlarm = DriverLayerP.RadioAlarm;

	DriverLayerP.SELN -> HplRF230C.SELN;
	DriverLayerP.SpiResource -> HplRF230C.SpiResource;
	DriverLayerP.FastSpiByte -> HplRF230C;

	DriverLayerP.SLP_TR -> HplRF230C.SLP_TR;
	DriverLayerP.RSTN -> HplRF230C.RSTN;

	DriverLayerP.IRQ -> HplRF230C.IRQ;
	DriverLayerP.Tasklet -> TaskletC;
	DriverLayerP.BusyWait -> BusyWaitMicroC;

#ifdef RADIO_DEBUG
	components DiagMsgC;
	RF230DriverLayerP.DiagMsg -> DiagMsgC;
#endif

	MainC.SoftwareInit -> DriverLayerP.SoftwareInit;

	components RealMainP;
	RealMainP.PlatformInit -> DriverLayerP.PlatformInit;
}
