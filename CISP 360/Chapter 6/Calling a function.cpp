#include <iostream>
using namespace std;
// voids need to happen before main so they are declared in scope
void displayMessage()
{
	cout <<"Hello from the function displayMessage\n";
	
}

int main()
{
	cout << "Hello from main\n";
	//calls the function display message
	displayMessage();
	cout << "Back in the function main again\n";
	
	
	
	
	
	
	
	
	return 0;
}


