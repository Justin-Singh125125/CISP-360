//This program writes and reads data to a file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	//declare a write pipe
	ofstream writePipe;
	//connects the pipe to the txt file demofile
	writePipe.open("demofile.txt");
	//something for the user to know its working
	cout << "Now writing data to the file.\n";
	//lets write some data to the file
	writePipe << "Bach"<< endl;
	writePipe << "Beethoven"<< endl;
	writePipe << "Mozart"<< endl;
	writePipe << "Schubert"<< endl;
	//now after processing we have to close the file
	
	writePipe.close();
	cout << "Finished writing data to file..\n";
	cout <<"\n";
	cout << "Reading from file...\n";
	
	//declare a read pipe
	ifstream readPipe;
	//connect the pipe the the demofile
	readPipe.open("demofile.txt");
	//varaible to read the names and a couter variable
	string names = "";
	while (readPipe >>names)
	{
		cout << names << endl;
		
	}
	//close the file
	
	readPipe.close();
	
	
	
	
	return 0;
}
