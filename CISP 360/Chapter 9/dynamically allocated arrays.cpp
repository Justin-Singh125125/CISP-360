#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	double *sales = NULL, total, average = 0.0;
	int numDays, count = 0;
	cout << "How many days of sales figures do you wish to process? ";
	cin >> numDays;
	
	//create an allocated array
	sales = new double [numDays];
	cout << "Enter the sales figures below.\n";
	for (count = 0; count < numDays; count ++)
	{
		cout << "Day "<< (count + 1) << ": ";
		cin >> sales[count];
	}
	for (count = 0; count < numDays; count ++)
	{
		total += sales[count];
	}
	
	average = total/numDays;
	cout << fixed << showpoint << setprecision(2);
	cout << "\n\nTotal Sales: $" << total<< endl;
	cout << "Average Sales: $" << average << endl;
	
	
	//free dynamically allocated memory
	
	delete [] sales;
	sales = NULL;
	
	
	
	return 0;
}
