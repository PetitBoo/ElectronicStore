#pragma once
#include "Appliances.h"
#include "Portative.h"

class Smart final : public Appliances, Portative
{
public:
	Smart(int batpow, int weight, int micro);
	void Show() override;
private:
	int MicroCount;
};