#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	
	//array size
	const int SIZE = 10;
	//create array
	int numbers[SIZE];
	//create a write pipe
	ofstream writePipe;
	
	//variable to load the array
	int index;
	
	for (index = 0; index < SIZE ; index++)
	{
		numbers[index] = index ;
		
	}
	
	
	
		//connect the writePipe to the file
	writePipe.open("SavedNumbers.txt");
	
	
	
	//lets write the values to the file
	for (index = 0; index < SIZE ; index++ )
	{
		writePipe << numbers[index] << endl;
		
	}
	
	//close the file
	writePipe.close();
	
	cout << "The program has finished....";
	
	
	
	
	
	
	
	

	
	
	
	
	
	
	
	
	
	
	return 0;
}
