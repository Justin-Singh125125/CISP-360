//introduction to switch and breaking 
#include <iostream>

using namespace std;

int main()

{
	
	
	char choice;
	
	cout << "Enter A, B OR C";
	cin >> choice;
	
	switch(choice)
	{
		
		case 'A' : cout << "You entered A";
			break;
		
		case 'B': cout << " You entered B";
			break;
		
		case 'C' :cout << "You eneterd C";
			break;
		
		default: cout << "You did not enter A, B or C";
	}
	
	return 0 ;
	
}
