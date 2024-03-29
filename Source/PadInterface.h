#pragma once

#include "Types.h"
#include "ControllerInfo.h"

class CPadInterface
{
public:
	virtual ~CPadInterface() = default;
	virtual void SetButtonState(unsigned int, PS2::CControllerInfo::BUTTON, bool, uint8*) = 0;
	virtual void SetAxisState(unsigned int, PS2::CControllerInfo::BUTTON, uint8, uint8*) = 0;
	virtual void GetVibration(unsigned int, uint8& largeMotor, uint8& smallMotor) = 0;
	static uint32 GetButtonMask(PS2::CControllerInfo::BUTTON);
};
