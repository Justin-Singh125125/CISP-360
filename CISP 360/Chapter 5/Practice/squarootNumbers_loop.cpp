//This program squares numbers 1 though 10
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{
	cout << "To start, enter any key\n";
	cin.get();
	double squared = 0.0;
    double min = 1.0;
	const double MAX = 10.0;
	while(min<=MAX)
	{
		squared = pow(min, 2.0);
		cout << min << setw(14) << squared<< endl;
		min++;
	}
	
	return 0;
}
