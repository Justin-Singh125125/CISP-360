#include <iostream>
#include <iomanip>

using namespace std;
//you are creating the function to convert
//declares the measurement as dereferenced pointer so we can change the value inside the address
void convert(double *measurement)
{
	//ALWAYS MAKE SURE TO INCLUDE THE DEREFERENCE WHEN CHANGING VALUES IN POINTERS
	*measurement *= 2.54;
}
int main()
{
	double measurement = 0.0;
	cout << "Enter a length in inches, and this program will convert";
	cout << " it to centimeters\n";
	cin >> measurement;
	
	//sends over the address of measurement
	convert(&measurement); 
 	cout << fixed << setprecision(4);
	cout << "Value in centimeters: " << measurement << endl;

	
	
	
	return 0;
}
