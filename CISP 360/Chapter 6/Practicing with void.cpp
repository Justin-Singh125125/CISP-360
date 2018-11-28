#include <iostream>

using namespace std;

//function deep

void deeper()
{
	cout <<"You are in the deepest part of the program\n";
}

void deep()
{
	cout << "You are deep but not super deep\n";
	//calls the function deeper
	deeper();
	
}

int main()
{
	
	cout << "Enter any key to start the program\n";
	cin.get();
	cout << "you are in main\n";
	cout << "Now going deeper\n";
	//calls the functiion deep
	deep();
	cout << "The program has finished\n";
}
