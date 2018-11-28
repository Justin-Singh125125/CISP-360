//Ocean levels program
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	//const variables 
	const double RAISE = 1.5;
	const double YEARS = 25.0;
	// a counter variable for the for loop
	int counter = 0;
	//variable to hold what the growth is
	double sum = 0.0;
	//for loop
	cout <<"\t"<< "OCEAN LEVELS\n";
	for(counter = 1; counter <=YEARS; counter++)
	{
		sum = (counter * RAISE);
		cout << counter << "\t" << "\t" << "\t "<< sum  << endl;
		
	}
	
	
	
	
	
	
	
	return 0;
}
