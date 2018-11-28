#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char place[] = "The Windy City";
	
	
	//a length for the array
	const int length = 20;
	// variable to search for windy
	char lookUp[length];
	cout << "Enter the name you are looking for\n";
	cin.getline(lookUp, length);
	
	//boolean variable for if found
	bool isFound = false;
	
	if (strstr(place, lookUp))
	{
		isFound = true;
	}
	
	if (isFound)
	{
		cout << "Windy Found\n";
		
	}
	else
	{
		cout << "Windy not found\n";
		
	}
	return 0;
}
