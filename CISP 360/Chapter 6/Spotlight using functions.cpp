#include <iostream>
using namespace std;
//all jobs of the program
void showIntro();
double getCups();
double convertCups(double);



int main()
{
	//varaible to hold cups
	double cups;
	double results;
	showIntro();
	cups = getCups();
	results = convertCups(cups);
	cout << cups << " cups converted to fluid ounces is " << results;
	
	
	
	
	
	return 0;
}

void showIntro()
{
	cout << "Welcome to the cups to ounces converter\n\n";
}

double getCups()
{
	double numOfCups;
	cout << "What is the number of cups that you would like to convert\n";
	cin >> numOfCups;
	return numOfCups;
}

double convertCups(double totalCups)
{
	double convertedCups;
	const double FLUID_OUNCES = 8.0;
	double conversion;
	
	conversion = (totalCups *FLUID_OUNCES );
	return conversion;
	
	
	
}
