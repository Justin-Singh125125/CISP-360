#include <iostream>
using namespace std;

int main()
{
	int values[5] = {4,7,6,8,2};
	cout << values[4]<< endl;
	cout << (values[2]+ values[3]) << endl;
	//the ++ goes before values because it will increase it by one
	//if you put it after the values, it will not change the value stored in the element
	//I believe it needs a loop to make it go up one if you put it after
	cout <<++values[1]<< endl;
	
	return 0;
}d
