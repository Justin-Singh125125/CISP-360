#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 5;
	
	int numbers[SIZE];
	int count;
	
	//get values to store in the array
	//use pointer notation instead of subscripts
	cout << "Enter " << SIZE << " numbers: ";
	for (count = 0; count < SIZE; count++)
	{
		//paraenthesis are essential
		cin >> *(numbers + count);
		
	}
	//display the values in the array
	//use pointer notation instead of subscripts
	cout << "Here are the numbers you entered\n";
	for (count = 0; count < SIZE ; count++)
	{
		cout << *(numbers+ count) << " "<< endl;
	}
}
