//this program demonstrates a pointer variable referencing 
#include <iostream>
using namespace std;
int main()
{
	int x = 25;
	int y = 50;
	int z = 75;
	
	cout << "The old values are " << x<< " " << y << " " << z << endl;
	//manipulate the varaible
	
	//to declare a pointer
	//data type, the asterics then variavle name, set it equal to NULL
	int *ptr = NULL;
	
	ptr = &x;
	*ptr += 100;
	
	//manipulate 7
	ptr = &y;
	*ptr +=100;
	
	ptr = &z;
	*ptr +=100;
	cout << "The new values are " << x<< " " << y << " " << z << endl;
	
	
	return 0;
}
