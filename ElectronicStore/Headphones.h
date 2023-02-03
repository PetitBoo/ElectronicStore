#pragma once
#include "Portative.h"

class Headphones final : public Portative
{
public:
	Headphones(int batpow, int sens);
	void Show() override;
private:
	int Sensitive;
};