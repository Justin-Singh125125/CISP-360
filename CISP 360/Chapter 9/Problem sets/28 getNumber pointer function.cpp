#include <iostream>
using namespace std;
void getNumber (int *pointer)
{

	
	cout << "Enter a number\n";
	cin >> *pointer;
}
int main()
{
	int x = 0;
	
	
	getNumber(&x);
	cout << x ;
	
																												
	return 0;
}
