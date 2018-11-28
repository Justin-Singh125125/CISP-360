//This program will calculate the amount of bytes of the following:
//char, int, float, and double
#include <iostream>
//to change output 
#include <iomanip>

using namespace std;
int main()
{
	cout << "char: " << setw(3) << sizeof(char) << " byte of memory" << endl << endl;
	cout << "int: " << setw(4) << sizeof(int) << " bytes of memory" << endl << endl;
	cout << "float: " <<setw(2) << sizeof(float) <<" bytes of memory" << endl << endl;
	cout << "double: " << sizeof(double) << " bytes of memory";
	
	return 0;
}
