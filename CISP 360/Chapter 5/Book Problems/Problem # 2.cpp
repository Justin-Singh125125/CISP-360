#include <iostream>
using namespace std;

int main()
{
	//numbers to be displayed to the screen
	int numbers;
	
	//limit to how far the numbers can count
	for (numbers = 0; numbers <= 127; numbers++)
	{
		
		// a bunch of else if statements to put 16 on each line up to 127	
		cout << numbers << " ";
		if (numbers == 16)
		{
			cout << endl;
		}
		else if(numbers == 32)
		{
			cout << endl;
		}
		else if (numbers == 48)
		{
			cout << endl;
		}
		else if (numbers == 64)
		{
			
			cout << endl;
		}
		else if ( numbers == 80)
		{
			cout << endl;
			
		}
		else if (numbers == 96)
		{
			cout << endl;
		}
		else if ( numbers == 112)
		{
			cout << endl;
		}
	}
return 0;
}
