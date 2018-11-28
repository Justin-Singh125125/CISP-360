//this program was not in 2D form, make it 2D
#include <iostream>

#include <iomanip>

using namespace std;


int main()
{
	cout << fixed << setprecision(2);
	//ROWS, FIRST IN BRACKETS
	const int NUM_DIVISIONS = 3;
	//COLLUMS , SECOND IN BRACKETS
	const int NUM_QUARTERS = 4;
	//creates a 2D array
	//num of divisions is the rows, while quarters in the collums
	double divisions[NUM_DIVISIONS][NUM_QUARTERS];

	
	double totalSales;
	cout << "This program will calculate the total sales of all the company's divisions.\n";
	cout << "Enter the following sales data:\n\n";
	
	int index;
	int counter;
	//this for loop will make the rows
	for(index=0; index < NUM_DIVISIONS; index ++)
	{
		cout << endl;
		//this for loop will be the collums 
		for (counter = 0; counter <NUM_QUARTERS; counter ++ )
		{
			// we put index for the division here because we want 1 to be displayed to the user
			cout << "Division " << (index +1) <<", Quarter "<<(counter +1)<< ":  $";
			cin >>  divisions[index][counter];
			//save time by adding everything in this for loop, since all math takes place here
			totalSales += divisions[index][counter];
		}
	}
	

	cout << endl;
	cout << "The total sales for the company are:   $" << totalSales;
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
