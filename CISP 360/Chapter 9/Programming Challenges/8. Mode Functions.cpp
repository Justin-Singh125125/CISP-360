#include <iostream>
using namespace std;
int main()
{
	
	
	const int SIZE = 10;
	int array[SIZE]= {7,3,4,2,4,4,4,3,2};
	
	
	int counter,index, currentTotal, previousTotal, currentNumber,previousNumber, greatest = 0;
	 
	for (counter = 0; counter < SIZE; counter ++)
	{
		currentNumber = array[counter];
		
		//we set this back to 0, so we can keep track of how many numbers there are of current numbers
			currentTotal = 0;
		for (index = 0; index < (SIZE) ; index++)
		{
			//compares the entire array to the value of current number
			if (array[index] == currentNumber)
			{
				currentTotal++;
				
			}
		}
		
		if (previousTotal < currentTotal)
		{
			greatest = currentNumber;
		}
		//we have previous and the current total so we can keep track and compare the values
		previousTotal = currentTotal;
		//same for the numbers, we have to compare them
		previousNumber=	currentNumber ;
		
		
	}
	cout <<"The mode for the array is: " << greatest << endl;
		
	return 0;
}
