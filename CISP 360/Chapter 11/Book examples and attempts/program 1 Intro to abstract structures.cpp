#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
//create a structure that can hold variables of a certain class
struct payRoll
{
	int employNumber = 0;
	string employName = "";
	double hoursWorker = 0.0;
	double payRate = 0.0;
	double grossPay = 0.0;
	
};

int main()
{
	//access the payRoll data type structure
	payRoll employInfo;
	
	cout << "Enter the Employees number\n";
	cin >> employInfo.employNumber;
	
	cin.ignore();
	cout << "Enter the Employeees name\n";
	getline(cin, employInfo.employName);

	
	cout << "Enter the number of hours worked\n";
	cin >> employInfo.hoursWorker;
	
	cout << "Enter the rate of pay\n";
	cin>> employInfo.payRate;
	
	//calculate the gross pay
	
	employInfo.grossPay = (employInfo.hoursWorker*employInfo.payRate);
	
	cout << "Employees Number: "<<employInfo.employNumber<<endl;
	cout <<"Employees Name: "<<employInfo.employName<<endl;
	cout <<"Employees Hours: "<<employInfo.hoursWorker<<endl;
	cout <<"Employees Pay Rate: "<<employInfo.payRate<<endl;
	
	cout << fixed << setprecision(2);
	cout <<"Employees Gross Pay: "<<employInfo.grossPay<<endl;
	
	cout << employInfo.employNumber<< endl;
	
	return 0;
}
