#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>

using namespace std;

union pay
{
	int hours;
	double sales;
};


int main()
{
	double grossPay;
	pay choice;
	char decision;
	cout <<"Enter H for hourly wages or C for commission: ";
	cin >> decision;
	cout << fixed << setprecision(2);
	if (toupper(decision) == 'H')
	{
		int payRate;
	
		cout << "what is the hourly pay rate? ";
		cin >> payRate;
		cout << "How many hours were worked? ";
		cin >> choice.hours;
		grossPay = (choice.hours * payRate);
		cout << "Gross Pay: $" << grossPay;
	}
	else if (toupper(decision) == 'C')
	{
		cout << "What are the total sales for this employee? ";
		cin >> choice.sales;
		//ten percent commission
		grossPay = (choice.sales *.10);
		cout << "Gross Pay: $" << grossPay;
		
	}
	else
	{
		cout<<"ERROR, YOU DIDN'T ENTER ANY OF THE CHOICES\n";
	}
	
	
	return 0;
}
