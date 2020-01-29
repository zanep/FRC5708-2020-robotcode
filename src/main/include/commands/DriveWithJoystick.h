/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019-2020 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc2/command/Command.h>
#include <frc/Joystick.h>

#include "../Robot.h"

enum JoystickMode {SINGLE_JOY, XBOX};

class DriveWithJoystick : public frc2::Command {
public:
	JoystickMode joyMode = XBOX;

	DriveWithJoystick();
	void Execute() override;
	bool IsFinished() override;
	void End(); // Used to override, but we deleted it 'cause it caused an error. Might cause problems in the future. Sorry! 
};