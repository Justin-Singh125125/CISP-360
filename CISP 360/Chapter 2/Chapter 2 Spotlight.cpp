//Chapter 2 Calculating a Percentage Discount
/*

*/




#include <iostream>

using namespace std;

 int main()
{
	double regularPrice = 59.95;
	const double ITEMS_PERCENTAGE = .20 ;//percentage of discount
	double finalPrice = 0;
	finalPrice = (regularPrice * ITEMS_PERCENTAGE);
	finalPrice = (regularPrice - finalPrice);
	cout << "The regular price was "<< regularPrice << endl;
	cout << "The discount was "<< ITEMS_PERCENTAGE<< endl;
	cout <<"The sale price was $"<<finalPrice;
	return 0;
}
