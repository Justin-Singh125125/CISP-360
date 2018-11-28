#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

//this function sorts the array in descending order
void descendingOrder(int * arrayPointer, int size);
//this function calculates the average of the array
double calculateAverage(int *pointerArray, int size);
//this function calculates the median 
double calculateMedian ( int *pointerArray, int size);
//this function calculates size and outliers
void calculateSizeAndOutliers( ifstream & readPipe, int *outliers, int *size);
//this will fill the array with non negative values
void fillArray (ifstream &readPipe, int *pointerArray);	
//displays the whole program
void display(int outliers, int * pointerArray,int size , double average, double median);
int main()
{	
	int numbers = 0;
	int size = 0;
	int outliers = 0;
	int count = 0;
	double median = 0.0;
	int index = 0;
	
	//for the average
	double average = 0.0;
	
	//create a readPipe
	ifstream readPipe;
	//connect the pipe to the file
	readPipe.open("scores.txt");
	
	//calculates the size and the outliers	
	calculateSizeAndOutliers(readPipe, &outliers, &size);
		
	//closing the file and then reopening so the numbers can be read again
	readPipe.close();
	readPipe.open("scores.txt");
	
	//we need to subtract the number of outliers from the size
	size -= outliers;
		
	int *pointerArray = NULL;
	//dynamically allocate a pointer array
	pointerArray = new int[size];
	
	//fill the pointerArray up with non negative values using pointer notation
	fillArray (readPipe, pointerArray);	
	
	readPipe.close();
		
	//sorts the pointer array in descending order
	descendingOrder(pointerArray, size);
	//calculates the average of the sorted array
	average = calculateAverage(pointerArray, size);
	//calculate the median
	median = calculateMedian(pointerArray, size);
	
	display(outliers, pointerArray, size , average, median);
		
		
		//delete the allocated memory
		delete [] pointerArray;
		pointerArray = NULL;
		return 0;
}
void descendingOrder(int * arrayPointer, int size)
{
	int index = 0;
	
	int startScan, minIndex, minValue = 0;
	for (startScan = 0; startScan < (size -1); startScan++)
	{
		minIndex = startScan;
		minValue = *(arrayPointer + startScan);
		for ( int index = (startScan +1); index < size; index ++)
		{
			//flip the sign so it sorts in decending order
			if (*(arrayPointer + index ) > minValue)
			{
				minValue = *(arrayPointer + index);
				minIndex = index;
			}
		}
		*(arrayPointer + minIndex) = *(arrayPointer + startScan);
		*(arrayPointer + startScan) = minValue;
	}
	

}	
double  calculateAverage(int *pointerArray, int size)
{
	int index = 0;
	double average, total = 0.0;
	
	for (index = 0; index < size ; index ++)
	{
		total += *(pointerArray + index);
	}
	average =(total / size);
	return average;
	
}	
double calculateMedian ( int *pointerArray, int size)

{
	
	double median = 0.0;
	int total = 0.0;
	double temp = 0.0;
	int index = 0;
	//divide the size by 2 to see if their is a remainder
		
		if (size %2 == 0)
	{
		size /=2;
		median =  *(pointerArray + (size-1));
		median += *( pointerArray + size);
		median /= 2.0;
	}
	else
	{
		size /=2;
		median = *(pointerArray + size);
	}
	return median;

}

void calculateSizeAndOutliers(ifstream &readPipe, int *outliers, int * size)
{
	
	//varaible to read from the file
	int numbers = 0;
	//lets get the number of outliers found in the file
	while(readPipe >> numbers)
		{
			
			if (numbers < 0)
			{
				//if a number is negative, we are going to add 1 to the outlier
				*outliers+=1;
			}
			//everytime we read from the file, we are going to add 1 for the size 
			//we will use this to dynamically allocate an array
			*size+=1;

		}
}
void fillArray (ifstream &readPipe,int *pointerArray)
{
	
		int numbers,index = 0;

		//this while loop will fill the pointer array with non negative values 
		while (readPipe >> numbers)
		{
			if (numbers >= 0)
			{
				*(pointerArray + index) = numbers;
				
				//allows values to be stored in the different pointer array elements
				index ++;
			}
			
		}
}
void display(int outliers, int * pointerArray,int size , double average, double median)
{
		int index = 0;
		
		cout << fixed << setprecision(2);
		cout << "There were " << outliers << " outlier values.\n";
		cout << "Sorted scores: " ;
		for (index = 0; index < size ; index ++)
		
		{	
			cout << *(pointerArray + index) ;
			//for the commas
			if (index<(size-1))
			{
				cout<< ", ";
			}
			
		}
		cout << endl;
		cout << "Average score: " << average << endl;
		cout << "Median Score: " <<  median << endl;
		
		
}
