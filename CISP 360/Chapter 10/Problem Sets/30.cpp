#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
int main()
{
	char str[] = "237.89";
	
	double value;
	value = atof(str);
	cout << value;
	
	return 0;
}
