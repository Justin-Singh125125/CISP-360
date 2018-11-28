//This program displays the numbers 1 through 10
//modify if need too
#include <iostream>
using namespace std;
int main()
{
	
	const int MIN = 1;
	const int MAX = 10;
	cout << "Enter any key to start the program\n";
	cin.get();
	//counter variable to step through the for loop
	int counter = 0;
	for (counter = MIN; counter <= MAX; counter ++)
		{
			cout<< counter<< endl;
		}
	
	
	
	
	return 0;
}
