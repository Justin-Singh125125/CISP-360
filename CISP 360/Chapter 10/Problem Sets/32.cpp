#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1 = "";
	string str2 = "";
	
	cout << "Enter the first string\n";
	getline(cin, str1);
	cout << "Enter the second string\n";
	getline(cin, str2);
	
	if (str1 == str2)
	{
		cout << "The strings are the same\n";
	}
	else
	{
		cout << "The strings are not the same\n";
	}
	
	return 0;
}
