#include <iostream>
#include <cstring>
#include <iomanip>
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
	
	
	//calculate number of characters
	int charLength = strlen(ptr);
	
	int numOfSpaces = 0;
	while (*ptr != '\0')
	{
		if (*ptr == ' ')
		{
			totalWords++;
			numOfSpaces++;
		}
		//increment the pointer
		ptr++;
		
	}
	double average = 0.0;
	//subtract the total size from number of spaces
	charLength -= numOfSpaces;
	int preAverage = 0;
	average = static_cast<double>(charLength)/ totalWords;
	cout << fixed << setprecision(2);
	cout << average<< endl;
	return totalWords;
}
