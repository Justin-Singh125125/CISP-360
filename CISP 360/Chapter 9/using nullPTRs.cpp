//This program stores the address of a variable in a pointer

#include <iostream>
using namespace std;

int main()
{
	int x = 25;
	int *ptr = NULL;
	
	//you do not need to put the asterix again, that was just the way to declare it
	//you have to assign it to the &x because the & gets the address
	ptr = &x;
	cout << "The value of x is " << x << endl;
	cout << "The location of x, stored in memory is " << ptr << endl;
	
	
	
	//to change the value of x to 100
	*ptr= 100;
	cout << "The value of x is " << x << endl;
	cout << "The location of x, stored in memory is " << ptr << endl;
	
	return 0;
}
