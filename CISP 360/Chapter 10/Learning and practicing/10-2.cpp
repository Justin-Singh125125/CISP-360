//this program tests a customer number to determine whether it is in the proper format

#include <iostream>
#include <cctype>

using namespace std;
bool checkValidation(char [], int);

//this function will check the validation 

bool testNum(char [], int);

int main()
{
	
	//WHY IS THE SIZE 8??????????
	const int SIZE = 8; 
	//a char array to hold the customers number
	char customer[SIZE];
	
	//get the customers number
	cout << "Enter a customer number in the form ";
	cout << "LLLNNNN\n";
	cout << "(LLL = letters and NNNN = numbers):";
	
	//fills the whole entire array
	
	//i guess you need an extra slot in the array for this getline bullshit
	
	cin.getline(customer,SIZE);

	
	if (checkValidation(customer, SIZE))
	{
		cout << "That number was valid\n";
	}
	else
	{
		cout << "The number you entered is not valid\n";
	}
	return 0;
}
bool checkValidation(char customers[], int size)
{
	bool isValid = true;
	int count = 0;
	for (count = 0; count < 3; count ++)
	{
		if (!isalpha(customers[count]))
		{
			isValid = false;
		}
	}
	for (count = 3; count < size-1; count ++)
	{
			if (!isdigit(customers[count]))
		{
			isValid = false;
		}
	}
	
	
	
	return isValid;
}
