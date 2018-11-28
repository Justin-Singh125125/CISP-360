//This program lets the user enter a fikename
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	
	//declare all variables
	ifstream readPipe;
 string filename = "";
	int number = 0;
	
	//get the filename from the user
	cout << "Enter the filename: ";
	cin >> filename;
	
	//connect the file
	readPipe.open(filename);
	//if the file can be read
	if (readPipe)
	{
		//read shit
		while (readPipe >> number)
		{
			cout << number << endl;
			
		}
		readPipe.close();
	}
	else
	{
		cout << "ERROR: CANNOT OPEN THE FILE OF YOUR CHOOSING!";
	}
	return 0;
}
