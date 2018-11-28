#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name1, name2, first, last = "";
	
	cout << "Enter name one\n";
	cin >> name1;
	cout << "Enter name two\n";
	cin >> name2;
	if (name1 > name2)
	{
		last = name1;
	}
	else if (name1 < name2)
	{
		first = name2;
		
	}
	
	cout << "first:" << name2 << endl;
	cout << "last: " << name1 << endl;
	return 0;
}
