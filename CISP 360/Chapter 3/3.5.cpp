#include <iostream> //display stuff to user
#include <cstdlib>  //allows us to use the random library functions
#include <ctime>    //allows us to use the time function

using namespace std;

int main()
{
	//the time function is the amount of seconds that has passed since the day january 1st 1970
	// we declare it as unsinged because unsigned deals with 0 or positive integers
	//we put 0 in the time function because anything else will give us an error

	unsigned int seed = time(0); 
	// if we do not use srand, we will get the same random numbers everytime we run the program
	//we are going to generate random positive numbers from this using srand
	// we use srand because the variable we are using is unsigned
	// srand only takes unsigned values
	srand(seed);

	//after we use srand to convert the number of seconds, we can then use the random function
	
	cout <<rand() << endl;
	cout <<rand() << endl;
	cout <<rand() << endl;
	  
	
	
	
	
	return 0;
}
