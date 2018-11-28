#include <iostream>
#include <cstring>
using namespace std;

//function prototype
int numOfChar(char *);

int main()
{
	//size of the array
	
	const int SIZE = 50;
	char string [SIZE];
	
	//varaible for total number of characters
	int total = 0;
	
	cout << "Enter a sentence:\n";
	cin.getline(string, SIZE);
	
	total = numOfChar(string);
	
	cout << "There are a total of " << total << endl;
	
	return 0;
}
int numOfChar(char *strPtr)
{
	int length = 0;
	
	//we use the string length function
	length = strlen(strPtr);
}


