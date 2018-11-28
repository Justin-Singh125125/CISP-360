#include <iostream>

using namespace std;

int *getAddress(int length)
{
	//allocated array
	int *array = new int[length];
	return array;
}

int main()
{
	int size = 0;
	cout << "Enter the size of the array\n";
	cin >> size;
	
	//create a pointer
	
	int *pointer = NULL;
	pointer = getAddress(size);
	cout << "The address of the array is " << pointer << endl;
	
	delete [] pointer;
	
	pointer = NULL;
	
}
