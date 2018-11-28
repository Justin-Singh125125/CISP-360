#include <iostream>
using namespace std;

int main()
{
	
	const int SIZE = 5;
int array1[SIZE]= {1,2,3,4,5};
int array2[SIZE]= {1,2,3,4,5};
	
	
	
	int counter;
	
	bool isTrue = true;
	
	for (counter = 0; counter < SIZE ; counter++)
	{
		//use do not equal because their is no reason to keep assigning something if it is true, always assume the values are the same for any program
		if(array1[counter] != array2[counter])
		{
			isTrue = false;
		}
		
	}
	
	if (isTrue)
	{
		cout << "The values are the same\n";
		
	}
	
	else 
	{
		cout << "The values are not the same\n";
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
