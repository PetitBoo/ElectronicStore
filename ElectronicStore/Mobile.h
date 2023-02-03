#pragma once
#include "Portative.h"

class Mobile final : public Portative
{
public:
	Mobile(int batpow, int mmry);
	void Show() override;
private:
	int Memory;
};