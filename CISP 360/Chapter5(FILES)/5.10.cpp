#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	int seconds = 0;
	cout <<fixed<< right;
	cout.fill('0');
	for (seconds = 0; seconds<60; seconds++)
	{
		cout << setw(2 )<<seconds << endl;
	}
	
	
	
	
	return 0;
}
