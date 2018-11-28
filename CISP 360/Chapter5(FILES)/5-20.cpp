//this program reads numbers from a file and adds
//them together
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//variables to read the numbers
	int number1 = 0;
	int number2 = 0;
	int number3 = 0;
	int total = 0;
	//declare a read pipe
	ifstream readPipe;
	//connect pipe to the file
	readPipe.open("5-20.txt");
	// store the numbers
	//everytime you read it moves the cursor down
	cout << "Reading from file......%\n";
	readPipe >> number1;
	readPipe >> number2;
	readPipe >> number3;
	
	//add the numbers together
	total = (number1 + number2 + number3);
	
	//display the sum
	cout << "The sum of the file is " << total <<endl;
	cout << "\n";
	cout << "The program has finished.";
	
	
	
	
	
	
	
	return 0;
}


