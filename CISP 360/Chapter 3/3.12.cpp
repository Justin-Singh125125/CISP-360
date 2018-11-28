//This program takes letters and reveals there aschii number

#include <iostream>

using namespace std;

int main()
{
	char letter;
	
	cout << "Enter a character\n";
	cin >> letter;
	cout << "The ASCHII number of " << letter << " is ";
	//This converts the character to an integer value
	cout << static_cast<int> (letter) << endl;
	
	
	return 0;
}
