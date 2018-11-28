#include <iostream>
using namespace std;
//function prototype
int calculateSum(int, int);
int main()
{
	int total = 0;
	int num1 = 0;
	int num2 = 0;
	cout << "Enter number 1\n";
	cin >> num1;
	cout << "Enter number 2\n";
	cin >> num2;
	total =calculateSum(num1, num2);
	cout << "The sum of the values entered are\n";
	cout << total;
	return 0;
	
	
}

int calculateSum(int number1, int number2)
{
	int sum = 0;
	sum = (number1 +number2);
	return sum;
}
