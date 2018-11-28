#include <iostream>
using namespace std;

int getValue(int);
double getValue(double);
int main()
{
	
	
	
	
	int intNumber;
	double doubleNumber;
	intNumber= getValue(0);
	doubleNumber = getValue(0.0);
	
	cout << intNumber << endl;
	cout << doubleNumber << endl;
	
	
	
	
	
	
	
	
	
	return 0;
}
int getValue(int)
{
	int inputValue;
	cout << "Enter an Integer\n";
	cin >> inputValue;
	return inputValue;
}
double getValue(double)
{
	double inputValue;
	cout << "Enter an decimal\n";
	cin >> inputValue;
	return inputValue;
}
