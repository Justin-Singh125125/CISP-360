//SPOTLIGHT FOR NESTED DECISION STRUCTURES

/* 
ALGORITHM:
STEP1: GET TEST SCORE
STEP2: IF IF IF FOR ALL SCORES
*/ 

//TO PRINT ON THE SCREEN
#include <iostream>
#include <string>

using namespace std;

int main ()
{
	double testScore = 0.0;
    
    // USE CHAR BECAUSE WE ARE USING 1 LETTER 
    // STRING ALSO WORKS BUT MAKES NO SENSE TO USE SINCE CHAR IS A THING
	char grades;

	// get test score

	cout << "What is your test score?\n";
	cin >> testScore;

	// calculate the grade
	
	if ( testScore >= 90)
		grades = 'A';
	else if (( testScore <= 89) && ( testScore >=80))
		grades = 'B';
	else if ((testScore <=79)&& (testScore >= 70))
		grades = 'C';
	else if ((testScore <= 69) && (testScore >=60))
		grades = 'D';
	else
		grades = 'F';
	
	// validation for valid test scores
	 if (testScore == -1)
		cout << "ERROR: ENTER A VALID TEST SCORE";		
	
	else
		cout << "The grade for your test is an " << grades;

	
	


	return 0;
}
