#include <iostream>
using namespace std;
int main()
{
	
	
	const int SIZE = 8;
	int set[SIZE] = {5,10,15,20,25,30,35,40};
	//declare a pointer
	int *numPtr = NULL;
	int count;
	
	//make numPTR point to the set array
	numPtr = set;
	
	for (count = 0; count < SIZE; count++)
	{
		cout << *numPtr << " ";
		numPtr++;
	}
		for (count = 0; count < SIZE; count++)
	{
		numPtr--;
		cout << *numPtr << " ";
		
	}
	
}
