#pragma once

#include <WPILib.h>

class Intake : public Subsystem {
public:
	Intake();
	void InitDefaultCommand();
	void set_roller_normalized(float speed);
	void set_arm_normalized(float speed);
	void toggle_punch();

private:
	CANTalon *roller,
	         *arm_1,
			 *arm_2;

	DoubleSolenoid *punch;
};
