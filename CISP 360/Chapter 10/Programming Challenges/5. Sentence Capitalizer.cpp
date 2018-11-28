#include <iostream>
#include <cctype>
using namespace std;

void capitalizer(char *);
int main()
{
	
	const int SIZE = 100;
	char sentence [SIZE];
	
	cout << "Enter a sentence\n";
	cin.getline(sentence, SIZE);
	capitalizer(sentence);
	
	return 0;
}
void capitalizer(char *strPtr)
{
	
	
	//for the first time around restriciton
	bool isFirst = true;
	
	if (isFirst == true)
	{
		//we are going to set the first index of the pointer to uppercase
		
		*strPtr = toupper(*strPtr);
		//change the value so it never happens again
		isFirst = false;
	}
	//loop continues until it hits null terminator
	while (*strPtr != '\0')
	{
		//if there is a decimal, skip to indexes and uppercase the letters
		if (*strPtr == '.')
		{
			*(strPtr +2)=toupper(*(strPtr + 2));
		}
		//display the result
		cout << *strPtr;
		//increment the pointer
		strPtr++;
	}
}


