#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


struct circle
{
	double radius;
	double diameter;
	double area;
};

//function to get the circle information
circle getCircle()
{
	circle temp;
	cout << "Enter the diameter of a circle: ";
	cin>> temp.diameter;
	temp.radius = (temp.diameter/2);
	const double PI = 3.1416;
	
	temp.area= PI* pow(temp.radius,2.0);
	return temp;
}

showResults (const circle &c)
{
	cout << fixed << setprecision(2);
	cout << "The radius and area of the circle are:\n";
	cout << "Radius: " << c.radius << endl;
	cout << "Area: "<< c.area<< endl;
}
int main()
{
	circle myCircle;
	
	myCircle = getCircle();
	showResults(myCircle);
	return 0;
}
