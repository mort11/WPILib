/*----------------------------------------------------------------------------*/
/* Copyright (c) FIRST 2008. All Rights Reserved.							  */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in $(WIND_BASE)/WPILib.  */
/*----------------------------------------------------------------------------*/

#ifndef _C_DRIVER_STATION_H
#define _C_DRIVER_STATION_H

float GetDSStickAxis(UINT32 stick, UINT32 axis);
short GetDSStickButtons(UINT32 stick);

float GetDSAnalogIn(UINT32 channel);
bool GetDSDigitalIn(UINT32 channel);
void SetDSDigitalOut(UINT32 channel, bool value);
bool GetDSDigitalOut(UINT32 channel);

bool IsDSDisabled();
bool IsDSAutonomous();
bool IsDSOperatorControl();

UINT32 GetDSPacketNumber();
UINT32 GetDSAlliance();
UINT32 GetDSLocation();

float GetBatteryVoltage();

#endif
