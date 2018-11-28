#include <iostream>

using namespace std;


void getNumbers(double arrayNumbers[], int arraySize)
{
	int counter;
	for (counter =0; counter < arraySize; counter++)
	{
		cout << "Enter number " << (counter +1) << endl;
		cin >> arrayNumbers[counter];
	}
}

void bubbleSort(double sortedNumbers[], int sizeOfArray)
{
	int currentEl;
	int temp;

	bool swap;
	swap = false;
	//we have minus one because we are going to use another counter
	
	//make sure you have your loop control variables nigga
	swap = true;
	while (swap)
	{
		swap = false;
		for (currentEl = 0; currentEl < sizeOfArray-1 ;	currentEl++ )
		{
			
		
			if(sortedNumbers[currentEl] > sortedNumbers[currentEl +1])
			{
			temp = sortedNumbers[currentEl];
			sortedNumbers[currentEl] =sortedNumbers[currentEl +1];
			sortedNumbers[currentEl +1] = temp;
			swap = true;
			}
		}
		
	}
}
int getSearchNumber()
{
	int number;
	cout << "What is the number you want to search for\n";
	cin >> number;
	return number;
}
int binarySearch(double searchArray[], int searchArraySize, double numberToBeS)
{
	int first;
	int middle;
	int last;
	int position;
	int index;
	first = 0;
	last = (searchArraySize-1);
	position = -1;
	for (index=0; index < searchArraySize ; index ++)
	{
		middle = (first + last)/2;
		if (numberToBeS ==searchArray[middle] )
		{
			position = middle;
		}
		else if (numberToBeS < searchArray[middle])
		{
			last -=1;
		}
		else 
		{
			first +=1;
		}
	}
	
	
	
	return position;
	
}
int main()
{
	
	const int SIZE = 5;
	//double to hold any number
	double numbers[SIZE];
	getNumbers(numbers, SIZE);
	//blank line
	cout << endl;
	
	//lets put the numbers in ascending order from least to greatest
	bubbleSort (numbers, SIZE);
	int counter;
	for (counter = 0; counter < SIZE; counter ++)
	{
		cout << numbers[counter] << endl;
	}
	
	cout << endl;
	
	//ask the user for a number to search for using binary search
	double searchNumber;
	int subcript;
	
	
	searchNumber = getSearchNumber();
	subcript= binarySearch(numbers, SIZE, searchNumber);
	

	cout << endl;
	if (subcript == -1 )
	{
		cout << "The number you entered was not found\n";
	}
	else
	{
		cout << "The number you entered and was found at location " << subcript << " of the array\n";
		cout << "The number found was " << numbers[subcript] << endl;
	}
	
	
	return 0;
}
