#pragma once
#include "Appliances.h"

class Fridge final : public Appliances
{
public:
	Fridge(int weight, int volume);
	void Show() override;
private:
	int Volume;
};