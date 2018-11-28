#include <iostream>
using namespace std;
int main()
{

const int SIZE = 5;

double hours[SIZE];
double payRates[SIZE];

int counter;



cout << "Enter the hours worker by 5 employees and their hourly pay rates.\n";

for (counter= 0; counter < SIZE; counter ++)
{
	cout << "Hours worked by employee #" << (counter +1) << ":\n";
	cin >> hours[counter];
	cout << "Enter pay rate for employee #" << (counter +1) << ":\n";
	cin >> payRates[counter];
	//remember when you multiply using parallel arrays, you have to use the index, cant just use a variable, it will mess up the for loop
	payRates[counter] = (payRates[counter] * hours[counter]);
	
	
}

	cout << "Here is the gross pay for each employee\n";
	for (counter =0; counter < SIZE; counter ++)
	{
		
		cout << "Employee #"<< (counter +1) << ": " << "$" << payRates[counter] << endl;
	}
return 0;
}
