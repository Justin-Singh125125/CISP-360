#include <iostream>
#include <string>
using namespace std;

	
void bubbleSort(string abc[], int sizeOfArray)
{
	int counter;
	bool swap= false;
	for (counter =0; counter <sizeOfArray-1 ;counter++)
	{
		
		while (swap)
		swap = false;
		if (abc[counter] > abc[counter+1])
		{
			string temp;
			temp =abc[counter];
			abc[counter]= abc[counter+1];
			abc[counter+1] = temp;
			swap = true;
		}
		
	}
	
		
}

void fillArray(string names[], int arraySize)
{
	int index;
	while (index < arraySize)
	{
		cout << "Enter name " << (index +1)<< endl;
		cin >> names[index];
		index++;
	}
}
int main()
{
	const int SIZE = 5;
	string peoplesNames[SIZE];
	//fills the array
	fillArray(peoplesNames, SIZE);
	//puts the array in ABC order
	bubbleSort(peoplesNames, SIZE);
	int index;
	while(index < SIZE)
	{
		cout <<"Names Alphabetically\n";
		cout << peoplesNames[index] << endl;
		index++;
	}
	
	return 0;
}
