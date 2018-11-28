//gets minimum and maximum numbers from user and then displays all
//the numbers between them
#include <iostream>
using namespace std;
int main()
{
	//get minimum and maximum
	int min = 0;
	int max = 0;
	
	cout << "What is the starting value?\n";
	cin >> min;
	
	cout << "What is the ending value?\n";
	cin >> max;
	cout <<"\n";
	//counter variable for the for loop
	int counter = 0;
	
	for (counter = min; counter <= max; counter++)
	{
		cout << counter << endl;
	}
}
