#include <iostream>
#include <iomanip>
using namespace std;

//function to print the grades to the user
 void printGradeScores(short grades[3][5], short row2, short collums2)
 {
 	int counter;
 	int index;
 	for (counter = 0; counter < row2; counter++)
 	{
 		cout << "Student #"  << (counter+1) << ":";
 		for (index = 0; index < collums2 ; index++)
 		{
 			cout << setw(4) << grades[counter][index];
		 }
		 // to move down
		 cout << endl;
	 }
 }
 void printGradeLetters(char letters[3][5], short rows, short collums)
 {
 	int counter;
 	int index;
 	for (counter = 0; counter < rows; counter++)
 	{
 		cout << "Student #"  << (counter+1) << ":";
 		for (index = 0; index < collums ; index++)
 		{
 			cout << setw(4) << letters[counter][index];
		 }
		 // to move down
		 cout << endl;
 	}
}
void getStudentGrades(short gradeInput[3][5],short row1, short collum1 )
{
	int counter1;
	int index1;
	
	for (counter1 = 0 ; counter1 < row1; counter1++)
	{
		
		for (index1 = 0; index1 < collum1; index1++)
		{
			cout << "Enter student #" << (counter1 +1) << ":";
			cin >> gradeInput[row1][collum1];
		}
		cout << endl;
	}
}
int main()
{
	//const variables for the 2D arrays
	const short ROWS = 3;
	const short COLLUMS = 5;
	
	//create an array that is initilized 
	short studentsGrades[ROWS][COLLUMS];
	
	getStudentGrades(studentsGrades, ROWS, COLLUMS);
	
	
	
	//array for printing grade letters
	char studentsLetters[ROWS][COLLUMS];
	
	
	//function to print the grade scores to the user
	printGradeScores(studentsGrades, ROWS, COLLUMS);
	//print the grade letters to the user
	cout << endl;
	printGradeLetters(studentsLetters, ROWS, COLLUMS);
	
	return 0;
}
