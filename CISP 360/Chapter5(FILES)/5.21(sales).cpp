//This program asks for number of sales and then gets the amount for each sale
//then stores it in a file names "sales.txt"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	//create a writePipe
	ofstream writePipe;
	//connect the pipe to file
	writePipe.open("5.21_sales.txt");
	//variable for the for loop, use integers only
	int counter = 0;
	int numberOfSales = 0;
	//variable for sales
	double sales = 0.0;
	//get the number of sales
	cout << "What is the number of sales that you have?\n";
	cin >> numberOfSales;
	cout <<"\n";
	//create a for loop for sales
	for (counter = 1; counter <= numberOfSales; counter++)
	{
		cout <<"How much was sale number " << counter << "?\n";
		cin >> sales;
		writePipe << sales << endl;
		
	}
	
	cout << "Processing.............\n";
	cout << "\n";
	cout << "\n";
	writePipe.close();
	cout << "The program has finished....\n";
	
	
	
	
	
	return 0;
}
