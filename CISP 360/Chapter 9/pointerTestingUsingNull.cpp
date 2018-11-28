#include <iostream>
using namespace std;
int main()
{
	
	int *pointer = NULL;
	
	
	int x = 0;
	
	
	//set x to 25;
	x = 25;
	
	cout << "Before the change x is " << x << endl;
	
	//lets manipulate the variable
	pointer = &x;
	*pointer += 25;
	//x should be changed;
	cout << x << endl;
	cout << "The location of x is at ";
	cout << pointer << " in the hardrive\n";
	return 0;
}
