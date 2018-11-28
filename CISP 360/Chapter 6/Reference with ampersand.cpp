#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void rollTheDice(int &dice1, int &dice2);
int main()
{
	int die1;
	int die2;

	rollTheDice(die1,die2);
	cout << "You rolled " << die1 << " and " << die2 << endl;
	return 0;
}


void rollTheDice(int &dice1, int &dice2)
{
	unsigned seed = time(0);
	
	const int MAX = 6;
	const int MIN = 1;
	
	srand(seed);
	
	dice1 = (rand() % (MAX - MIN + 1) + MIN);
	dice2 = (rand() % (MAX - MIN + 1) + MIN);
}
