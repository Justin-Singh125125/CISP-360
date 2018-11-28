#include <iostream>
#include <cstring>//to copy the array
using namespace std;

void stringCopy(char[], char[]);
int main()
{
	//a size for the char array, accounting for the null terminator
	const int SIZE = 30;
	char sentence1[SIZE];
	char sentence2[SIZE];
	
	cout << "Enter a string with no more than 29 characters:\n";
	cin.getline(sentence1, SIZE);
	
	stringCopy(sentence1, sentence2);
	
	
	cout << "The string you entered is:\n";
	cout << sentence2;
	
	
	return 0;
}
void stringCopy(char string1[], char string2[])
{
	int index = 0;
	
	while (string1[index]!= '\0')
	{
		string2[index] = string1[index];
		index ++;
	}
	//you are required to put your own null terminator because this will not do it for you
	string2[index] = '\0';
}
