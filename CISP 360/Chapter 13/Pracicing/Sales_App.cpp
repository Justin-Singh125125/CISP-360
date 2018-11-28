#include <iostream>
#include "Sales.h"
#include <iomanip>
using namespace std;

int main()
{
	const double TAX_RATE = 0.06;
	double cost;
	cout << "Enter the cost of the item: ";
	cin >> cost;
	Sale itemSale(cost, TAX_RATE);
	cout << fixed << setprecision(2);
	
	cout << "The amount of sales tax is $";
	cout << itemSale.getTax() << endl;
	cout << "The total of the sale is $";
	cout << itemSale.getTotal() << endl;
	return 0;
}
