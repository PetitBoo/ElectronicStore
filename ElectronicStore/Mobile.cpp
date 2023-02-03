#include "Mobile.h"
#include <iostream>

using namespace std;

Mobile::Mobile(int batpow, int mmry) : Portative(batpow), Memory(mmry)
{
}

void Mobile::Show()
{
	cout << "Battery Power: " << _BatteryPower << "W" << endl; // showing Battery Power
	cout << "Memory: " << Memory << "Gb" << endl; // showing Memory
}