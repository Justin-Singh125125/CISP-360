#include <iostream>

using namespace std;


//were passing over the numbers pointer and the size of the array
void displayValues(const int *numbers, int size)
{
	for (int counter; counter < size; counter++)
	{
		cout << *(numbers + counter) << endl;
	}
}
int main()
{
	
	//Array sizes
	const int SIZE = 6;
	
	//define an array of const ints
	const int array1[SIZE] = {1,2,3,4,5,6};
	
	//define an array of noconst ints
	int array2[SIZE] = {2,4,6,8,10,12};
	
	//Display the contents of the const array
	cout << "Displaying values of the const array\n";
	
	displayValues(array1, SIZE);
	
	
	//Display the contents of the const array
	cout << "Displaying values of the const array\n";
	displayValues(array2, SIZE);
	
	
}
