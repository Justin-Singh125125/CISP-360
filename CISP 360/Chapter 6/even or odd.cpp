d//this program calculates if the problem is even or odd
#include <iostream>
using namespace std;


bool isEven(int);

int main()
{
	
	cout << "Enter a number\n";
	unsigned int number;
	cin>> number;
	bool evenOrOdd;
	

	while (number != -1)
	{
		evenOrOdd = isEven(number);
	
		
	 if (number == 0)
	{
		cout << "0 is neither even or odd\n\n";
		
	}
	else if (evenOrOdd == true)
	{
		cout << "The number is even\n\n";
	}
	else 
	{
		cout << "The number is odd\n\n";
	}
		cout << "Enter a number\n";
		cin >> number;


	
	}
	
	return 0;
	
}


bool isEven (int num)
{
	bool results;
	if((num % 2) == 0)
	{
		results = true;
		
	}
	else
	{
		results = false;
	}
	
	
	return results;
}
