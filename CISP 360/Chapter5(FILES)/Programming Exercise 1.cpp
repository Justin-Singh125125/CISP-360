//this calculates the sum of numbers
#include <iostream>
using namespace std;

int main()
{
	const int MIN = 0;
	int sum = 0;
	int counter = 0;
	int value = 0;
	//input validation
	cout << "Enter a positive integer value\n";
	cin >> value;

		while (value < MIN)
		{
			cout << "ERROR: ENTER A POSITIVE NUMBER\n";
			cin>> value;
		}
		for (counter = MIN; counter <= value; counter ++ )
		{
			cout <<counter << endl;
			sum +=counter;
		}
		cout << "The sum of all the numbers is " << sum;
	
	
	
	
	
	return 0;
}
