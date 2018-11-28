#include <iostream>
#include <iomanip>

using namespace std;
void getSales(double *arr, int size)
{
	int count;
	for (count = 0; count < size; count ++)
	{
		cout << "Enter the sales figure for quarter " << (count +1) << ": ";
		cin >> arr[count];
	}
}
double totalSales(double *arr, int size)
{
	double sum = 0.0;
	
	for (int count = 0; count < size; count++)
	{
		sum += *arr;
		arr++;
	}
	return sum;
}

int main()
{
	const int QTRS = 4;
	double sales[QTRS];
	//call the get sales function
	
	//sends over the array and the size of the array
	getSales(sales, QTRS);
	//fixed notation
	cout << fixed<< setprecision(2); 
	//Display the total sales for the year
	
	cout << "The total sales for the year are $";
	cout << totalSales(sales, QTRS) << endl;
	
	
	
	
	
	return 0;
}
