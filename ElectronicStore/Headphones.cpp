#include "Headphones.h"
#include <iostream>

using namespace std;

Headphones::Headphones(int batpow, int sens) : Portative(batpow), Sensitive(sens)
{
}

void Headphones::Show()
{
	cout << "Battery Power: " << _BatteryPower << "W" << endl; // showing Battery Power
	cout << "Sensitivity: " << Sensitive << "dB" << endl; // showing Sensitivity
}