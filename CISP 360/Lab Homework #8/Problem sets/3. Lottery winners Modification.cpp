#include <iostream>

using namespace std;

int main()
{
	const int SIZE = 10;
	
	
	//the loterry numbers are in assending order
	
	int lotteryNumbers[SIZE]= {13579, 26791, 26792, 33445,55555, 62483, 77777, 79422, 85647, 93121};
	
	int winningNumber, actualNumber = 0;
	cout << "Enter the winning lottery number\n";
	cin>> winningNumber;
	
	int first, last , middle = 0;
	bool found = false;
	
	
	int count = 0;
	last = SIZE -1;
	while (!found && first <= last)
	{
		middle = ((first + last ) /2 );
		
		if (lotteryNumbers[middle] == winningNumber)
		{
			found = true;
			actualNumber = lotteryNumbers[middle];
			
			
		}
		//if the value at the middle of the array is larger than the number the user entered, then go into the lower version of the array, so mess with last 
		//not first because you want smaller numbers, not larger
		else if (lotteryNumbers[middle] > winningNumber)
		{
			//if larger then we gotta search the upper half 
			last = (middle -1);
			//shrinks the number
		}
		else
		{
			//we change the first value instead of the last because we want to get the middle variable higher in value to get into the upper half of the array
			first = (middle +1);
		}
	}
	
	if (found)
	{
		cout << "The number was found!: " << actualNumber << endl;
	}
	else
	{
		cout << "RIP the number was not found" << endl;
	}
	return 0;
}
