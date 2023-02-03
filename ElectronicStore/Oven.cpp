#include "Oven.h"
#include <iostream>

using namespace std;

Oven::Oven(int weight, int maxtemp) : Appliances(weight), MaxTemp(maxtemp)
{
}

void Oven::Show()
{
	cout << "Weight: " << Weight << "kg" << endl; // showing Weight
	cout << "Max temperature: " << MaxTemp << endl; // showing Max temperature
}