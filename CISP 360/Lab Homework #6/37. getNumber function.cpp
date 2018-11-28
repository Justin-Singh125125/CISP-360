#include <iostream>
using namespace std;

void getNumber(int & numbers);

int main()
{
	int number;
	getNumber(number);
	cout << "The number entered is "<< number;
	
	
	
	
	
	
	
	
	
	
	return 0;
}
void getNumber(int & numbers)
{
	cout << "Enter a number[1-100]\n";
	cin >> numbers;
	while (numbers <1 || numbers >100)
	{
		cout << "ERROR: ENTER THE CORRECT RANGE OF NUMBERS\n";
		cin >> numbers;
	}
}
