#include <ctime>
#include <iostream>
#include <cstdlib>
using namespace std;
void setRandomValues(int randomArray1[],int randomArray2[], int length)
{
	const int MIN = 1;
	
	int counter;
	
	for (counter = 0; counter < length; counter++)
	{
	
		randomArray1[counter] = (rand() % (length-MIN + 1) +MIN);
		randomArray2[counter] = randomArray1[counter];
	}
	
	
	
}
void bubbleSort(int randomArray1[], int length)
{
	//this portion of code is from tony gaddis page 445
	bool swap;
	int temp;
	
	do
	{
		swap = false;
		for (int count = 0; count < (length-1); count ++)
		{
			if (randomArray1[count]> randomArray1[count+1])
			{
				temp = randomArray1[count];
				randomArray1[count] = randomArray1[count + 1];
				randomArray1[count + 1] = temp;
				swap = true;
			}
		}
	
	}	while (swap);
	
}
void selectionSort(int randomArray2[], int length )
{
	//this portion of code is from the Tony Gaddis programming book, page 449
	int startScan, minIndex, minValue;
	for (startScan = 0; startScan < (length-1); startScan++)
	{
		minIndex = startScan;
		minValue = randomArray2[startScan];
		for (int index = (startScan + 1); index < length; index++)
		{
			if(randomArray2[index] < minValue)
			{
				minValue = randomArray2[index];
				minIndex = index;
				
			}
		}
		randomArray2[minIndex] = randomArray2[startScan];
		randomArray2[startScan] = minValue;
	}
	
}
void compareBubbleAndSelectionSort(int length)
{
	
	time_t secondsForBubble = time(0);
	time_t secondsForSelection = time(0);
	cout << "Comparing bubble and selection for a list of size " << length<< endl;
	int randomArray1[length];
	int randomArray2[length];
	setRandomValues(randomArray1, randomArray2,length);
	bubbleSort(randomArray1, length);
	double bubbleFinished = difftime(time(0), secondsForBubble);
	
	// IS THIS RIGHT?
	selectionSort(randomArray2, length);
	double selectionFinished = difftime(time(0), secondsForSelection);
	selectionFinished -= bubbleFinished;
	
	cout << "Bubble sort took " << bubbleFinished << " seconds(s)\n";
	cout << "Selection sort took " << selectionFinished << " second(s)\n";

}

int main()
{
	//testing the time function
	//to seed srand outside of the loop to prevent numbers from repeating
	unsigned seed = time(0);
	srand(seed);
	
	
	int counter= 0;
	//loop control variable
	counter = 25000;
	while (counter <= 100000)
	{
		
		compareBubbleAndSelectionSort(counter);
		
		counter*= 2;				
	}
	
	return 0;
}
