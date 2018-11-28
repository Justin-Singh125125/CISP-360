#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//const for the amount of calories burned per minute
	const double CALORIES = 3.6;
	
	// const  to limit the number of minutes
	const double MAX_MIN = 30.0;
	// variable counter for the foor loop and calories per minute
	double minutes;
	
	//total calories burned
	double total;
	
	for (minutes = 5; minutes <= MAX_MIN; minutes +=5)
	{
		//line up output
		if (minutes == 5)
		{
			total = (CALORIES * minutes);
			cout << minutes << " minutes: " << setw(9)  << fixed << setprecision(2) << total << " calories burned\n";
		}
		
		else
		{
			
			total = (CALORIES * minutes);
			cout<<  setprecision(0)<< minutes << " minutes: " << setw(8)<< setprecision(2) << total << " calories burned\n";
		}
	}
}
