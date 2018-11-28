 #include <iostream> 
 #include <iomanip> 
 using namespace std; 
 
int main() 
 { 
     const double PI = 3.14159; 
     double degrees, radians; 
 
     cout << "Enter an angle in degrees and I will convert it\n"; 
     cout << "to radians for you: "; 
     cin >> degrees; 
     radians = degrees * PI / 180; 
     // Display the value in radians left justified, in fixed 
     cout << radians << fixed << endl;
     
     
     
     // point notation, with 4 places of precision, in a field 
     
     cout << setprecision(4) << radians << endl;
     // 5 spaces wide, making sure the decimal point is always 
     // displayed. 
     cout << setw(5) << radians;
     return 0; 
 }       
  
