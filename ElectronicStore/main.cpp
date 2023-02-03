#include "Fridge.h"
#include "Smart.h"
#include "Headphones.h"
#include "Oven.h"
#include "Mobile.h"
#include <iostream>

using namespace std;

int main()
{
	IElectronics* store[5];

	store[0] = new Fridge(60, 75);
	store[1] = new Headphones(5000, 64);
	store[2] = new Oven(50, 300);
	store[3] = new Mobile(10000, 256);
	store[4] = new Smart(4000, 1, 4);

	bool isOpen = true;
	
	while (isOpen)
	{
		cout << "Welcome to our new store. You can watch our products:\n1 - Fridge;\n2 - Headphones;\n3 - Oven; \n4 - Smartphone;\n5 - Smart Speaker.\nOr you can put 0 for exit:"; //It's time to choose one of products
		int choise = 0;
		cin >> choise;
		switch(choise)
		{
		case 1:
			store[0]->Show(); //showing Fridge Characteristics
			break;
		case 2:
			store[1]->Show(); //showing Headphones Characteristics
			break;
		case 3:
			store[2]->Show(); //showing Oven Characteristics
			break;
		case 4:
			store[3]->Show(); //showing Smartphone Characteristics
			break;
		case 5:
			store[4]->Show(); //showing Smart Speaker Characteristics
			break;
		case 0:
			isOpen = false;
			break;
		default:
			cout << "You can use only 0-5!\n";
			break;
		}
	}
	delete store[0];
	delete store[1];
	delete store[2];
	delete store[3];
	delete store[4];

	return 0;
}