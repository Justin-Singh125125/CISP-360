//This program writes numbers to a file
//this program will overwrite the file everytime
//becuase it is not in append mode
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	//variable to write stuff to file
	double number1 = 0.0;
	double number2 = 0.0;
	double number3 = 0.0;
	//create a writePipe
	ofstream writePipe;
	//connect the pipe to file
	writePipe.open("numbers.txt");
	//get numbers
	cout << "Enter a number\n";
	cin >> number1 ;
	cout << "Enter a second number\n";
	cin >> number2;
	cout << "Enter the last number\n";
	cin >> number3;
	// now write the shit to the file
	
	writePipe << number1<< endl;
	writePipe << number2 << endl;
	writePipe << number3 << endl;
	
	//close the file
	writePipe.close();


	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
