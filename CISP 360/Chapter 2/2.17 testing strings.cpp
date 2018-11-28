//Testing the use of strings
#include <iostream>
#include <string>

using namespace std;

main()
{
	string name = "";
	string address = "";
	string number = "";
	cout << "What is your name?\n";
	cin >> name;
	cout << "What is your address?\n";
	cin >> address;
	cout << "What is your phone number?\n";
	cin >> number;
	cout << name << endl << address << endl << number;
	return 0;
}
