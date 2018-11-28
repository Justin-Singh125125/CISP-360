//this program demonstrates some character-testing functions
#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	
	
	char input;
	
	cout << "Enter any characters: ";
	cin.get(input);
	cout << "The character you enteres is " << input << endl;
	
	//find out what the character is 
	if (isalpha(input))
	{
		cout << "That's an alphabetic character.\n";
		
	}
	if (isdigit(input))
	{
		cout << "That's a numeric digit.\n";
		
	}
	if (islower(input))
	{
		cout << "The letter you entered is lowercase.\n";
	}
	if (isupper(input))
	{
		cout << "The letter you entered is uppercase.\n";
	}
	if (isspace(input))
	{
		cout << "Thats a whitespace character.\n";
	}
	
	return 0;
}
