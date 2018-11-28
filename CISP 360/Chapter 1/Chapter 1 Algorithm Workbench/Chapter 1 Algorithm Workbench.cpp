#include <iostream>

using namespace std;

main()
{
	// declare variables as you go
	//get the maximum credit allowed
	cout << "Enter the customers maximum credit\n";
	double maximumCredit = 0.0;
	cin >> maximumCredit;
	
	//get the amount of credit that is used by the customer
	double usedCredit = 0.0;
	cout << " Enter the amount of credit used by the customer\n";
	cin >> usedCredit;
	// get the left over credit
	double leftOver = 0.0;
	leftOver = (maximumCredit - usedCredit);
	cout << "The max credit was " << maximumCredit << " you used " << usedCredit << "\n";
	cout << "The leftover credit is " << leftOver;
	cout << "";
	
}
