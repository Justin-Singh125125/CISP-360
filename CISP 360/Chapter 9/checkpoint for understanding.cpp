#include <iostream>
using namespace std;

void makeNegative(int *val)
{
	if(*val > 0)
	{
		*val = -(*val);
	}
	else 
	{
		"FUCK OFF";
	}
}

int main()
{
	
	//test to call function
	//create a pointer
	int * pointer = NULL;
	int x = 0;
	
	cout << "Enter a number\n";
	cin >> x;
	//point the pointer at x
	pointer = &x;
	
	//send over the pointer to the function
	makeNegative (pointer);
	
	cout << x << endl;


	
	return 0;
}
