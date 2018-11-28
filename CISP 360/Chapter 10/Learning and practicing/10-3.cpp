#include <iostream>
#include <cmath>
#include <cctype>
#include <iomanip>
using namespace std;
int main()
{
	double radius = 0.0;
	double const PIE = 3.141592654;
	double area = 0.0;
	char another;
	
	//round decimals
	cout << fixed<< setprecision(2);
	cout << "This program calculates the area of a circle.\n";
	
	do
	{
		cout << "Enter the circle's radius: ";
		cin >> radius;
		//square the radius
	
		radius = pow(radius,2.0);
		area = (radius *PIE);
		cout << "The area is " << area << endl;
		cout << "Calculate Another?[Y or N]\n";
		cin >> another;
		//capitalize what they enter
		while (toupper(another) != 'Y' && toupper(another )!= 'N')
		{
			cout << "Please enter [Y or N]\n";
			cin >> another;
			another =	toupper(another);
		
		}
	}
while (toupper(another) == 'Y');
	return 0;
	
}
