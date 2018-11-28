#include <iostream>
#include <string>
using namespace std;

int main()
{
	//controls the length of the array
	int testNumbers = 0;
	cout << "Enter the number of test scores you have\n";
	cin >> testNumbers;
	cout << endl;
	
	//dynamiically allocate a names array 
	string *namesPointer = NULL;
	namesPointer = new string[testNumbers];
	//dynamiically allocate a scores array
	int *scoresPointer = NULL;
	scoresPointer = new int[testNumbers];
	
	//make the pointers parrallel pointer and fill them with names and scores
	
	//counter variable to step through pointers
	int counter = 0;
	
	for (counter = 0; counter < testNumbers; counter++)
	{
		//this statement is important, without it, the for loop will mess up when asking for the names because of getline
		//we put it at the top because its the first thing the for loop reads
		cin.ignore();
		cout << "Enter the students name\n";
		getline(cin, *(namesPointer + counter));
		
		
		cout << "Enter " << *(namesPointer + counter) << "'s test score\n";
		cin >> *(scoresPointer + counter);
		cout << endl;
	}
	
	//time to sort the scores in ascending order along with the names
	int startScan, minIndex, minValue = 0;
	//temporary variable to hold for the string pointer
	string temp = "";
	
	for (startScan = 0; startScan <(testNumbers-1); startScan++)
	{
		minIndex = startScan;
		minValue = *(scoresPointer + startScan);
		for (int index = (startScan +1); index < testNumbers; index++)
		{
			minValue  = *(scoresPointer + index);
			minIndex = index;
		}
		*(scoresPointer + minIndex)= *(scoresPointer + startScan);
		//we have to store the names in temp so they do not get overwritten 
		 temp = *(namesPointer + minIndex) ;
		 //swap the names, put the least name in the top of the array
		 *(namesPointer + minIndex) = *(namesPointer + startScan);
		 //swap the names and put the greatest name in the bottom of the array, which is stored in temp
		 *(namesPointer + startScan)= temp;
		 *(scoresPointer + startScan) = minValue;
		 
	}
	
	//display the results to the user
	int count = 0;
	
	cout << "The tests sorted in ascending order are\n\n";
	for (count ; count < testNumbers; count++)
	{
		
		cout << *(namesPointer + count) << "'s score: "<< *(scoresPointer+count) << endl;
	}
	
	delete [] namesPointer;
	namesPointer = NULL;
	
	delete[] scoresPointer;
	scoresPointer = NULL;
	return 0;
}
