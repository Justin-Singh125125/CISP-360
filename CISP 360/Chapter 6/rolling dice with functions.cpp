#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//ask the user to input an key to roll the dice
void startProgram();
void rollDie();

int main()
{
	
	startProgram();
	int die1;
	int die2;
	die1 = rollDie();
	die2 = rollDie();
	cout << "You rolled " << die1 << " and " << die2 << endl;
	
	
	
	
	
	
	
	
	return 0;
}

void startProgram()
{
	cout << "Enter any key to roll the dice\n";
	cin.get();
}

int rollDie()
{
	static int rolled;

	unsigned seed = time(0);
	srand(seed);

	
	const int MAX = 6;
	const int MIN = 1;
	
	rolled = (rand()%(MAX - MIN + 1)) + MIN;
	rolled = (rand()%(MAX - MIN + 1)) + MIN;

	
	

	
}
