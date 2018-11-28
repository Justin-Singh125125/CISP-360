#include <iostream>
using namespace std;


int main()
{
	
	int decision;
	
	cout << "Enter the model of the car you drive\n";
	cout << "100, 200 or 300\n";
	cin >> decision;
	
	switch(decision)
	{
		
	case 100: cout << "This model sucks dude but alright\n";
	break;
	
	case 200: cout << "This model is less shitty, you are getting there\n";
	break;
	
	case 300: cout << "THERE YA GOO, GOOD MODELLLLL\n";
	break;
	
	default : cout << "GOD YOU ARE DUMB, YOU DID NOT EVEN ENTER ANY OF THE NUMBERS I PROVIDED YOU WITH\n";
	}
	
	return 0;
}
