#include <iostream>
using namespace std;

//functions
void getNumber(int *input)
{
	cout << "Enter a number\n";
	cin >> *input;
}
void doubleValue(int *val)
{
	*val *=2;
}
int main()
{
	
	int number;
	//call get number and pass the address of number
	getNumber(&number);
	
	doubleValue(&number);
	
	
	cout << "The number you entered is doubled " << number;
	
	
	
	
	return 0;
}
