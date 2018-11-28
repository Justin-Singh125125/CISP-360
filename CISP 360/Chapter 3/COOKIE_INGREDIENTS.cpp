#include <iostream>
#include <iomanip>


using namespace std;

int main ()
{
	//this is the amount of each ingredeint to make 48 batches of cookies
	//adjust accordingly to your recipe of cookies
	const double SUGAR = 32.0;
	const double BUTTER = 48.0;
	const double FLOUR = 17.45454545;	
	
	
	//how many cookies the user wants to make
	double cookies = 0.0;
	cout <<"How many cookies do you want to make?\n";
	cin >> cookies;
	// varaibles to hold the amount of each ingredient
	double sugar = 0.0;
	double butter = 0.0;
	double flour = 0.0;
	//calculate
	
	sugar = (cookies / SUGAR);
	butter = (cookies / BUTTER);
	flour = (cookies /FLOUR);
	
	cout << "To make " <<cookies <<" cookies you will have to have the amount of cups these ingredeints\n";
	cout << setprecision(2) << fixed;
	cout << "Sugar:" << setw(8) << sugar<< endl;
	cout << "Butter:"<<setw(7) << butter<<endl;
	cout << "Flour:" << setw(8) << flour;	
	
	
	return 0;
}

