#pragma once
#include "Appliances.h"

class Oven final : public Appliances
{
public:
	Oven(int weight, int maxtemp);
	void Show() override;
private:
	int MaxTemp;
};