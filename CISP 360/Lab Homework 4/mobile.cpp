#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
int main()
{
	//rounds all output, 2 decimal places
	cout << fixed << setprecision(2)<< endl;

	//per monthly package
	const double PACKAGE_A = 39.99;
	const double PACKAGE_B = 59.99;
	const double PACKAGE_C = 69.99;
	
	//num of minutes
	const double MIN_A = 450;
	const double MIN_B = 900;

	
	
	//charges for extra minutes
	const double PER_MIN_A = .45;
	const double PER_MIN_B = .40;
	
	//what user selects
	char selection;
	
	//get number of minutes
	double minutes;
	
	//calculation variables
	double monthlyBill;
	double partialBill;
	double numOfMins;
	double wouldOfSaved;
	
	
	//get which selections
	cout << "Select your package\n\n";
	cout << "PACKAGE A: For $39.99 per month 450 minutes are provided. Additional minutes are $0.45 per minute.\n";
	cout << "PACKAGE B: For $59.99 per month 900 minutes are provided. Additional minutes are $0.40 per minute.\n";
	cout << "PACKAGE C: For $69.99 per month unlimited minutes provided.\n";
	cout << "---------------------------------------------------------------------\n";
	cout << "Warning: options are case sensitive\n\n";
	
	cin >> selection;
	
	switch(selection)
	{
		
		
		case 'A': 
		
			cout << "Enter the amount of minutes used\n";
			cin >> minutes;
		
			if (minutes <= MIN_A)
			{
	
				cout << "Your monthly bill is $" << PACKAGE_A << endl;
		
			}
			if ( minutes <= 494)
			{
					partialBill = (minutes - MIN_A);
					monthlyBill = (partialBill * PER_MIN_A) +PACKAGE_A ;
					cout << "Your monthly bill is $" << monthlyBill << endl;
			}
			if((minutes > 494) && (minutes <= MIN_B))
			{
				numOfMins = (minutes- MIN_A);
				monthlyBill = (numOfMins * PER_MIN_A ) + PACKAGE_A ;
				cout << "Your monthly bill is $" << monthlyBill << endl;
				wouldOfSaved = (monthlyBill - PACKAGE_B); 
				cout << "If you purchased package B, you would of saved $" << wouldOfSaved << endl;
			}
	
		
			if (minutes > MIN_B)
			{
				//gets remaining minutes
				numOfMins = (minutes- MIN_A);
				//multiplies the remaining minutes by the charge per minute
				//adds the expense to sum
				monthlyBill = (numOfMins * PER_MIN_A ) + PACKAGE_A ;
				//shows results
				cout << "Your monthly bill is $" << monthlyBill << endl;
			
				//calculate how much for package B
				numOfMins = (minutes- MIN_B);
				partialBill = (numOfMins * PER_MIN_B ) + PACKAGE_B ;
				partialBill = (monthlyBill - partialBill);
				cout << "If you purchased package B, you would of saved $" << partialBill << endl;
				partialBill = (monthlyBill -PACKAGE_C);
				cout << "If you purchased package C, you would of saved $" << partialBill << endl;
			
			}
		
			break;
		
		case 'B': 
	
			cout << "Enter the amount of minutes used\n";
			cin >> minutes;
		
			if (minutes <= MIN_B)
			{
			
			
				cout << "Your monthly bill is $" << PACKAGE_B << endl;
		
			
			}
			if( minutes > MIN_B)
			{
				//gets the remaining seconds
				numOfMins = (minutes - MIN_B);
				//adds the expense to sum
				monthlyBill = (numOfMins * PER_MIN_B ) + PACKAGE_B;

				cout << "Your monthly bill is $" << monthlyBill << endl;
			
				partialBill = (monthlyBill-PACKAGE_C );
				
				cout << "If you purchased package C, you would of saved $" << partialBill << endl;
			}
		
		
		
			break;
		
		case 'C':
		
			cout << "Your monthly bill is $" << PACKAGE_C << endl;
			cout << "No additional expenses because your service packages serves unlimited minutes\n";
		
			
			break;
		
		default : cout << "ERROR, THAT WAS NOT ONE OF THE CHOICES";
	}
	cout << time_t();
	return 0;
}
