#include <iostream>
using namespace std;
int main()
{
	const int SIZE = 100;
	//array 1
	int numberArray1[SIZE];
	//copy array 1 here
	int numberArray2[SIZE];
	
	//fill up array 1
	int counter;
	for (counter =0; counter < SIZE; counter ++)
	{
		numberArray1[counter]= counter;
	}
	//to show the contents of the first array
	for (counter =0; counter < SIZE; counter ++)
	{
		cout << numberArray1[counter]<< endl;
	}
	//copy all the values to array 2
	//but first a blank line to seperate the arrays
	cout << endl;
		for (counter =0; counter < SIZE; counter ++)
	{
		//sets all the bullshit here
		numberArray2[counter]= numberArray1[counter];
		//multiply everything by 2 to see the difference
		numberArray2[counter] *=2 ;
	}
	//display the contents of the copied array
		for (counter =0; counter < SIZE; counter ++)
	{
		cout << numberArray2[counter]<< endl;
	}
	
	
	
	
}
