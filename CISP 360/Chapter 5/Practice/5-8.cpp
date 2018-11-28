//This program displays a menu and asks the user to make a selection.
//A do while loop repeats the program until the user 
//selects item4 from the menu
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	//constants for menu choices
	const char ADULT_CHOICE = '1';
	const char CHILD_CHOICE = '2';
	const char SENIOR_CHOICE = '3';
	const char QUIT_CHOICE ='4';
	
	//constants for membership rates
	
	const double ADULT = 40.0;
	const double CHILD = 20.0;
	const double SENIOR = 30.0;
	
	
	//varaibles
	
	char choice = '0';
	int months = 0; //holds number of months
	double charges = 0.0; //monthly charges
	
	//set up numeric output formatting
	
	cout << fixed << showpoint << setprecision(2);
	
	do
	{
		//display the menu
		cout << "\n\t\tHealth Club Membership\n\n"
		<< "1. Standard Adult Membership\n" 
		<< "2. Child Membership\n"
		<< "3. Senior Citizen Membership\n"
		<< "4. Quit the program\n\n"
		<< "Enter your choice: ";
		
		cin >> choice;
		
		//validation
		while (choice < '1' || choice > '4')
		{
			cout << "Please enter a valid menu choice: ";
			cin >> choice;
		}
		
		// process the users choice
		
		if (choice != '4')
		{
			//get the number of months
			cout <<"For how many months? ";
			cin >> months;
			
			
			//respond to the ysers menu selection
			switch(choice)
			{
				case '1':
					charges = (months * ADULT);
					break;
				case '2':
					charges = (months * CHILD);
					break;
				case '3':
					charges = (months * SENIOR);
					break;
			}
			
			//DISPLAY THE MONTHLY CHARGES
			cout << "The total charges are $"
			     << charges << endl;
			     
		}
	}while (choice != '4');
	return 0;
}
