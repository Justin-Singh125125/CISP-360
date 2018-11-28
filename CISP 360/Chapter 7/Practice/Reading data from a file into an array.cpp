#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//create a read pipe
	ifstream readPipe;
	//connect the pipe to file
	readPipe.open("TenNumbers.txt");
	//create an array size
	const int SIZE = 10;
	//create an array
	int numbers[SIZE];
	
	int index = 0;
	//while the index does not go past 10, or the end of teh file being reached, continue
	while ((index < SIZE && readPipe >>numbers[index])) // the variable  numbers[index] is storing as it's reading
	{
		index ++;
	}
	
	//close the file
	
	readPipe.close();
	
	//use for loop to display the arrays contents
	for (index = 0; index < SIZE; index++)
	{
		cout << numbers[index]<< endl;
	}
	
	
	cout << "These numbers were read from the file";
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
