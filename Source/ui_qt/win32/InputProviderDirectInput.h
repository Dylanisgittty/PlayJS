#pragma once

#include "input/InputProvider.h"
#include "directinput/Manager.h"

class CInputProviderDirectInput : public CInputProvider
{
public:
	CInputProviderDirectInput();
	virtual ~CInputProviderDirectInput() = default;

	uint32 GetId() const override;
	std::string GetTargetDescription(const BINDINGTARGET&) const override;
	std::vector<DEVICEINFO> GetDevices() const override;
	void SetVibration(DeviceIdType deviceId, uint8 largeMotor, uint8 smallMotor) override;

private:
	void HandleInputEvent(const GUID&, uint32, uint32);

	std::unique_ptr<Framework::DirectInput::CManager> m_diManager;
};
