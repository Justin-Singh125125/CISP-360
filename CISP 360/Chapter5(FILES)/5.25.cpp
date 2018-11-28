#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//create a read pipe
	ifstream readPipe;
	//connect it to the file
	readPipe.open("5-25.txt");
	//a variable to store what is read from the file
	int numbers = 0;
	//variable to check when the end of a file has been reached
	//lcv for the while loop
	
	if(readPipe)
	{
	
	
	while (readPipe >> numbers)
	{
		//read the file 
		readPipe >> numbers;
		
		cout << numbers << endl;
			
	}
	cout << "The program has finished....%";
	}
	
	else 
	{
		cout << "ERROR: cant read the file";
	}
	
	
	
	
	
	
	return 0;
}
