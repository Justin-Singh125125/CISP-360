#include <iostream>
#include <cstring>

using namespace std;
int main()
{
	//create an array that holds the number of products and the length size it can hold
	const int PRODS = 5;
	const int LENGTH = 100;
	
	//creates an  array, it can hold 5 products and a collum of length
	char list[PRODS][LENGTH] = {"TV327 31-INCH TELEVISION", "CD257 CD PLAYER", "TA677 ANSWERING MACHINE", "CS109 CAR STEREO", "PC955 PERSONAL COMPUTER"};
	
	
	//create a pointer variable that will tell us when it has found the null 
	char *strPtr = NULL;
	
	//create a variable that we will use to search and get from the user
	//GIVE IT THE SAME MAX LENGTH
	char lookUp[LENGTH];
	
	cout << "\tPRODUCTS...\n\n";
	cout << "Enter the product number to find the product\n";
	
	//we are going to use getline to do this, a null we be at the end of it
	cin.getline (lookUp, LENGTH);
	
	
	//lets search through this shit
	
	int index = 0;
	
	for (index = 0; index < PRODS; index ++)
	{
		strPtr = strstr(list[index], lookUp);
		if (strPtr != NULL)
		{
			break;
		}
	}
	
	if (strPtr != NULL)
	{
		cout << list[index] << endl;
	}
	else
	{
		cout << "Product was not found\n";
	}
	
	
	return 0;
}
