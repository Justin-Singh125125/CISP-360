#include <iostream>

using namespace std;

void showNum(int numbers[], int numbersSize);
void doubleArray(int doubledNumbers[], int DoubledNumbersSize);

int main()
{
	
	const int SIZE = 10;
	int array[SIZE];
	
	int counter;

	for (counter=0; counter < SIZE ; counter ++)
	{
		array[counter]= counter;
		
		
		
		
	}

	showNum(array, SIZE);
	doubleArray(array,SIZE);
		
	return 0;
}
	
	void showNum(int numbers[], int numbersSize)
	{
		int index;
		for(index=0;index <numbersSize; index++ )
		{
			cout << "Original:"<< numbers[index]<< " , " << endl; 
		}
	}
	
	
	
	void doubleArray(int doubledNumbers[], int DoubledNumbersSize)
	{
		
		int index2;
		for(index2=0;index2 <DoubledNumbersSize; index2++ )
		{
			doubledNumbers[index2] *= 2;
			cout << "Doubled:"<< doubledNumbers[index2]<< " , " << endl; 
		}
	}
	
	

