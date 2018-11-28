#include <iostream>
using namespace std;
int countChars(char *, char);
int main()
{
	//array size
	const int SIZE = 51;
	char userString[SIZE];
	char letter;
	int counter = 0;
	
	//get a string from the user
	cout << "Enter a string (up to 50 characters): ";
	cin.getline(userString, SIZE);
	
	//ask the user for what character they want to search for
	
	cout << "Enter a character and I will tell you how many\n";
	cout << "times it appears in the string: ";
	cin>> letter;
	
	counter=countChars(userString, letter);
	cout << letter << " appears ";
	cout << counter << " times.\n";
	
	return 0;
}
int countChars(char *strPtr, char ch)
{
	int times = 0;
	while (*strPtr != NULL)
	{
		if (*strPtr == ch)
		{
			times++;
			//goes to the next char in the string
			
		}
		strPtr++;
	}
	return times;
}

