#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;
int main()
{
	

	//variables to hold each word
	string word1;
	string word2;
	string word3;
	string word4;
	
	//variables to hold first and last alphabetically
	string alphaFirst;
	string alphaLast;

	//double to read the doubles
	double currentPrice=0;
	double price2=0;
	double highestPrice=0;
	double lowestPrice=0;

	//variables to compare price
	double itemsPrice=0;
	double itemsPrice2=0;

	//varialbe to read decimals
	string fileName;
	//hangs a pipe off the program to be connect to the file
	ifstream readPipe;
	cout << "Enter the name of the file you would like to open\n";
	cin >> fileName;
	//connects the pipe to the file
	readPipe.open(fileName.c_str());
	
	if(readPipe)
	{
		
	
	
	//rounds to 2 decimal places
	cout << fixed << setprecision(2) ;

	//reads the whole line of the file and detects the end
	while (getline(readPipe, word1))
	{
		//stores every decimal at least one time in price
		readPipe >> currentPrice;
		//skips the \n at the end of each line of the text file
		readPipe.ignore();
	
	
		//gets highest price 
		if(currentPrice > highestPrice)
		{
			highestPrice = currentPrice;
			word3 = word1;
		}
		
		//gets lowest price
		if (currentPrice < lowestPrice || lowestPrice == 0)
		{
			lowestPrice = currentPrice;
			//sets the correct item with the price
			word4 = word1;
		}
		
	
	
		if (word1 < word2)
		{
			alphaFirst = word1;
			//sets the correct item with the price
			itemsPrice  = currentPrice;
		}
		
		if (word1> word2)
		{
			alphaLast = word1;
			//sets the correct item with the price
			itemsPrice2 = currentPrice;
		}
		//to compare for the previous if statements
		word2 = word1;
		}
	
	cout << "Alphabetically First: " << alphaFirst << "($" << itemsPrice<< ")"<< endl;
	cout << "Alphabetically Last: "<< alphaLast  << "($" << itemsPrice2<< ")"<< endl;
	cout << "Most Expensive: " <<  word3 <<"($" << highestPrice<< ")"<< endl;
	cout << "Least Expense: " << word4 << "($"<< lowestPrice<< ")" <<  endl;
	
	//closes the file
	readPipe.close();
	}
	
	else
	{
		cout << "ERROR: FILE COULD NOT BE OPENED.";
	}
	return 0;
}
