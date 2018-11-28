#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	//varaibles for the user to enter
	int num1;
	int num2;
	
	//a sum variable of the numbers
	int sum;
	
	//a sentinal value
	string keepGoing;
	
	do 
	{
		cout << "Enter number 1\n";
		cin >> num1;
		cout << "Enter number 2\n";
		cin >> num2;
		
		//calculate sum
		sum = (num1 + num2);
		
		cout << "The sum of " << num1 <<" and " << num2<< " is " << sum << endl;
		
		cout << "Would you like to restart the program?[Y for yes or N for no]\n";
		
		cin >> keepGoing;
		
	
	}
	while ((keepGoing == "Y" || keepGoing =="y")); // there is a semicolon here to show that the while is a part of the do statement, without the semicolon the program things its an actualy while loop
	
		if ((keepGoing != "y") && (keepGoing != "Y"))
	{
		cout << "The program is ending...";
	}
	return 0;
}
