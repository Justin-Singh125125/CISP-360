#include <iostream>
#include <iomanip>
using namespace std;

double calculateRetail(double saleWhole, double upMark);

int main()
{	
	const double VALIDATION = 0.0;
	double wholeSale;
	double markUp;
	double retail;
	
	cout << "Enter the Whole Sale Price\n";
	cin >> wholeSale;
	while (wholeSale < VALIDATION)
	{
		cout << "ERROR: ENTER A POSITIVE NUMBER\n\n";
		cout << "Enter the Whole Sale Price\n";
		cin >> wholeSale;
	}
	
	cout << "Enter the Mark Up percentage\n";
	cin >> markUp;
	while (markUp < VALIDATION)
	{
		cout << "ERROR: ENTER A POSITIVE NUMBER\n\n";
		cout << "Enter the Mark Up percentage\n";		
		cin >> markUp;
	}
	
	retail = calculateRetail(wholeSale, markUp);
	cout << fixed << setprecision(2) << endl;
	cout << "The Whole Sale price was " << wholeSale << endl;
	cout << "The Mark Up percentage was " << setprecision(0) << markUp << "%" << endl;
	cout << "The Retail Price is " <<setprecision(2)<< retail;
	return 0;
}

double calculateRetail(double saleWhole, double upMark)
{
	
	double fullPrice;
	double additional;
	
	const double PERCENTAGE = 100.00;
	upMark /= PERCENTAGE;
	
	additional = (saleWhole * upMark);
	fullPrice = (additional + saleWhole);
	return fullPrice;
}
