#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
int main()
{
	
	//price of parts
	const double A_PRICE = 249.0, B_PRICE = 299.0;
	
	//character array for part number
	const int PART_LENGTH = 8;
	char partNum[PART_LENGTH];
	
	
     cout << "The stereo part numbers are:\n" 
       	  << "\tBoom Box, part number S147-29A\n" 
    	  << "\tShelf Model, part number S147-29B\n" 
          << "Enter the part number of the stereo you\n" 
          << "wish to purchase: "; 
          cin >> partNum;
          
          //compares the part numbers if they are the same and it will display the price
       if (strcmp(partNum, "S147-29A") == 0) 
       {
	   
           cout << "The price is $" << A_PRICE << endl; 
       }
       else if (strcmp(partNum, "S147-29B") == 0) 
       {
	   
          cout << "The price is $" << B_PRICE << endl;
		}
      else 
       {
      	   cout << partNum << " is not a valid part number.\n"; 
          
	   }
	
	return 0;
}
