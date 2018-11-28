//rolling the dice by passing by reference
//remember the syntax for pointers
#include <iostream>
#include <cstdlib>
#include <ctime>
//function prototype, pass the direct location of these
void passByReference(int *dice1, int *dice2);

using namespace std;


int main()
{
	
	// the two dice
	int die1;
	int die2;
	// passing the direct location of the variables
	passByReference(&die1, &die2);
	
	
	
	cout << "You rolled " << die1 << " and " << die2 << endl;
	return 0;
}

void passByReference(int *dice1, int *dice2)
{
	unsigned seed = time(0);
	
	const int MAX = 6;
	const int MIN = 1;
	srand (seed);
	// changes the value held in the variables because it has direct access
	*dice1 = (rand()% (MAX - MIN +1) + MIN);
	*dice2 = (rand()% (MAX - MIN +1) + MIN);
	
}
