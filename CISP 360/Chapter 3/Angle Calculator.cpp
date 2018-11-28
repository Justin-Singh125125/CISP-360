#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	
	double radius = 0.0;
	double sinR = 0.0;
	double cosR = 0.0;
	double tanR = 0.0;
	
	cout << "What is the angle in radius of the traingle?\n";
	cin >> radius;
	
	sinR = sin(radius);
	cosR = cos(radius);
	tanR = tan(radius);
	
	cout << setprecision(4) << fixed;
	
	cout << "The angles are....." << endl;
	cout << "sin:" << setw(8) << sinR << endl;
	cout << "cos:" << setw(8) << cosR << endl;
	cout << "tan:" << setw(8) << tanR;
	
	
	
	
	return 0;
}
