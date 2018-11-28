//This program plays a word game with the user
#include <iostream>
//since we are using strings
#include <string>

using namespace std;


int main()
{
	
	//strings variables to hold users info
	string name;
	string age;
	string city;
	string college;
	string profession;
	string animalType;
	string petsName;
	
	//uses getline because user can enter more than one word for the majority of questions
	//get users name
	cout << "Enter your name\n";
	getline(cin, name);
	cout << "\n";
	
	//get users age
	cout << "Enter your age\n";
	getline(cin, age);
	cout << "\n";
	
	//get a city name
	cout << "Enter the city you live in\n";
	getline(cin, city);
	//leave some white space
	cout << "\n";
	
	//get the college name
	cout << "Enter the name of the college you attended\n";
	getline(cin, college);
	cout << "\n";
		
	//get the profession
	cout << "Enter your profession\n";
	getline(cin, profession);
	cout << "\n";
	
	//get animal type
	cout << "Enter what type of animal you have or would like to have\n";
 	getline(cin, animalType);	
 	cout << "\n";
	//get pets name
	cout << "Enter your pets name or what you would name your pet if you had one\n";
	getline(cin, petsName);
	cout << "\n";
	
	
	//word game time!
	cout << "There once was a person named " << name << " who lived in " << city << ". At the age of\n";
	cout << age << ", " << name << " went to college at " << college<< ". " << name << " graduated and went to work\n";
	cout << "as a " << profession << ". Then, " << name << " adopted a(n) " << animalType << " named " << petsName << ". They\n";
	cout << "both lived happily ever after!";
	return 0;
}
