#include <iostream>

using namespace std;

int main()
{
	
	const int SIZE = 5;
	int *pointer[SIZE];
	int array[SIZE] = {1,2,3,4,5};
	int count;
	
	for (count = 0; count < SIZE; count ++)
	{
		pointer[count] = &array[count];
	}
	
	*pointer[2] = 7;
	for (count = 0; count < SIZE; count ++)
	{
		cout << *pointer[count] << endl;
	}
	
	return 0;
}
