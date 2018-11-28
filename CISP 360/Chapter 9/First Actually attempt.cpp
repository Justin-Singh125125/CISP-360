#include <iostream>

using namespace std;

void arrSelectSort(int *arr[], int size)
{

	int startScan, minIndex, minValue;
	for (startScan = 0; startScan < (size-1); startScan++)
	{
		minIndex = startScan;
		int *minValue = arr[startScan];
		for (int index = (startScan + 1); index < size; index++)
		{
			if(*arr[index] < *minValue)
			{
				minValue = arr[index];
				minIndex = index;
				
			}
		}
		arr[minIndex] = arr[startScan];
		arr[startScan] = minValue;
	}
	
}
//displays the original order
void showArray(int arr[], int size)
{
	int count= 0;
	cout <<"The donations,in thier original order are: ";
	cout << endl;
	for (count; count < size; count++)
	{
		
		cout <<	arr[count] << " ";
	
	}
	cout << endl;
	
}
//accended order
void showArrPtr(int *arr[], int size)
{
	
	int count= 0;
	cout <<"The donations, sorted in ascending order are: ";
	cout << endl;
	for (count; count < size; count++)
	{
		
		cout <<		*arr[count] << " ";
	
	}
	cout << endl;
}
//just calls the functions
int main()
{
	//lets first create an original array and a constant for the total number of donations
	const int NUM_DONATIONS = 15;
	int donations[NUM_DONATIONS] = {5,100,5,25,10,5,25,5,5,100,10,15,10,5,10};
	
	
	//creates a pointer array that will point to every element in the original array
	int *arrPtr[NUM_DONATIONS] = {NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,};
	
	//lets have every array point to to the elements
	int count = 0;
	for (count; count < NUM_DONATIONS; count++)
	{
		//each element in the pointer is assigned to the original element
		arrPtr[count] = &donations[count];
	}
	
	//send over the array full of addresses to the selection sort so they can be sorted
	arrSelectSort(arrPtr, NUM_DONATIONS);
	showArrPtr(arrPtr,NUM_DONATIONS );
	showArray(donations, NUM_DONATIONS);
	
	
	
	
	return 0;
}
