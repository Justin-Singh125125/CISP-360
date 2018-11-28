#include <iostream>
using namespace std;

int main()
{
	const int MAX = 2;
	int array[MAX];
	int index;
	
	int userInput;
	
	cout << "Enter number of hours[-1 to quit]\n";
	cin >> userInput;
	
	while ((userInput != -1) && (index <= MAX))
	
	{
		array[index] = userInput;
		cout << "Enter number of hours[-1 to quit]\n";
		cin >> userInput;
		index += 1;
	}
	
	
	
	cout << "The program has finished";
	
	
	
	
	return 0;
}
