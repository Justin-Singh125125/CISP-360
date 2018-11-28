// how to define an array without provideing a size declarator
#include <iostream>
using namespace std;
int main()
{
	//this initilizes the array with the number of elements that are stored in it
	int array[] = {1,2,3,4};
	cout <<array[0]<< endl;
	cout <<array[1]<< endl;
	cout <<array[2]<< endl;
	cout <<array[3]<< endl;
	return 0;
}
