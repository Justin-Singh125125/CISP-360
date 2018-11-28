#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char x = 'a', y = 'a';
	char * ptr1=&x;
	char * ptr2=&y;
	if (strcmp(ptr1,ptr2) == 0)
	{
		exit(0);
	}
}
