//creation of a two dimmensional array
#include <iostream>
using namespace std;
int main()
{
	double sales[8][10];
	
	int runningTotal;
	
	int counter, index;
	for (counter = 0; counter <8 ; counter++)
	{
		
		for (index = 0; index <10; index++)
		{
			sales[counter][index]= 99.999 ;
			cout << sales[counter][index] << endl;
				runningTotal++;
		}
	 } 
	
	cout << "There are a total of " << runningTotal << " elements\n";
	return 0;
}
