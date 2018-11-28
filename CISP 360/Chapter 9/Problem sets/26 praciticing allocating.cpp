#include <iostream>
using namespace std;

int main()
{
	
	int *pointerArray =new int [20];
	for ( int index = 0; index < 20 ; index ++)
	{
		cout << "Enter a value in element " << index << endl;
		cin >> *(pointerArray + index) ;
	}
	
	for (int index = 0; index < 20; index ++)
	{
		
		cout << *(pointerArray + index ) << endl;
		
		
		
	}
	
	delete [] pointerArray;
	pointerArray = NULL;
	return 0;
}
