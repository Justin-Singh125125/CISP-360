#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//counter variable
	double years;
	
	//const mulitplier rise for ocean a year
	const double RISE	= 1.5;
	//const for the max amount of years
	const double MAX_YEARS = 25;
	
	//variable to hold total rise per year
	double total;
	
cout << "-----------------------------------------------\n";
	//for loop to display everything in a table
	for (years = 1; years <= MAX_YEARS; years ++)
	{
		//calculations for the ocean rise per year
		total = (RISE * years);
		//line up the output 
		if (years <=9)
		{
			cout << setprecision(0)<<  "Year " << years  << ":"<< setw(9)<< fixed << setprecision(2)<< total << " millimeters is the ocean rise\n";
		}
		else
	
		{
		
			cout << setprecision(0) << "Year " << years <<":" << setw(8)<< fixed << setprecision(2)<< total << " millimeters is the ocean rise\n";
		}
		
	}
	
	
	cout << endl;
	cout << "This chart is the ocean levels rise over the course of 25 years";
	
	
	
	
	
	
	return 0;
}
