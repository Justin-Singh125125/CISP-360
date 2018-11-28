#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	
	//create a pipe to hang off program
	ifstream readPipe;
	//connect the pipe to the file 
	readPipe.open("Numbers.txt");
	
	//count the numbers total
	int runningTotal;
	//varaible to read the file 
	int numbers;
	//check when to exit the loop
	
	while (readPipe >> numbers)
	{
		
		runningTotal += numbers;
		cout << numbers<< endl ;

	}
	
	
	cout << "The toal of the numbers read is " << runningTotal;	
	
	
	
	
	
	
	
	readPipe.close();
	
	
	return 0;
}
