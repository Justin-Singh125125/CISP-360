#include <iostream>
using namespace std;

void display(int arg1, double arg2, char arg3);

int main()
{
	
	
	
	int age;
	double income;
	char initial;
	
	cout << " Enter age\n";
	cin >> age;
	cout << "income\n";
	cin >> income;
	cout << "Initial\n";
	cin >> initial;
	
	display(age, income, initial);
	
	
	
	
	
	
	
	return 0;
}

void display(int arg1, double arg2, char arg3)
{
	cout << "Your age is " << arg1 << endl;
	cout << "Your income is " << arg2 << endl;
	cout << "Your initial is " << arg3 <<endl;
}
