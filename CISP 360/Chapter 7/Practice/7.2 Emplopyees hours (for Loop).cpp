#include <iostream>
using namespace std;

int main()
{
	
	const int ARRAY_SIZE = 6;
	int employees_hours[ARRAY_SIZE];
	int index;
	
	for (index = 0; index < ARRAY_SIZE; index ++)
	{
		cout << "Enter the hours of employee #" << (index +1) << endl;
		cin >> employees_hours[index];
		
	}
	
	
			cout << "the hours you entered are\n";

	
	for (index = 0; index < ARRAY_SIZE; index ++)
	{
		cout << "Employee #" << (index +1) << ": "<< employees_hours[index] << endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
