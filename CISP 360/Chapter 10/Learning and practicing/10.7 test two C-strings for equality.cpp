#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	const int LENGTH = 40;
	char firstString[LENGTH], secondString[LENGTH];
	
	//get input from the user
	cout <<"Enter a string: ";
	cin.getline(firstString, LENGTH);
	cout << "Enter another string: ";
	cin.getline (secondString, LENGTH);
	
	//compare the strings
	if (strcmp(firstString,secondString) == 0)
	{
		cout << "You enter the same string twice\n";
		
	}
	else
	{
		cout << "The strings are not the same\n";
	}
	
	
	
	return 0;
}
