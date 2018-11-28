#include <iostream>
#include <cctype>
using namespace std;

//calculates the number of vowels
int vowels();

//calculates the number of consonants
int consonants();

int main()
{
	//size of the array
	const int SIZE = 100;
	//char array
	char string[SIZE];
	
	//prompt user
	cout << "Enter a string\n";
	
	//get it
	cin.getline(string, SIZE);
	cout << endl;



  cout <<"A) Count the number of vowels in the string\n";
  cout <<"B) Count the number of consonants in the string\n"; 
  cout <<"C) Count both the vowels and consonants in the string\n";
  cout <<"D) Enter another string\n";
  cout <<"E) Exit the program\n\n";
  
  //another input variable to hold for the menu
  char selection;
  cin >> selection;
  // uppercase the letter just in case
  selection = toupper(selection);
  
while (selection != 'A' && selection != 'B' && selection != 'C' && selection != 'D' && selection != 'E')
{
  		if (selection == 'A')
  		{
  		}
  
  		else if (selection == 'B')
  		{
  	
  		}
  
 	 else if (selection == 'C')
  	 {
  	
  	 }
     else if (selection == 'D')
     {
  	
     }
     else if (selection == 'E')
     {
  	
     }
     else 
     {
  	    cout < "Please enter one of the choices\n\n";
	    cout <<"A) Count the number of vowels in the string\n";
  	    cout <<"B) Count the number of consonants in the string\n"; 
  	    cout <<"C) Count both the vowels and consonants in the string\n";
     	cout <<"D) Enter another string\n";
        cout <<"E) Exit the program\n\n";
    
         cin >> selection;
         selection = toupper(selection);
  	 }
}
  
  
	
	
	
	return 0;
}
