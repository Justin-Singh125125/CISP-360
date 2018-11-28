#include <iostream>
using namespace std;
int doSomething(int *x, int *y);
int main()
{
	
	int x,y,value = 0;
	int *pointerX = NULL;
	int *pointerY = NULL;
	//point the pointers at x and y 
	pointerX = &x;
	pointerY = &y;
	
	value = doSomething(pointerX,pointerY);
	
	cout << "Value x: " << x << endl;
	cout << "Value y: " << y << endl;
	cout << "Value:  " << value << endl;
	return 0;
}
int doSomething(int *x, int *y)
{
   *x = 5;
   *y = 5;
	return (*x+*y);
}
