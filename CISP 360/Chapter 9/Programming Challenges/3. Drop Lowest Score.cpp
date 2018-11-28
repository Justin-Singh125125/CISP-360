#include <iostream>
#include <iomanip>

using namespace std;

void ascendingOrder(double *arr, int size)
{
	int startScan, minIndex;
	double minValue;
	for (startScan = 0; startScan < (size-1); startScan++)
	{
		minIndex = startScan;
		  minValue = arr[startScan];
		for (int index = (startScan + 1); index < size; index++)
		{
			if(arr[index] < minValue)
			{
				minValue = arr[index];
				minIndex = index;
				
			}
		}
		arr[minIndex] = arr[startScan];
		arr[startScan] = minValue;
	}
}

double calculatesAverage(double scores, double numOf)
{
	double average = 0.0;
	numOf-=1;
	average = (scores/numOf);
	
	return average;
}

void displayBullshit(double *array, int size, double average)
{
	cout << fixed << setprecision(2);
	cout << "The test scores sorted are: ";
	int count = 0;
	for (count ; count < size; count ++)
	{
		cout << *(array + count)<< " ";
		
	}
	cout << endl;
	cout << "The average of all the scores, with the lowest score dropped is " << average << endl;
}
double dropLowestScore(double *array,int total)
{
	double lowest = 0.0;
	
	int count = 0;
	lowest = *array;
	for (count =1; count < total; count++)
	{
		array++;
		if(*array < lowest)
		{
			lowest = *array;
		}
	}
	
	
	
	return lowest;
}
int main()
{
	//create an allocated array that can hold a fuck ton of data
	double *array = NULL;
	array = new double[1000];
	
	int count = 0;
	
	double total= 0.0;
	cout << "Enter the total number of test scores\n";
	cin >> total;
	while  (total <0)
	{
		cout <<"Enter the total number of test scores[POSITIVE VALUES]\n";
		cin >> total;
	}
	
	for (count; count < total; count++)
	{
		cout << "Enter score #"<< (count+1) << endl;
		//stores values in the address of the allocated array
		cin >> *(array + count);
			while (*(array + count) <0)
		{
			cout <<"Enter[POSITIVE VALUES]\n";
			cin >> *(array + count);
		}
	}
	
	ascendingOrder(array, total);
	double totalScores = 0.0;
	for (count = 0; count < total; count ++)
	{
		totalScores += *(array+count);
	}
	double lowest = 0.0;
	
	lowest = dropLowestScore(array,total);
	
	//subtract the lowest score
	totalScores -= lowest; 
	
	

	
	
	
	double average = 0.0;
	average = calculatesAverage(totalScores, total);

	displayBullshit(array,total, average);
	cout << "The lowest Score is " << lowest << endl;
	
	delete[] array;
	array = NULL;
	
	return 0;
}
