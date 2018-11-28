#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>



using namespace std;

int main()
{
	cout << fixed<< setprecision(2);
	//get the file name
	string fileName = "";
	cout << "Enter the file name you wish to access\n";
	cin >> fileName;
	
	//create a pipe and connect it to the file
	ifstream readPipe;
	readPipe.open(fileName.c_str());
	
	//create variable for current shit
	string currentItemName = "";
	double currentItemPrice = 0.0;
	
	//create variables for the comparison
	string alphaFirst, alphaLast, alphaExpensive, alphaLeastExpensive = "";
	double mostExpensive, leastExpensive, alphaFirstExpense, alphaLastExpense = 0.0;
	
	//boolean variable to set everything equal to something so they can be compared
	bool isFirst= true;
	
	while (getline(readPipe, currentItemName))
	{
		readPipe >> currentItemPrice;
		readPipe.ignore();
		
		if (isFirst)
		{ 
		//sets everything to the first line in the file
			alphaFirst= alphaLast= alphaExpensive= alphaLeastExpensive = currentItemName;
			//sets everything to the next line in the file
			mostExpensive =leastExpensive= alphaFirstExpense= alphaLastExpense = currentItemPrice;
			isFirst = false;
		}
		//get alpha first
		if (alphaFirst > currentItemName)
		{
			//since its more, set it equal to the less value
			alphaFirst = currentItemName;
			//get the price to go with it
			alphaFirstExpense = currentItemPrice;
		}
		if (alphaLast < currentItemName)
		{
			alphaLast = currentItemName;
			alphaLastExpense = currentItemPrice;
		}
		
		if (mostExpensive < currentItemPrice)
		{
			mostExpensive = currentItemPrice;
			alphaExpensive = currentItemName;
		}
		if (leastExpensive > currentItemPrice)
		{
			leastExpensive = currentItemPrice;
			alphaLeastExpensive = currentItemName;
		}
	}
	
	
	
	readPipe.close();
	cout << "Alpha First: " << alphaFirst << "($" << alphaFirstExpense<< ")." << endl;
	cout << "Alpha Last: " << alphaLast << "($" << alphaLastExpense<< ")." << endl;
	cout << "Most Expensive: " << alphaExpensive << "($" << mostExpensive<< ")." << endl;
	cout << "Least Expensive: " << alphaLeastExpensive << "($" << leastExpensive<< ")." << endl;
	
	return 0;
}
