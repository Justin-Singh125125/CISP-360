/*
Understand the math
- get the kilometers
-create a const .6214 
- multiply kilo by const to get mph
1: include everything that you need
2:declare everything
3: for loop increasing by 10 starting from 60 ends at 130
4:multiply shit inside of the for loop and display kilo coverted to mph
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const double KILO = 0.6214;
	double mph = 0.0;
	double counter = 0.0;
	for (counter = 60;counter = 130; counter+=10)
	{
		mph = (counter * KILO);
		cout <<"KPH" <<setw(10) << "MPH";
		cout <<"----------------------------";
		cout <<counter <<setw(10) << mph << endl;
	}
	return 0;
}



