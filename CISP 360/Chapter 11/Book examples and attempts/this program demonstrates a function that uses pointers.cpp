#include <iostream>
#include <string>

using namespace std;

//create a stucture
struct studentData
{
	string name;
	string id;
	double hours;
	double gpa;
};

void getInfo(studentData *f)
{
	cout << "Enter the following student data: ";
	cout << "Student Name: ";
	//this dereferences the pointer and changes the values
	getline(cin, f->name);
	cout <<"Student ID Number: ";
	getline (cin, f->id);
	cout <<"Credit Hours Enrolled: ";
	cin >> f->hours;
	cout << "Current GPA: ";
	cin >> f->gpa;
	
}
//but try and pass it all through constant reference it allows the program to not
//work as hard because it does not have to copy
void showInfo(const studentData &f)
{
	cout << "Here is the student data you entered:\n";
	cout << "Name: " << f.name<< endl;
	cout << "ID Number: " << f.id<<endl;
	cout << "Credit Hours: " << f.hours<<endl;
	cout << "GPA: " << f.gpa << endl;
}


int main()
{
	//create a varaible to access the structure
	studentData freshman;
	//send over the variables address
	getInfo(&freshman);
	//if we send over all the data
	showInfo(freshman);
	
	return 0;
}
