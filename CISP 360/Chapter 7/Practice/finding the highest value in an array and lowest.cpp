#include <iostream>
//to find the lowest simply change the sign

using namespace std;

int main()
{
	const int SIZE = 100;
	int array[SIZE];
	
	int counter;
	int highest;
	
	for (counter=0; counter < SIZE; counter++)
	{
		array[counter] = counter;
		
	}
	
	highest = array[0];
	
	for (counter = 0; counter < SIZE; counter ++)
	{
		if (array[counter] > highest)
		{
			highest = array[counter];
		
		}
	
	}
	
	cout << "The highest value found in the array is " << highest;
	
	
	return 0;
}
