  // This program asks for the lengths of the two sides of a 
  // right triangle. The length of the hypotenuse is then 
 // calculated and displayed. 
 #include <iostream> // print shit on the screen
 #include <iomanip> // manipulates what the user can seee
 #include <cmath>
 
 /*
 a(sqared) + b(squared) = c(squared)
 get the length of side 1
 get the length of side 2
 add the sides together 
 square root the added sum to get c
 show c
 */
 using namespace std;
 int main()
 {
 	double a = 0.0;
 	double b = 0.0;
 	double c = 0.0;
 	double sum = 0.0;
 	double squareRoot = 0.0;
 	
 	cout << "What is the length of side a?\n";
 	cin >> a;
 	cout <<"What is the length of side b?\n";
 	cin>> b;
 	
 	a = pow(a,2.0);
 	b = pow(b,2.0);
 	
 	sum = (a + b);
 	
 	squareRoot = sqrt(sum);
 	
 	cout << "The length of the hypotenus is " <<setprecision(4)<< squareRoot;
 	
	 
	 
	 
	 
	 return 0;
 }
 
 
 
  
