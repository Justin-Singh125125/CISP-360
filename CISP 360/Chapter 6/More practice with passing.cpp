#include <iostream>
using namespace std;


//function prototype
//we are defining the function and then we are saying the arguemnt we are passing to it is an integer
void displayValue(int,int);

int main()
{
	
	cout << "I am passing a number to the display value funtion.\n";
	int number = 0;
	cin >> number;
	cout << "Enter a second number to pass\n";
	int number2 = 0;
	cin >> number2;
	//pass the number to function
	displayValue(number, number2);
	cout << "Now im back in main and the numbers has been passed.\n";
	return 0;	
	
	
}

void displayValue(int num, int num2)
{
	cout << "The number passed is " << num << " and " << num2 << endl;
}
