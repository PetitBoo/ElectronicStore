#include "Fridge.h"
#include <iostream>

using namespace std;

Fridge::Fridge(int weight, int volume) : Appliances(weight), Volume(volume)
{
}

void Fridge::Show()
{
	cout << "Weight: " << Weight << "kg" << endl; // showing Weight
	cout << "Volume: " << Volume << "l" << endl; // showing Volume
}