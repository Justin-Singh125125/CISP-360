#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str[10];
	
	char name [] = "I fucking. ";
	
	
	int lengthName = 0;
	
	lengthName = strlen(name);
	
	if (lengthName > 10)
	{
		cout << "Cannot be copied, length is to long\n";
		
	}
	else
	{
		strcpy(str, name);
		cout << "Copied Shit: "<< str ;
	}

	
	return 0;
}
