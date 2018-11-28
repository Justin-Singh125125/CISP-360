#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//we are doing function prototypes because it lools nicer 

//this function will sort the pointer arrays
void ascendingOrder(int *scores, string *names, int size);

//this function displays everything
void display (int *scores, string *names, int size);
int main()
{
	//lets create the size of the allocated array
	int size = 0;
	
	cout << "Enter the number of test scores\n";
	cin >> size;
	cout << endl;
	
	//create an allocated scores pointer
	
	int *scores = NULL;
	scores = new int [size];
	
	//create an allocated names pointer
	string *names = NULL;
	names = new string [size];
	
	//load both of the pointer arrays using pointer notation
	
	//count variable to do this
	int count = 0;
	for (count; count < size; count ++)
	{
		//cin.ignore because we are using getline in a loop, do at the very top
		cin.ignore();
		cout << "Enter student #" << (count +1) << "'s score\n";
		getline(cin, *(names + count));
		
		//get the scores for the student
		cout << "Enter " << *(names+count) << "'s score\n";
		cin >> *(scores+count);
		cout << endl;
		
	}
	
	ascendingOrder(scores, names, size);
	display(scores, names, size);
	
	
	delete [] names;
	names = NULL;
	
	delete[] scores;
	scores= NULL;
	return 0;
}


void ascendingOrder(int *scores, string *names, int size)
{
	string temp = "";
	int startScan, minIndex, minValue;
	for (startScan = 0; startScan < (size-1); startScan ++)
	{
		minIndex = startScan;
		minValue = *(scores + startScan);
		for (int index = (startScan +1); index < size; index++)
		{
			if (*(scores + index)< minValue)
			{
				minValue = *(scores + index);
				minIndex = index;
			}
		}
		*(scores + minIndex) = *(scores + startScan);
		temp = *(names + minIndex);
		*(names + minIndex ) = *(names + startScan);
		*(scores + startScan) = minValue;
		*(names + startScan ) = temp;
	}
}

void display (int *scoresPointer, string *namesPointer, int size)
{
		int count = 0;
	
	cout << "The tests sorted in ascending order are\n\n";
	for (count ; count < size; count++)
	{
		
		cout << *(namesPointer + count) << "'s score: "<< *(scoresPointer+count) << endl;
	}
}
