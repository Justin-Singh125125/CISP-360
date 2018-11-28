#include <iostream>


using namespace std;

int main()
{
	cout <<"Enter any key to start program\n";
	cin.get();
	int number = 0;
	const int MAX = 5;
	number = 0;
	while (number < MAX)
	{
		cout << "Hello World\n";
		number++;
	}	
	cout << "The while loop has ended";
	return 0;
}
