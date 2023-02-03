#pragma once
#include "IElectronics.h"

class Appliances : virtual public IElectronics
{
public:
	Appliances(int weight);
	void Show() override;
protected:
	int Weight;
};