//This program calculates the Monthly payments problem 
#include <iostream>
//to use the sqrt library function
#include <cmath>
//to adjust output
#include <iomanip>


using namespace std;

 int main ()
{
	double loanAmount;
	double monthlyInterest;
	double amountOfMonths;
	double dividedInterest;
	double calculatedMonthlyPayment;
	double partialCalculated;
	
	//constants 
	const double INTEREST = 100.00;
	const double ONE = 1.0;
	
	cout <<"What is your loan amount?\n";
	cin >> loanAmount;
	cout << "What is your monthly interst?\n";
	cin >> monthlyInterest;
	
	//convert the percentage into a decimal
	dividedInterest = monthlyInterest/ INTEREST;  
	
	cout << "What is the amount of months that you are going to be paying\n";
	cin >> amountOfMonths;
	// split the calculation up into two different varaibles, top fraction is in calculated while bottom fraction is in partial
    
	//numerator of fraction
	calculatedMonthlyPayment = (1.0 + dividedInterest);
    calculatedMonthlyPayment = pow(calculatedMonthlyPayment, amountOfMonths);
    calculatedMonthlyPayment = calculatedMonthlyPayment * dividedInterest;
    
	//denominator of fraction
	partialCalculated = (ONE + dividedInterest);
    partialCalculated = pow(partialCalculated, amountOfMonths);
    partialCalculated = (partialCalculated - ONE);
    
    //division of numerator and denominator
	calculatedMonthlyPayment = (calculatedMonthlyPayment /partialCalculated);
	 
    //gets the monthly payment
	calculatedMonthlyPayment = (calculatedMonthlyPayment * loanAmount);
    
    //calculating variables
	double amountPaidBack;
    double interestPaid;
   
    //gets the amount of money total to pay back
    amountPaidBack = (calculatedMonthlyPayment * amountOfMonths);
    //calculates the total amount of interest paid
    interestPaid = (amountPaidBack - loanAmount);
    
    
    // When you do fixed it makes every single fucking bitch a decimal so setprecision (0) will get rid of the decimal
   
	cout << fixed << setprecision(2) << endl;
	cout << "Loan Amount: " << setw(18) << " $ "<<setw(5) <<loanAmount<< endl;
	
	//set the precision to 0 to get rid of the decimals
	cout << "Monthly Interest Rate: " << setw(15) << fixed << setprecision(0) << monthlyInterest<< "%"<< endl;
	cout << "Number of Payments:" << setw(20)<< fixed << setprecision(0) << amountOfMonths<< endl;
	
	cout << setprecision(2) << fixed;
	cout << "Monthly Payment: " << setw(14) <<" $ " << setw(8)<< calculatedMonthlyPayment<< endl;
	cout << "Amount Paid Back: " << setw(12)<< "$" << setw(9)<< amountPaidBack << endl;
	cout << "Interest Paid: " << setw(15) <<"$" << setw(9)<< interestPaid << endl;
	return 0;
}
