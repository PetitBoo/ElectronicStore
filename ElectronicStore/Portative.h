#pragma once

#include "IElectronics.h"

class Portative : virtual public IElectronics
{
public:
	Portative(int batpow);
	void Show() override;
protected:
	int _BatteryPower;
};