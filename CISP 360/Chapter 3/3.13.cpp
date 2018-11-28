#include <iostream>

using namespace std;
main()
{ 
     int integer1, integer2; 
     double result; 
     integer1 = 19; 
     integer2 = 2; 
     result = integer1 / integer2; 
     cout << result << endl; 
     result = static_cast<double>(integer1) / integer2; 
     cout << result << endl; 
     result = static_cast<double>(integer1 / integer2); 
     cout << result << endl; 
     return 0;  }     
