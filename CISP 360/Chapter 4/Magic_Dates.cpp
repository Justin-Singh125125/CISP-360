//checks to see if your date is magic
#include <iostream>

using namespace std;

int main ()
{
	int month = 0;
	int day = 0;
	int year = 0;
	int magic = 0;
	
	
	cout << "Enter the number of the month[1-12]\n";
	cin >> month;
	
	cout << "Enter the day number[1-31]\n";
	cin >> day;
	
	cout << "Enter the last two digits of the year[00-99]\n";
	cin >> year;
	
	magic = ( day * month);
	//validation for the month
	
	if ((month <1) || (month >12))
		
		
		cout << "ERROR: Enter numbers in the range of 1-12\n";
		

	else if ((day <1) || (day >12))
		
		cout << "ERROR: Enter numbers in the range of 1-31\n";
	else if ((year < 00) || (year > 99))
		
		cout << "ERROR: Enter numbers in the range of 00- 99\n";
		
	
	
	
	else if (magic != year)
		
		cout << month << "/" << day << "/"<< year << " is not a magic date";
	
	else
		
		cout << month << "/" << day << "/"<< year << " is a magic date";
	
	
	
	
	
	
	return 0;
}
