#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//function prototype


//a pointer willl be returned from this function
int *getRandomNumbers(int length)
{
	//creates an array pointer
	int *array = NULL;
	if (length <= 0)
	{
		return NULL;
	}
	//dynamically alllocate the array
	array = new int [length];
	srand(time(0));
	for (int count = 0; count < length; count ++)
	{
		array[count] = rand();
		
	}
	return array;
	
}


int main()
{
	//creates a pointer for numbers
	int *numbers = NULL;
	int length =0;
	//get an array with five random numbers
	//point the pointer numbers at the array
	cout << "Enter the length of the array you want\n";
	cin >> length;
	numbers = getRandomNumbers(length);
	
	for (int count = 0; count < length; count ++)
	{
		cout << numbers[count] << endl;
	}
	//free memory
	delete [] numbers;
	numbers = NULL;
	return 0;
}
