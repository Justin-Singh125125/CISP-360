#include<iostream>
using namespace std;

void nameslice (char[]);
int main()
{
	//make an array big enough to hold shit
	const int SIZE = 41;
	char name[SIZE];
	
	//okay get the first and last name
	cout << "Enter your first and last name[seperated by a space\n";
	cin.getline(name, SIZE);
	//call the nameslice function
	nameslice (name);
	cout << "Your first name is " << name << endl;
	
	
	
	return 0;
}
void nameslice (char username[])
{
	int count = 0;
	
	//locate the first space or the null terminator if there are no spaces
	
	while (username[count]!= ' ' && username[count] != '\0')
	{
		count++;
		//if there is a space found, replace it with a null terminator
		
		if (username[count] == ' ')
		{
			username[count] = '\0';
		}
	}
}
