#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char array[] =  "1234asdf9ghek9293945jfjfjeoeod";
	char *pointer = array;
	
	int count = 0;
	while (*pointer != '\0')
	{
		if(isalpha(*pointer))
		{
			count++;
		}
		pointer++;
	}
	cout << count ;
	return 0;
}
