#include <iostream>
#include <fstream>
#include <string>
//for the random number generator
#include <cstdlib>
#include <ctime>
#include <iomanip>


using namespace std;

//Prototype Functions that contains jobs for the task to be done
//returns the dice descrition of the dice
string getRollDescription(short die1, short die2);

//job of this function is to return the sum
short rollDice(ofstream& out);

//job of this is to return true if user wins or false if loser loses
bool playGame(ofstream& out);

int main()
{


	//boolean variable to hold if the player won
	//assume the player wins
	bool won = false;
	//so these are useless variables!
	unsigned seed = time(0);
	//the reason you ask? I need to use srand outside of the loop
	//if I put it in the loop, everytime the program calls the roll dice function
	//I get the same numbers
	srand(seed);
	
	
	//const for the number of games
	const int MAX_GAMES = 5000;
	
	//variable to keep count of the number of games
	int numOfGames;
	
	//creates a writing pipe to hang off the program
	ofstream out;
	
	
	//connects the pipe to the program
	out.open("craps.out");
	
	
	
	//loop control variable for the for loop
	numOfGames;
	
	//keeps track of the number of games played
	double numOfGamesPlayed= 0.0;
	
	//converts the variables to a double for a percentage
	double percentage = 0.0;
	//keeps track of the number of games won
	double gamesWon = 0.0;
	
	//This loop controls the total number of games played
	for (numOfGames=1; numOfGames <=MAX_GAMES; numOfGames++ )
	{
		
		//returns true if user wins, or false if user loses
		//fuction the rolls the dice, gets the dice description and returns true or false for user winning
		won = playGame(out);
		
		//if true player wins
		if (won == true)
		{
			out << "Player Win\n\n";
			gamesWon += 1.0;
		}
		else
		{
			out << "Player Lose\n\n";
		}
		numOfGamesPlayed += 1.0;
	}	
	
	//rounds the percentage to two decimal places
	cout << fixed << setprecision(2);
	//calculates the percentage of games won, Multiply by 100 to move the decimal
	percentage = (gamesWon /numOfGames) * 100;
	cout << "The percentage of games won is " << percentage << "%.\n\n";	
	cout <<"All 5000 games have been played and written to the file!";
	//closes the file
	out.close();
	return 0;
}
				

		short rollDice(ofstream& out)
		{
			//variable to return the total of the dice
			int total;
			
			//string variable to hold the descritption of the dice
			string description;
		
			//variables to hold the values of the dice
			short die1, die2 = 0;
		
			//constants ranges for the random generator
			const int MIN = 1;
			const int MAX = 6;
		
			//generates the random number
			
			die1 = (rand()% (MAX-MIN + 1)+MIN);
			die2 = (rand()% (MAX-MIN + 1)+MIN);
			
			//gets the sum of die1 and die2
			total = (die1 + die2);
			//writes the values of die1 and die2 to a file
			out << die1 << "-" << die2 << endl;
			
			//calls the function that calculates the roll description
			description = getRollDescription(die1,die2);
			//what gets returned, writes the name to the file
			out << description;
			//returns the sum of die1 and die2
			return total;
		}
		
		string getRollDescription(short die1, short die2)
		{
			//variable to be returned for description
			string slang;
			if (die1 == 1 && die2 == 1)
			{
				slang = "Snake Eyes\n";
			}
			else if (( die1 == 1 && die2 == 2) || (die1 ==2 && die2 == 1))
			{
				slang = "Ace Deuce\n";
			}
			else if (( die1 == 1 && die2 == 3) || (die1 ==3 && die2 == 1))
			{
				slang = "Easy Four\n";
			}
			else if ( die1 == 2 && die2 == 2) 
			{
				slang = "Hard Four\n";
			}
			else if (((( die1 == 1 && die2 == 5) || (die1 == 2 && die2 == 4)) ||(die1 == 5 && die2 == 1)) || (die1 ==4 && die2 ==2))
			{
				slang = "Easy Six\n";
			}
			else if ( die1 == 3 && die2 == 3) 
			{
				slang = "Hard Six\n";
			}
			else if (((( die1 == 2 && die2 == 6) || (die1 ==3 && die2 == 5)) || (die1 ==5 && die2 == 3)) || (die1 ==6 && die2 == 2))
			{
				slang = "Easy Eight\n";
			}
			else if ( die1 == 4 && die2 == 4) 
			{
				slang = "Hard Eight\n";
			}
			else if (( die1 == 4 && die2 == 6) || (die1 ==6 && die2 == 4))
			{
				slang = "Easy Ten\n";
			}
			else if ( die1 == 5 && die2 == 5)
			{
				slang = "Hard Ten\n";
			}
			else if (( die1 == 5 && die2 == 6) || (die1 ==6 && die2 == 5))
			{
				slang = "Yo\n";
			}
			else if ( die1 == 6 && die2 == 6) 
			{
				slang = "Boxcars\n";
			}
		
			return slang;
		}
		
		bool playGame(ofstream& out)
		{
			
			
			//assume the player wins
			bool playerWin;
			
			//boolean variable to calculate if we are on the first roll
			//this is to switch the rules for the second roll
			bool firstRoll = true;
		
			//varible to hold the sum of the dice
			int sum;
			
			// a point variable
			int point;
			
			//keeps track of the roll number the user is on
			int rollNumber = 1;
			//writes the roll number to file
			out << "Roll #" <<rollNumber << endl;
			//calls the roll dice function to get sum and description
			sum = rollDice(out);
			
			if ( sum == 7 || sum == 11) 
			{
				playerWin = true;
			}
			else if (sum == 2 || sum ==3 || sum == 12)
			{
				playerWin = false;
			}
			else
			{
				point = sum;
				firstRoll = false;
				
			}
			
			while(firstRoll == false)
			{
				rollNumber +=1;
				//this is the second roll, player has to get point
				out << "Roll #" <<rollNumber << endl;
				sum = rollDice(out);
				if (sum == point)
				{
					//allows the program to exit the loop
					firstRoll = true;
					playerWin = true;
				}
				else if(sum == 7)
				{
					//allows the program to exit the loop
					firstRoll = true;
					playerWin = false;
					
				}
			}
		
			return playerWin;
		}

		
		
		
		
		
		
		
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

