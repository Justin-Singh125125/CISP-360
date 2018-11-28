#include <iostream>
#include <iomanip>

using namespace std;

struct info
{
	double hours = 0.0;
	double payRate = 0.0;
	double grossPay = 0.0;

};

int main()
{
	//create an array that holds this shit together
	//we have 3 variables so we create a size of 3 which should give us a total
	//of nine elements to work with
	const int size = 3;
	info people[size];
	
	//variable to step through elements
	int index = 0;
	cout << "Enter the hours worked by 3 employees and their hourly rates.\n";
	for (index = 0; index <size ; index ++)
	{
		cout << "Hours worked by employee #" << (index +1)<< ": ";
		cin >> people[index].hours;
		cout << "Hourly pay rate for employee #" <<(index +1)<< ": ";
		cin >> people[index].payRate;
		cout << endl;
		people[index].grossPay = (people[index].hours * people[index].payRate);
	}
	
	cout << fixed << setprecision(2);
	for (index = 0; index <size ; index ++)
	{
		cout << "Employee #"<< (index + 1)<< ": $" << people[index].grossPay<<endl;
	}

	
	
	
	return 0;
}
