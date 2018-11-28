#include <iostream>
//for files
#include <fstream>
//for strings
#include <string>



using namespace std;


int main()
{
	//trangle size
	int triangleSize;
	//traingle's orientation
	int orientation;
	//create a write pipe, hangs a pipe off the program
	ofstream writePipe;
	//for file name
	string fileName;
	//stars variable for the for loop
	int numOfStars;
	//stars control
	int starControl;
	//varialble to hold the stars
	string stars;
	
	
	cout << "Welcome to the Triangle Program!\n\n";
	cout << "Enter any key to start program\n";
	cin.get();
	
	//blank line
	cout << endl;
	
	//gets the traiangle's size
	cout << "Enter the traingle size[2-80]\n";
	cin >> triangleSize;
	while (triangleSize <2 || triangleSize >80)
	{
		cout << "ERROR: ";
		cout << "Enter the traingle size[2-80]\n";
		cin >> triangleSize;
	}
	
	//picks the traingles orientation
	cout << "Pick the triangle's orientation:\n\n";
	cout << "1. Acending\n";
	cout << "2. Decending\n\n";
	
	cin >> orientation;
	
	//gets files name to save
	cout << "Enter the file name of which you want to save this program[add .txt to the end of your file name]\n";
	cin >> fileName;
	
	

	//connect the write pipe to the file
	//I used .c_str() because this is an older version of C++
	// this allows the user to enter the file name that they want to open and create
	writePipe.open(fileName.c_str());
	
	//switch time 
	switch(orientation)
	{
		
		
		
		case 1: 
			for (starControl = 1;starControl<=triangleSize; starControl++)
			{
				
			
				for (numOfStars= 1; numOfStars <=starControl; numOfStars++ )
				{
					//writes to the file
					writePipe << "+";
				}
				writePipe << endl;
			
			}	
			
			break;
		case 2:
			//continues while the star cont
				for (starControl = 1;starControl<=triangleSize; starControl++)
			{
				
			
				for (numOfStars= triangleSize; numOfStars >=starControl; numOfStars-- )
				{
					writePipe << "+";
				}
				writePipe << endl;
				
			}	
				break;
				

	}	
	//dissconnects the pipe from the file, closes the file
	writePipe.close();
	cout << endl;
	cout << "This program has finished writing to the file...%";
	return 0;
}
