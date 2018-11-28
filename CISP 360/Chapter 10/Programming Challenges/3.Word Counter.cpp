#include <iostream>
#include <cstring>
using namespace std;
int	calculateWords(char *);
int main()
{
	//size of the array
	const int SIZE = 1000000;
	char string[SIZE];
	
	cout << "Enter a sentence:\n";
	cin.getline(string, SIZE);
	int words = 0;
	
	words = calculateWords(string);
	cout << "There are a total of " << words << " words!";
	
	return 0;
}
int	calculateWords(char *ptr)
{
	//set it equal to one because we are reading the first word
	int totalWords = 1;
	
	//for every blank space we will get a word
	
	while (*ptr != NULL)
	{
		if (*ptr == ' ')
		{
			totalWords+=1;
		}
		//increment the pointer
		ptr++;
		
	}
	
	
	
	
	return totalWords;
}
