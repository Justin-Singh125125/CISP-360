#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
	double width = 10.0;
	double length = 15.0;
	Rectangle box(width, length);

	cout << "Width: " << box.getWidth() << endl;
	cout << "Length: " << box.getLength() << endl;
	cout << "Area: " << box.getArea()<<endl;
	
	
		
	return 0;
}
