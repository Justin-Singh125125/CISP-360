#include "Inventory.h"
#include <iostream>
using namespace std;

int main()
{
	//create an Inventory object and call
	InventoryItem item1;
	item1.setDescription("Hammer");
	item1.setCost(6.95);
	item1.setUnits(12);
	
	//constructor
	InventoryItem item2("Pillers");
	//constructor 3
	InventoryItem item3("Wrench", 8.75, 20);
	
	return 0;
}
