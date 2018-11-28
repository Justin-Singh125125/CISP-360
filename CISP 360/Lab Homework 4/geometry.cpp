//geometry calculator
//When using case statements, declare all variables at the top before switch
//other wise you will have to include more brackets in your program


#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>


using namespace std;


int main()

{
	
	
	cout << "1. Calculate the Area of a Circle\n";
	cout << "2. Calculate the Area of a Rectangle\n";
	cout << "3. Calculate the Area of a Triangle\n";
	cout << "4. Quit\n";
	cout << "\n";
	cout << "Enter your choice(1-4)\n";
	
	//to hold the users choice and determine which case to start
	double length;
	double width;
	char choice; 
	double radius;
	double partialAnswer;
	double answer;
	double rectangleAnswer;
	double base;
	double height;
	double traingleAnswer;
	//constants
	const double PIE = 3.14159;
	

	cin >> choice;
	cout << "\n";

	
	switch(choice)
	{
		case '1':	
			cout<< "What is the radius of the circle?\n";
			cin >> radius;
			
			//raises input to the power of 2
			partialAnswer = pow(radius,2.0);
			answer = (PIE * partialAnswer);
			cout << "A circle of a radius with " << radius << " has an area of " << answer;
			break;
			
		case '2':
			
			cout <<"What is the length of the rectangle?\n";
			cin >> length;
			
			cout << "What is the width of the rectangle?\n";
			cin >> width;
			
			
			//base times height
			rectangleAnswer = ( length * width);
			
			cout << "The area of a rectangle with a length of "<< length << " and a width of " << width << endl;
			cout << "has an area of " << rectangleAnswer;
			break;
			
		case '3': 
			cout << "What is the base of the triangle?\n";
			cin >> base;
			
			cout << "What is the height of the triangle\n";
			cin >> height;
			cout << "\n";
			
			//base times height, divided by 2
			traingleAnswer = (base * height);
			traingleAnswer *= (.5); 
			
			cout << "The base of the triangle was "<< base << endl;
			cout << "The height of the traingle was " << height << endl;
			cout << "The area of the traingle is " << traingleAnswer;
					break;
					
		case '4':
			cout << "The program is ending...";
				break;
				
		default: cout << "ERROR, ENTER A NUMBER 1-4";
				
		
	
			
	}
	
	
	
	
	return 0;
}
