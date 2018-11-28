#include <iostream>
//to adjust output as needed
#include <iomanip>

using namespace std;
int main()
{
	
	//constant double variables 
	const double MEAL_CHARGE = 88.67;
	//tax 7.75 divided by 100
	const double TAX = 0.0775;
	//tip of 20 percent divided by 100
	const double TIP = 0.2;
	
	//calculating variables
	double taxAmount;
	double partialTotal;
	double tipAmount;
	double totalBill;
	
	
	//calculate the tax amount
	taxAmount = (MEAL_CHARGE*TAX);

	//partial total to calculate the tip
	partialTotal = (taxAmount + MEAL_CHARGE);

	//calculate the tip amount
	tipAmount = (partialTotal * TIP);

	//calculate the total
	totalBill = (partialTotal +tipAmount);
	
	
	//round off the deciamls to 2 decimal places
	cout << fixed << setprecision(2);
	
	//the meal cost
	cout << "Meal Cost:  $" << MEAL_CHARGE << endl;

	//tax amount
	cout << "Tax Amount: $" << taxAmount << endl;

	//tip amount
	cout << "Tip Amount: $" << setw(2) << tipAmount << endl;

	//total bill
	cout << "Total Bill: $" << setw(2) << totalBill;
	
	return 0;
}
