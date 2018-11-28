#include <iostream>

using namespace std;
enum Day {MONDAY, TUESDAY, WEDNESDAY, THURSDAY,FRIDAY};
int main()
{
	
	
	const int numOfDays = 5;
	
	double sales [numOfDays];
	
	int index = 0;
	int total = 0;
	
	for (index = MONDAY; index <= FRIDAY; index++)
	{
		cout << "Enter the sales for day " << index <<": ";
		cin >> sales[index];
		total += sales[index];
	}
	cout << "The total sales are $" << total;
	
	
	
	
	
	
	
	
	
	return 0;
}
