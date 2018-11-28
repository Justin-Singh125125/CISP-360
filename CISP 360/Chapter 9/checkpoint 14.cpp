#include <iostream>

using namespace std;

int main()
{
	int *pointer = NULL;
	
	pointer = new int[500];
	
	
	int count = 0;
	
	for (count ; count <500 ; count ++)
	{
		pointer[count ] = count;
		cout << pointer[count] << endl;
	}
	
	
	delete [] pointer;
	
	
	pointer = 0;
	
	
	return 0;
}
