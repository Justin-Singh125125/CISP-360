#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 5;
	int array[SIZE] = {1,2,3,4,5};
	
	int *pointer = NULL;
	//arrays do not have the & sign because they are already referenced
	pointer = array; 
	
	for (int counter = 0; counter < SIZE; counter++)
	{
		pointer = &array[counter];
		cout << *pointer << endl;
	}
	
	
}
