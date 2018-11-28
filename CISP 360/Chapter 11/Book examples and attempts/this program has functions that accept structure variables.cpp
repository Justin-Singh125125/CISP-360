#include <iostream>
#include <string>

using namespace std;

//create the structures
struct InventoryItem
{
	int partNum;
	string description;
	//units on hand
	int onHand;
	double price;
};

//create some function prototypes
//getItem is passed using reference

void getItem(InventoryItem & p)
{
	cout << "Enter the part number: ";
	cin>> p.partNum;
	cout << "Enter the part description: ";
	//we have to use cin.ingore because we previously used something other than getline
	cin.ignore();
	getline(cin, p.description);
	cout << "Enter the quantity on hand: ";
	cin >> p.onHand;
	cout << "Enter the unit price: ";
	cin >> p.price;	
}
void showItem(InventoryItem p)
{
	cout << "Part Number: " << p.price<< endl;
	cout << "Description: " << p.description<< endl;
	cout << "Units on Hand: " << p.onHand<< endl;
	cout << "Price: $"<< p.price<< endl;
}

int main()
{
	//get access to the structure
	InventoryItem stuff;
	
	//pass the variable to the getItem function
	getItem(stuff);
	showItem(stuff);
}
