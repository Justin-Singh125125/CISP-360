/*
-create a readpipe
create a variable to read the numbers
create a varaible for counter
create a varaible for average
create a varaible for sum
conncect the readpipe to the file
use a while loop to go through the file
show the amount of numbers in the file
show the sum of all the numbers in the file
show the average of all the numbers
*/
#include <iostream>
#include <fstream>//for files

using namespace std;

int main()
{
	//create a readpipe
	ifstream readPipe;
	//additional varaibles
	int numbers = 0;
	int counter = 0;
	int sum = 0;
	int average = 0;
	//connect the pipe to the file
	readPipe.open("Random.txt");
	while (readPipe>> numbers)
	{
		//to get the sum of all the numbers
		counter += 1;
		//get sum of all the numbers
		sum = (sum + numbers);
		
	}
	
		// get the average
		average = (sum /counter);
		
		//close the file
		readPipe.close();
		//show results
		cout << "The amount of numbers in the file was " << counter << endl;
		cout << "The sum of all the numbers in the file is " << sum<< endl;
		cout << "The average of the file is " << average;
	
	
	
	
	
	
	
	return 0;
}
