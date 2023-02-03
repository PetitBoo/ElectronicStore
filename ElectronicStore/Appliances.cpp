#include "Appliances.h"
#include <iostream>

using namespace std;

Appliances::Appliances(int weight) : Weight(weight)
{
}

void Appliances::Show()
{
	cout << "Weight: " << Weight << "kg" << endl; // showing Weight
}