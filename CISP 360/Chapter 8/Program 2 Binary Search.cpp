#include <iostream>
using namespace std;
//function prototype for binary search
int binarySearch(const int [], int , int);

//global constants
const int SIZE = 20;
int main()
{
	//array with employees IDs sorted in ascending order
	int idNums[SIZE] = {101,142,147,189,199,207,222,234,289,296,310,319,388,394,417,429,447,521,536,600};
	//holds the search results
	int results;
	//holds the employees ID
	int empID;
	//gets the employees ID
	cout << "Enter the employee ID you wish to search for: ";
	cin >> empID;
	
	//gets the results
	//sends over the array, size of the array, and the id you are searching for
	results = binarySearch(idNums, SIZE, empID);
	//if results is -1 then the ID was not found
	if (results == -1)
	{
		cout << "That number does not exist in the array.\n";
		
	}
	else
	{
		cout << idNums[results] <<" is found at element " << results << " in the array";
	}
	
	
	
	
	return 0;
}
int binarySearch(const int array[], int size , int value)
{	//variable to be returned
	int position;
	//variable for the middle of array element
	int middle;
	//first element of the array
	int first = 0;
	//last array element
	int last = 0;
	//set last  to size -1 because if you do not there will be to many elements
	last = size-1;
	//set position to -1 so we can assume its 
	position = -1;
	//flag variable because we need to checl if it was found or not
	bool found = false;
	
	while (!found && first <= last)
	{
		//this calculates the midpoint
		middle = (first + last )/2;
		//if the middle id is the same as the one searched for
		//if it is found at middle
		if (array[middle]== value)
		{
			found = true;
			position = middle;
		}
		//if the value is located in the lower half
		else if (array[middle] > value)
		{
			//this will shrink the bottom of the array to get smaller and closer to middle
			last = middle-1;
		}
		else
		{	//this will shrink the upper half of the array
			first= middle + 1;
		}
	}
	return position;
	
}
