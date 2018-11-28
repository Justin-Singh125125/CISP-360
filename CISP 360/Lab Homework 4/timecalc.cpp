#include <iostream>
using namespace std;

int main()
{
	//constants for time conversion
	const int SECONDS_MINS = 60;
	const int SECONDS_HOURS = 3600;
	const int SECONDS_DAYS = 86400;
	
	//user enters this
	int seconds;
	//holds the remaining seconds
	int partialSeconds;
	//time variables
	int numOfSeconds;
	int numOfMinutes;
	int numOfHours;
	int numOfDays;
	
	//gets seconds
	cout << "Enter number of seconds\n";
	cin >> seconds;
	
	
	//calculates the number of days
	numOfDays = (seconds/SECONDS_DAYS);
	//how many seconds are left
	partialSeconds = (seconds%SECONDS_DAYS );
	//calculate hours
	numOfHours =(partialSeconds/SECONDS_HOURS);
	//how many seconds are left
	partialSeconds = (partialSeconds%SECONDS_HOURS);
	//calculate the number of minutes
	numOfMinutes= (partialSeconds/ SECONDS_MINS);
	//remaining seconds
	numOfSeconds = (partialSeconds%SECONDS_MINS);
		
	//displays results
	if (numOfDays == 0)
	{
		cout  << numOfHours << " hour(s)" << numOfMinutes << " minute(s) " << numOfSeconds << " second(s)"<< endl;
	}
else if (numOfHours == 0)
	{
		cout << numOfDays << " day(s)" << numOfMinutes << " minute(s) " << numOfSeconds << " second(s)"<< endl;
	}
else if (numOfMinutes == 0)
	{
		cout << numOfDays << " day(s)" << numOfHours << " hour(s)" << numOfSeconds << " second(s)"<< endl;
	}
else if (seconds == SECONDS_HOURS)
	{
		cout << numOfHours << " hour(s)";
	}
		
	else if (seconds == SECONDS_DAYS)
	{
			cout << numOfDays << " day(s)";
	}
			
	else if (seconds == SECONDS_MINS)
	{
			cout << numOfMinutes << " minute(s)";
	}
			
	else if (seconds >SECONDS_DAYS)
	{
		cout << numOfDays << " day(s)" << numOfHours << " hour(s)" << numOfMinutes << " minute(s) " << numOfSeconds << " second(s)"<< endl;
	}
	
	
	else if (seconds <SECONDS_DAYS )
	{
	 cout  << numOfHours << " hour(s) " << numOfMinutes << " minute(s) " << numOfSeconds << " second(s)"<< endl;
	}
else if (seconds <SECONDS_HOURS && seconds >SECONDS_MINS)
	{
	cout << numOfMinutes << " minute(s) " << numOfSeconds << " second(s) ";
	}
else if (seconds <SECONDS_MINS)
	{
		cout << numOfSeconds << " second(s)";
	}
	

	
	
			
}

