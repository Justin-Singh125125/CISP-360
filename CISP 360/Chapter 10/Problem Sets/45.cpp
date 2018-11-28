#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char string1[] = "Billy";
	char string2[]= " Bob Jones";
	strcat(string1, string2);
	//overwrites the boundaries of the array
	cout << string1;
	}
