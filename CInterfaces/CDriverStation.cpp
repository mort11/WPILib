/*----------------------------------------------------------------------------*/
/* Copyright (c) FIRST 2008. All Rights Reserved.							  */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in $(WIND_BASE)/WPILib.  */
/*----------------------------------------------------------------------------*/

#include "DriverStation.h"
#include "CDriverStation.h"

static DriverStation *ds = NULL;

/**
 * Get the value of the axis on a joystick.
 * This depends on the mapping of the joystick connected to the specified port.
 *
 * @param stick The joystick to read.
 * @param axis The analog axis value to read from the joystick.
 * @return The value of the axis on the joystick.
 */
float GetDSStickAxis(UINT32 stick, UINT32 axis)
{
	if (ds == NULL) ds = DriverStation::GetInstance();
	return ds->GetStickAxis(stick, axis);
}

/**
 * The state of the buttons on the joystick.
 * 12 buttons (4 msb are unused) from the joystick.
 *
 * @param stick The joystick to read.
 * @return The state of the buttons on the joystick.
 */
short GetDSStickButtons(UINT32 stick)
{
	if (ds == NULL) ds = DriverStation::GetInstance();
	return ds->GetStickButtons(stick);
}

/**
 * Get an analog voltage from the Driver Station.
 * The analog values are returned as UINT32 values for the Driver Station analog inputs.
 * These inputs are typically used for advanced operator interfaces consisting of potentiometers
 * or resistor networks representing values on a rotary switch.
 *
 * @param channel The analog input channel on the driver station to read from. Valid range is 1 - 4.
 * @return The analog voltage on the input.
 */
float GetDSAnalogIn(UINT32 channel)
{
	if (ds == NULL) ds = DriverStation::GetInstance();
	return ds->GetAnalogIn(channel);
}

/**
 * Get values from the digital inputs on the Driver Station.
 * Return digital values from the Drivers Station. These values are typically used for buttons
 * and switches on advanced operator interfaces.
 * @param channel The digital input to get. Valid range is 1 - 8.
 */
bool GetDSDigitalIn(UINT32 channel)
{
	if (ds == NULL) ds = DriverStation::GetInstance();
	return ds->GetDigitalIn(channel);
}

/**
 * Set a value for the digital outputs on the Driver Station.
 *
 * Control digital outputs on the Drivers Station. These values are typically used for
 * giving feedback on a custom operator station such as LEDs.
 *
 * @param channel The digital output to set. Valid range is 1 - 8.
 * @param value The state to set the digital output.
 */
void SetDSDigitalOut(UINT32 channel, bool value)
{
	if (ds == NULL) ds = DriverStation::GetInstance();
	ds->SetDigitalOut(channel, value);
}

/**
 * Get a value that was set for the digital outputs on the Driver Station.
 * @param channel The digital ouput to monitor. Valid range is 1 through 8.
 * @return A digital value being output on the Drivers Station.
 */
bool GetDSDigitalOut(UINT32 channel)
{
	if (ds == NULL) ds = DriverStation::GetInstance();
	return ds->GetDigitalOut(channel);
}

/**
 * Returns the robot state
 * @returns true if the robot is disabled
 */
bool IsDSDisabled()
{
	if (ds == NULL) ds = DriverStation::GetInstance();
	return ds->IsDisabled();
}

/**
 * Returns flag for field state
 * @returns true if the field is in Autonomous mode
 */
bool IsDSAutonomous()
{
	if (ds == NULL) ds = DriverStation::GetInstance();
	return ds->IsAutonomous();
}

/**
 * Returns flag for field state
 * @returns true if the field is in Operator Control mode (teleop)
 */
bool IsDSOperatorControl()
{
	if (ds == NULL) ds = DriverStation::GetInstance();
	return ds->IsOperatorControl();
}

/**
 * Return the DS packet number.
 * The packet number is the index of this set of data returned by the driver station.
 * Each time new data is received, the packet number (included with the sent data) is returned.
 */
UINT32 GetDSPacketNumber()
{
	if (ds == NULL) ds = DriverStation::GetInstance();
	return ds->GetPacketNumber();
}

UINT32 GetDSAlliance()
{
	if (ds == NULL) ds = DriverStation::GetInstance();
	return ds->GetAlliance();
}

UINT32 GetDSLocation()
{
	if (ds == NULL) ds = DriverStation::GetInstance();
	return ds->GetLocation();
}

/**
 * Get the battery voltage on the robot
 * @returns the battery voltage in volts
 */
float GetBatteryVoltage()
{
	if (ds == NULL) ds = DriverStation::GetInstance();
	return ds->GetBatteryVoltage();
}
