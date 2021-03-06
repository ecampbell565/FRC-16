/*
 * launchpad.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: Eric R. Campbell
 */

#include "launchpad.hpp"
#include <WPILib.h>

Launchpad::Launchpad(uint32_t port) :
	launchpad( new Joystick(port) ),
	SWITCH_2( new JoystickButton(launchpad, 6) ),
	INTAKE_ZERO_PID( new JoystickButton(launchpad, 12) ),
	INTAKE_DOUBLE( new JoystickButton(launchpad, 8) ),
	BUTTON_2( new JoystickButton(launchpad, 13) ),
	BUTTON_3( new JoystickButton(launchpad, 1) ),
	BUTTON_4( new JoystickButton(launchpad, 9) ),
	BUTTON_5( new JoystickButton(launchpad, 11) ),
	BUTTON_6( new JoystickButton(launchpad, 14) ),
	BUTTON_7( new JoystickButton(launchpad, 10) ),
	BUTTON_8( new JoystickButton(launchpad, 16) ),
	BUTTON_9( new JoystickButton(launchpad, 15) ),
	LARGE_GREEN_1( new JoystickButton(launchpad, 2) ),
	LARGE_GREEN_2( new JoystickButton(launchpad, 3) ) {
}

