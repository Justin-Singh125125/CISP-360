#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
	//create a char array and initilize it to a sentence
	char arr[] = "Four score and seven years ago";
	//create a  string pointer
	char *strPtr = NULL;
	cout << arr << endl;
	//search for the word seven
	strPtr = strstr(arr, "seven");
	cout << strPtr << endl;
	return 0;
}
