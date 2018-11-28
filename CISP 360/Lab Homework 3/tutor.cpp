#include <iostream>
//to use the random fuction
#include <cstdlib>
//numbers to randomize
#include <ctime>

using namespace std;

int main()
{
	
	//varaible to hold correct answer
	int sum;
	//random numbers that get added
	int num1;
	int num2;
	
	
	//variable to hold numbers since 1970
	int seed;
	seed = time(0);
	
	//range of numbers
	const int MAX = 1000;
	const int MIN = -1000;
	//randomize the random number generator
	srand(seed);
	
	//randomize the numbers
	num1 = (rand()% (MAX - MIN + 1) + MIN);
	num2 = (rand()% (MAX - MIN + 1) + MIN);
	
	//add the numbers
	sum = (num1 + num2);
	
	cout << "What is " << num1 << " + " << num2 << "?\n\n";
	cout <<"Press any key to see answer when ready\n";
	cin.get();
	cout<< num1 << " + " << num2 <<" is " << sum;
	return 0;
}
