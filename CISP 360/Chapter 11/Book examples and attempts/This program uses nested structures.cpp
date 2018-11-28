#include <iostream>
#include <string>

using namespace std;

struct date
{
	int month;
	int day;
	int year;
};

struct Place
{
	string address;
	string city;
	string state;
	string zip;
	
};

struct EmployeeInfo
{
	string name;
	int employeeNumber;
	
	
	//we are going to access the other abstract structures with the rest
	//of the variables
	date birthDate;
	Place residence;
};
int main()
{
	//gain access to the main structure
	EmployeeInfo manager;
	cout << "Enter the manager's name: ";
	getline(cin, manager.name);
	
	cout << "Enter the manager's employee number: ";
	cin >> manager.employeeNumber;
	cout << endl;
	cout<< "Now enter the manager's date of birth.\n";
	cout << "Month (up to 2 digits): ";
	cin >> manager.birthDate.month;
	cout << "Day (up to 2 digits): ";
	cin >> manager.birthDate.day;
	cout << "Year: ";
	cin >> manager.birthDate.year;
	cout << "Enter the manager's street address: ";
	cin.ignore();
	getline(cin, manager.residence.address);
	cout << "City: ";
	getline(cin, manager.residence.city);
	cout << "State: ";
	getline(cin,manager.residence.state);
	cout << "ZIP CODE: ";
	getline(cin,manager.residence.zip);
	
	//display shit
	cout << endl;
	
	cout <<"Here is the manager's information:\n";
	cout << manager.name <<endl;
	cout <<"Employee Number: "<<manager.employeeNumber << endl;
	cout << "Date-Of-Birth: " <<  manager.birthDate.month<<"-"<< manager.birthDate.day<< "-"<< manager.birthDate.year<< endl;
	cout << "Place of residence: " << manager.residence.address<< " " << manager.residence.city<< ", ";
	cout << manager.residence.state <<" "<< manager.residence.zip << endl; 
	return 0;
}
