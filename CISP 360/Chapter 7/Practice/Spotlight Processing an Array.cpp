#include <iostream>

using namespace std;

double findTheLowest(double scores[],int  arraySize);
void showResults(double realAverage);
int main()
{
	
	const int SIZE = 4;
	double testScores[SIZE];
	double average;
	double amountOfTests;
	
	amountOfTests = 4;
	
	int counter;
	double runningTotal;
	double lowestScore;
	
	for(counter=0; counter < SIZE ; counter ++)
	{
		cout << "Enter score #" << (counter +1) <<".\n";
		cin >> testScores[counter];
		//should add the numbers to running total 
		runningTotal += testScores[counter];
	}
	//returns the lowest score
	 lowestScore = findTheLowest(testScores, SIZE);
	//subtracts the lowest score from total
	runningTotal -= lowestScore;
	amountOfTests -= 1.0;
	
	average = (runningTotal / amountOfTests);
	
	showResults(average);
	
	return 0;
}

	double findTheLowest(double scores[],int  arraySize)
	{
		double lowest;
		lowest = scores[0];
		int index;
		
		for (index = 0; index < arraySize; index ++)
		{
			if (scores[index]< lowest)
			{
				lowest = scores[index];
			}
		}
		return lowest;
	}
	
	void showResults(double realAverage)
	{
		cout << "The average with the lowest score dropped is " << realAverage<< ".";
	}
