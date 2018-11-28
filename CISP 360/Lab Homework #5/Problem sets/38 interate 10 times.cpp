#include <iostream>
using namespace std;
int main()
{
	
	
	int number;
	
	//variable to stop the for loop
	int counter;
	//running total of the numbers entered
	int runningTotal;
	
	//limit for the for loop
	const int MAX = 10;
	
	for (counter =1; counter <=MAX ; counter ++)
	{
		cout << "Enter a number\n";
		cin >> number;
		
		runningTotal += number;
		
	}
	
	
	cout << "The total of the numbers entered is " << runningTotal;
	
	
	
	
	
	
	return 0;
}
