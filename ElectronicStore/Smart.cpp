#include "Smart.h"
#include <iostream>

using namespace std;

Smart::Smart(int batpow, int weight, int micro) : Portative(batpow), Appliances(weight), MicroCount(micro)
{
}

void Smart::Show()
{
	cout << "Battery Power: " << _BatteryPower << "W" << endl; // showing Battery Power
	cout << "Weight: " << Weight << "kg" << endl; // showing Weight
	cout << "Microphones Count: " << MicroCount << endl; // showing Microphones Count
}