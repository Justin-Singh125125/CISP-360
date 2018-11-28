//GOD WHY WERE YOU SO STUPID IN CHAPMANS
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	
	double num1, num2, num3, num4, counter;
	
	ifstream readPipe;
	readPipe.open("chapmanNumbers.txt");
	if (readPipe.fail())	
	{	
	cout << "ERROR: COULD NOT READ THE FILE";
	
	}	
	
	else
	{
		
	
	
	while (readPipe >> num1 >> num2 >> num3 >> num4)
	{
	
		if (num1 <0.0 )
		{
			counter += 1;
		}
		if (num2 <0.0 )
		{
			counter += 1;
		}
	
			if (num3 <0.0 )
		{
			counter += 1;
		}
	
			if (num4 <0.0 )
		{
			counter += 1;
		}
	}
	cout << "The total number of negative numbers in the file are " << counter;
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	}
}
