#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	// hangs a pipe off the program
	ofstream writePipe;
	//connects pipe to the file
	writePipe.open("Numbers.txt"); 
	
	int numbers;
	
	int counter;
	
	for (counter = 1; counter <=100; counter ++)
	{
		numbers = counter;
		writePipe << numbers << endl;
		
		
	}
	
	
	
	cout << "The program has finished writing data to the file...%";
	
	
	
	
	
	
	writePipe.close();
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
