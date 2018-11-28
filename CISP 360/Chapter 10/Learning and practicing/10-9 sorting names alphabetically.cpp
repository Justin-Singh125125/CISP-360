#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	const int LENGTH = 40;
	char name1[LENGTH], name2[LENGTH];
	
	cout << "Enter a name: ";
	cin.getline(name1, LENGTH);
	
	cout << "Enter another name: ";
	cin.getline(name2, LENGTH);
	
	//lets sort the names using the strcmp function
	cout << "Here are the names alphabetically:\n\n";
	
	if (strcmp(name1, name2)> 0)
	{
		cout << name2 << endl << name1;
	}
	if (strcmp (name1, name2)<0)
	{
		cout << name1 << endl<< name2;
	}
	if(!strcmp(name1,name2))
	{
		cout << "They are the same names\n";
	}
	
	return 0;
}
