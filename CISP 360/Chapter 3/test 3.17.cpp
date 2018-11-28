#include <iostream>
#include <iomanip> //used for output manipulation

using namespace std;

main ()
{
	double x = 34.789;
	
	
	cout  <<setw(9) << setprecision (4) <<x  <<endl;
	
	
	double y = 7.0;
	
	cout << setw(5) << setprecision(4) << showpoint << y;
}
