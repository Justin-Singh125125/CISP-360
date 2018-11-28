#include <iostream>

using namespace std;

//this function returns a  pointer
//the array from main is passed over and the size

//since the array does not have brackets, we have to use the dereferencing sign to signify that it is an array and not 
//just a regular integer
int *duplicateArray(int *mainArray, int size)
{
	//counter variable
	int count = 0;
	//create a pointer that returns the new array
	int *copiedArrayPointer = NULL;
	
	//create a new array using the allocated bullshit and while doing this
	//the pointer is set to it
	copiedArrayPointer = new int[size];
	//fill the new array with the other array, so copy nigga
	
	for ( count=0; count < size; count++)
	{
		//now it is just like using regular arrays, each address gets filled with a value from the other array
		copiedArrayPointer[count ]= mainArray[count];
	}
	 
	
	return copiedArrayPointer;
	
	
}

int main()
{
	//counter varaible
	int count = 0;
	//create an array to be copied
	
	const int SIZE = 5;
	//this array holds 5 elements
	int mainArray[SIZE] = {1,2,3,4,5};
	
	//create a pointer variable
	int *pointer = NULL;
	
	//create a function that sends over the array and the size 
	//the function will return a pointer assigned to a new copied array
	pointer = duplicateArray(mainArray, SIZE);
	
	for ( count=0; count < SIZE; count++)
	{
		//boom suck it
		cout << pointer[count] << endl;
	}
	
	//now we have to delete the allocated bullshit
	
	//set the pointer to 0
	//so this delete everything in the pointer
	
	delete []pointer;
	//now set the pointer = 0
	pointer = NULL;
	return 0;
}
