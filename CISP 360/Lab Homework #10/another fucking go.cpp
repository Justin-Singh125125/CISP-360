#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char array[] = "We\'re not laughing at you, we\'re laughing with you.";
	
	char search[] = "you";
	char string2[] = "them";
	
	char *pointer = strstr(array, search);

	
	int firstPart = 0;
	firstPart = (strlen(array)- strlen(pointer));
	cout << firstPart << endl;
	
	
	int index = 0;
	
	int newsize = 0;
	
	newsize = (strlen(array) + (strlen(string2)-strlen(search))*2);

	
	char *newArray = new char [newsize];
	
	for(index = 0; index < firstPart; index++)
	{
		//we are dynamically allocating the first part of the sentence to a new char array
		*(newArray + index) = *(array + index);
	}
	
	for (int index1 = 0; index < sizeof(string2) ;index1 ++)
	{
		cout <<  string2[index1]<< endl;
	}
	cout << newArray << endl;
	
	
	
	
	
	return 0;
}
