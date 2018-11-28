//this program calculates how many rows there are anf collums there are
#include <iostream>
using namespace std;
int main()
{
	const int ROW = 29;
	const int COLLUM = 5;
	//rows, then collums
	int days[ROW][COLLUM];
	
	int rowCounter, collumCounter;
	
	int counter, index =0;
	
	for (counter = 0; counter < ROW ; counter++)
	
	{
	
		rowCounter++;
	}
		for (index = 0; index < COLLUM; index++)
		{
		
			collumCounter++;
			
		}
	cout << "Rows: " << rowCounter << endl;
	cout << "Collums: " << collumCounter << endl;
	return 0;
}
