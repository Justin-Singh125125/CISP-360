#include <iostream>
#include <cstdlib> //for random functions srand and rand 
#include <ctime>

using namespace std;

int main ()
{
	unsigned seed = time (0);
	srand(seed);

	for (int counter = 0; counter < 2; counter ++)
	{
			
	//limits the range of random numbers
	const int MIN_VALUE = 1;
	const int MAX_VALUE = 6;
	// the rolling of dice
	 int die1 = 0;
	int die2 = 0;
	

	//use srand so we do not get the same values when we start the program




	
	die1 =(rand() % (MAX_VALUE -MIN_VALUE +1)+ MIN_VALUE);
	// we first subtract max from min and then add 1
	//we get 6 from that, if we do not do + minValue the program will only
	//generate numbers 0 - 6
	//we want 1-6 
	//adding 1 to 6 gives us (1-6) for random function
	// this is confusing as fuck so understand it
	die2 =(rand() % (MAX_VALUE -MIN_VALUE +1)+ MIN_VALUE);
	
	cout << die1<<endl;
	cout <<die2 << endl;
	seed;

	}
	return 0;
}
