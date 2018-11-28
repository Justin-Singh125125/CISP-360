#include <iostream>
#include <cstdlib>// for the atoi conversions
#include <iomanip> //for set precision and fixed
using namespace std;
int main()
{
	int idNumber = 0;
	
	//size for the char array
	const int SIZE = 20;
	char name[SIZE];
	char age[SIZE];
	
	//random array to convert stuff to
	char input[SIZE];
	
	double income = 0.0;
	
	cout << "What is your ID number: ";
	cin.getline(input, SIZE);
	
	//converts the ID number into an actual integer
	idNumber = atoi(input);
	
	cout << "What is your name?: ";
	cin.getline(name, SIZE);
	
	//get age
	cout << "How old are you?: ";
	cin.getline(age, SIZE);
	
	cout << fixed << setprecision(2);
	//get income and convert to double
	cout << "What is your annual income?";
	cin.getline(input, SIZE);
	income = atof(input);
	
	cout << "Your name is " << name <<", you are " << age << " years old,";
	cout << " and you make $" << income<< " per year.";
	
	
	return 0;
}
