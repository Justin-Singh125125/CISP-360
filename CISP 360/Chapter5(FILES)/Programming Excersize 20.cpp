//Random number guessing game
#include <iostream>
#include <ctime> //use of the rand also
#include <iomanip>
#include <cstdlib>  // Needed for the exit function
using namespace std;

int main ()
{
	//varaible for what the user enters to guess
	int guess = 0;
	//counter variable
	int counter = 1;

	//limits the range of random numbers
	const int MIN_VALUE = 1;
	const int MAX_VALUE = 10000;
	//random number
	unsigned random = time(0);
	//use srand so we do not get the same values when we start the program
	srand(random);
	random =(rand() % (MAX_VALUE -MIN_VALUE +1)+ MIN_VALUE);
	cout << "GUESS THE NUMBERS " << MIN_VALUE << " THROUGH " << MAX_VALUE << "\n";
	cin >> guess;
	if(cin.fail())
	{
		cout << "ERROR:Wrong data type entry!";
		
	}
	else
	{
	while (( guess != random) && ( ! cin.fail()))
		{
			if (guess > random)
			{
				//if guess is wrong, randomize again
				cout << "You guessed to high! Try again ya fool!\n";
				cout << "GUESS THE NUMBERS " << MIN_VALUE << " THROUGH " << MAX_VALUE << "\n";
				cin >> guess;
				if(cin.fail())
				{
						cout << "ERROR:Wrong data type entry!";
						
				}
				else 
				{
					counter += 1;
				}
				
				
			}
			else
			{
				//if guess is wrong, randomize again
				cout << "You guessed to low! Try again ya fool\n";
			cout << "GUESS THE NUMBERS " << MIN_VALUE << " THROUGH " << MAX_VALUE << "\n";
				cin >> guess;
				if(cin.fail())
				{
						cout << "ERROR:Wrong data type entry!";
						
				}
				else
				{
					
			     counter +=1;
			 }
			}
		}
	if(guess == random)
	{
		cout << "CONGRADULATIONS YOU GUESSED THE CORRECT NUMBER\n";
		cout << "TO BAD IT TOOK YOU " << counter << " TRIES HAHAH";
	}
	
	
	
	
	/*
	for practice
	random = (rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE)
	
	*/
	return 0;
}
}
