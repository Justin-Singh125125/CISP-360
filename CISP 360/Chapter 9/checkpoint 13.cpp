#include <iostream>
using namespace std;
int main()
{

	

	
	int *pointer = new int  ;
	cout << pointer; 
	
	
	delete [] pointer;
	pointer = NULL;
	
	return 0;
}
