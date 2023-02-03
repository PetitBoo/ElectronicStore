#include "Portative.h"
#include <iostream>

using namespace std;

Portative::Portative(int batpow) : _BatteryPower(batpow)
{
}

void Portative::Show()
{
	cout << "Battery Power: " << _BatteryPower << "W" << endl; // showing Battery Power
}