//this program will determine which number is bigger
#include <iostream>

using namespace std;

int main ()
{
	//varaibles to hold the numbers
	int number1 = 0;
	int number2 = 0;
	
	cout<< "What is number 1?\n";
	cin >> number1;
	
	cout << "What is number 2?\n";
	cin >> number2;
	
	//determine which number is bigger
	
	if (number1 > number2)
		{
	
		cout << number1 << " is the bigger number\n";
		cout << number2 << " is the smallest number";
		}
	else if (number2 > number1)
		{
		
		cout << number2 << " is the bigger number\n";
		cout << number1 << " is the smallest number";
		}
	else if ( number1 == number2)
		cout << "The numbers are the same size";

	
	
	
	
	return 0;
}
