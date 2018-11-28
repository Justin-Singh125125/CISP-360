#include <iostream>
using namespace std;

double half(double number);
int main()
{
	
	
	
	double number;
	double halfNumber;
	
	
	cout << "Enter a number\n";
	cin >> number;
	
	
	halfNumber =half(number);
	
	
	cout << "Half of the number you entered is " << halfNumber;
	
	
	
	
	
	
	return 0;
}

double half(double number)
{
	double half;
	
	half = (number *.5);
	return half;
}
