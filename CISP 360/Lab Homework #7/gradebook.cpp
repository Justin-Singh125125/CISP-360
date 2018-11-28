#include <iostream>
#include <iomanip>
using namespace std;

//function to print the grades to the user
 void printGradeScores(short grades[3][5], short rows, short collums)
 {
 	int counter= 0;
 	int index = 0;
 	
 	for(counter = 0; counter < rows; counter++)
	 {
	 	for (index = 0; index < collums; index ++)
	 	{
	 		//validation for the grade scores
	 		if (grades[counter][index] < 0 ||grades[counter][index] > 100 )
	 		{
	 			cout << "ERROR: " << grades[counter][index] << " is not in the range of 0 to 100 for the assignments\n";
			}
			else
			{
			cout << "Student #"  << (counter+1) << ":";
 			for (index = 0; index < collums ; index++)
 			{
 				cout << setw(4) << grades[counter][index];
			}
		 	// to move down
		 	cout << endl;
			}
		}
	 	
	 }

 }
 void printGradeLetters(short letters[3][5], short rows, short collums)
 {
 	int counter = 0;
 	int index = 0;
 	char displayLetters[3][5];
 	
 	for (counter = 0; counter< rows ; counter++)
	{
		for (index = 0; index < collums; index++)
			{
			if (letters[counter][index] < 0 ||letters[counter][index] > 100 )
	 		{
	 			cout << "ERROR: " << letters[counter][index] << " is not in the range of 0 to 100 for the assignments\n";
			}
			else if (letters[counter][index]<=59 )
			{
				displayLetters[counter][index] = 'F';
			}
			else if (letters[counter][index] <= 69)
			{
				displayLetters[counter][index] = 'D';
			}
			else if (letters[counter][index] <= 79)
			{
				displayLetters[counter][index] = 'C';
			}
			
			else if (letters[counter][index] <= 89)
			{
				displayLetters[counter][index] = 'B';
			}
			else if (letters[counter][index] <= 100)
			{
				displayLetters[counter][index] = 'A';
			}
			
		}
	}
 	
 	for (counter = 0; counter < rows; counter++)
 	{
 		cout << "Student #"  << (counter+1) << ":";
 		for (index = 0; index < collums ; index++)
 		{
 			cout << setw(4) << displayLetters[counter][index];
		 }
		 // to move down
		 cout << endl;
 	}
}
double getStudentTotalScores(short totalScores[3][5], short studentNumber)
{
	double sum = 0.0;
	int counter = 0;
	int index = 0;

	if (studentNumber >3 || studentNumber <1)
	{
		sum = -1;
	}
	else
	{
		for (counter = (studentNumber-1); counter < (studentNumber) ; counter++)
		{
			for (index = 0; index < 5; index ++)
			{
			 	sum += totalScores[counter][index];
			}
		}
	}
	
	
	
	return sum;
}
double getStudentAverageScore(short averageScores[3][5], short studentNumber )
{
	double average = 0.0;
	double sum = 0.0;
	int counter = 0;
	int index= 0;

	if (studentNumber >3 || studentNumber <1)
	{
		average = -1;
	}
	else
	{
		for (counter = (studentNumber-1); counter < (studentNumber) ; counter++)
		{
			for (index = 0; index < 5; index ++)
			{
			 	sum += averageScores[counter][index];
			}
		}
		
	average = (sum / 5);
	return average;
	}
}
char getStudentAverageLetter(short averageAssignments[3][5], short studentNumber)
{
 	char averageLetter;
 	double average = 0.0;
	double sum = 0;
	int counter= 0;
	int index = 0;

	if (studentNumber >3 || studentNumber <1)
	{
		averageLetter = 'F';
	}
	else
	{
		for (counter = (studentNumber-1); counter < studentNumber; counter++)
		{
			for (index = 0; index < 5; index++)
			{
			 	sum += averageAssignments[counter][index];
			
			 	
			}
		}

	average = (sum / 5);
	


	if (average <= 59)
	{
		averageLetter = 'F';
	}
	else if(average <=69)
	{
		averageLetter = 'D';
	}
	else if(average <=79)
	{
		averageLetter = 'C';
	}
	else if(average <=89)
	{
		averageLetter = 'B';
	}
	else if(average <=100)
	{
		averageLetter = 'A';
	}
 	
 	
 	}
 	return averageLetter;
 }
 double getAssignmentTotalScores(short assignments[3][5], short assignmentNumber)
 {
 	double sum = 0.0;
 	int counter;
 	for (counter = 0; counter < 3; counter++)
 	{
 		sum += assignments[counter][assignmentNumber-1];
	}
 	
 	return sum;
 }
 
 double getAssignmentAverageScore(short averageAssignments[3][5], short assignmentNumber)
 {
 	double average = 0.0;
 	double sum = 0.0;
 	int counter;
 	
	 for (counter = 0; counter < 3; counter++)
 	{
 		sum += averageAssignments[counter][assignmentNumber-1];
	}
 	average = (sum /3);
 	
 	
 	return average;
 	
 }
 double getAssignmentMaxScore(short maxScores[3][5], short assignmentNumber)
 {
 	double max = 0.0;
 	int counter;
 
 	
	 for (counter = 0; counter < 3; counter++)
 	{
 		if (maxScores[counter][assignmentNumber-1] > max)
 		{
 			max = maxScores[counter][assignmentNumber-1];
		}
	}
 	
 	return max;
 }
 double getAssignmentMinScore(short minScores[3][5], short assignmentNumber)
 {
 	double lowest = 9999999999;
 	
 	int counter;
 
    for (counter = 0; counter < 3; counter++)
 	{
 		if (minScores[counter][assignmentNumber-1] < lowest)
 		{
 			lowest = minScores[counter][assignmentNumber-1];
		}
	}
 	
 	return lowest;
 }
 
int main()
{
	cout << fixed << setprecision(2);
	//const variables for the 2D arrays
	const short ROWS = 3;
	const short COLLUMS = 5;
	
	//create an array that is initilized 
	short studentsGrades[ROWS][COLLUMS];
	//fill the array
	studentsGrades[0][0] = 74;
	studentsGrades[0][1] = 59;
	studentsGrades[0][2] = 91;
	studentsGrades[0][3] = 11;
	studentsGrades[0][4] = 94;
	studentsGrades[1][0] = 48;
	studentsGrades[1][1] = 67;
	studentsGrades[1][2] = 4;
	studentsGrades[1][3] = 68;
	studentsGrades[1][4] = 92;
	studentsGrades[2][0] = 92;
	studentsGrades[2][1] = 71;
	studentsGrades[2][2] = 83;
	studentsGrades[2][3] = 80;
	studentsGrades[2][4] = 100;
	
	
	
	//array for printing grade letters
	char studentsLetters[ROWS][COLLUMS];
	
	
	//function to print the grade scores to the user
	printGradeScores(studentsGrades, ROWS, COLLUMS);
	
	
	int mainCounter1 = 0;
	int mainIndex1 = 0;
	
	
	//this is going to fill the studentsLetters array
	
	
	
	//print the grade letters to the user
	cout << endl;
	printGradeLetters(studentsGrades, ROWS, COLLUMS);
	
	//get the sum of a student#1's score
	short studentOne = 1;
	short studentTwo = 2;
	short studentThree = 3;
	
	double studentOneTotalScores;
	double studentTwoTotalScores;
	double studentThreeTotalScores;
	
	//calls the getStudentTotalScores function and returns the sum of all the students scores
	studentOneTotalScores = getStudentTotalScores(studentsGrades, studentOne);
	cout << "This is the sum of student# 1: " << studentOneTotalScores << endl;
	
	//sum of student 2
	studentTwoTotalScores = getStudentTotalScores(studentsGrades, studentTwo);
	cout << "This is the sum of student # 2: " << studentTwoTotalScores << endl;
	
	//sum of student 2
	studentThreeTotalScores = getStudentTotalScores(studentsGrades, studentThree);
	cout << "This is the sum of student #3: " << studentThreeTotalScores << endl;
	
	//blank line
	cout << endl;
	//average assignment score for this student
	double averageAssignmentScoreOne;
	double averageAssignmentScoreTwo;
	double averageAssignmentScoreThree;
	
	averageAssignmentScoreOne = getStudentAverageScore(studentsGrades, studentOne);
	cout << "This is the average of student #1 " << averageAssignmentScoreOne << endl;
	
	averageAssignmentScoreTwo = getStudentAverageScore(studentsGrades, studentTwo);
	cout << "This is the average of student #2 " << averageAssignmentScoreTwo << endl;
	
	averageAssignmentScoreThree = getStudentAverageScore(studentsGrades, studentThree);
	cout << "This is the average of student #3 " << averageAssignmentScoreThree<< endl;
	
	//blank line
	cout << endl;
	
	//gets the average letter for the student
	char averageLetterOne;
	char averageLetterTwo;
	char averageLetterThree;
	
	averageLetterOne = getStudentAverageLetter(studentsGrades, studentOne);
	cout << "the average grade of all the assignments from student #1 is " << averageLetterOne << endl;
	
	averageLetterTwo = getStudentAverageLetter(studentsGrades, studentTwo);
	cout << "the average grade of all the assignments from student #2 is " << averageLetterTwo << endl;
	
	averageLetterThree = getStudentAverageLetter(studentsGrades, studentThree);
	cout << "the average grade of all the assignments from student #3 is " << averageLetterThree << endl;
	
	averageLetterThree = getStudentAverageLetter(studentsGrades, studentThree);
	cout << "the average grade of all the assignments from student #3 is " << averageLetterThree << endl;
	
	
	//blank line
	cout << endl;
	//gets the sum of all the assignments
	int assignmentOne = 1;
	int assignmentTwo = 2;
	int assignmentThree = 3;
	int assignmentFour = 4;
	int assignmentFive = 5;
	
	double totalAssignmentOne=0.0;
	double totalAssignmentTwo=0.0;
	double totalAssignmentThree=0.0;
	double totalAssignmentFour=0.0;
	double totalAssignmentFive=0.0;
	
	totalAssignmentOne = getAssignmentTotalScores(studentsGrades,assignmentOne );
	cout << "The total of assignment #1 is " << totalAssignmentOne << endl;

	totalAssignmentTwo = getAssignmentTotalScores(studentsGrades,assignmentTwo );
	cout << "The total of assignment #2 is " << totalAssignmentTwo << endl;
	
	totalAssignmentThree = getAssignmentTotalScores(studentsGrades,assignmentThree );
	cout << "The total of assignment #3 is " << totalAssignmentThree << endl;

	totalAssignmentFour = getAssignmentTotalScores(studentsGrades,assignmentFour );
	cout << "The total of assignment #3 is " << totalAssignmentFour << endl;
	
	totalAssignmentFive = getAssignmentTotalScores(studentsGrades,assignmentFive );
	cout << "The total of assignment #3 is " << totalAssignmentFive  << endl;

	//Get the average of all the assignments
	double averageOne = 0.0;
	double averageTwo = 0.0;
	double averageThree = 0.0;
	double averageFour = 0.0;
	double averageFive = 0.0;
	
	//blank line
	cout << endl;
	averageOne = getAssignmentAverageScore(studentsGrades, assignmentOne );
	cout << "The average of assignment # 1 is " << averageOne << endl;
	
	averageTwo = getAssignmentAverageScore(studentsGrades, assignmentTwo );
	cout << "The average of assignment # 2 is " << averageTwo << endl;

	averageThree = getAssignmentAverageScore(studentsGrades, assignmentThree);
	cout << "The average of assignment # 3 is " << averageThree << endl;

	averageFour = getAssignmentAverageScore(studentsGrades, assignmentFour  );
	cout << "The average of assignment # 4 is " << averageFour  << endl;
	
	averageFive= getAssignmentAverageScore(studentsGrades, assignmentFive );
	cout << "The average of assignment # 5 is " << averageFive << endl;
	
	//blank line
	
	cout << endl;
	double maxScoreOne = 0.0;
	double maxScoreTwo = 0.0;
	double maxScoreThree = 0.0;
	double maxScoreFour = 0.0;
	double maxScoreFive= 0.0;
	
	double minScore = 0.0;
		
	
	maxScoreOne = getAssignmentMaxScore(studentsGrades, assignmentOne);
	cout << "The max score of assignment 1 is " << maxScoreOne << endl;
	
	maxScoreTwo = getAssignmentMaxScore(studentsGrades, assignmentTwo);
	cout << "The max score of assignment 2 is " << maxScoreTwo << endl;

	maxScoreThree = getAssignmentMaxScore(studentsGrades, assignmentThree);
	cout << "The max score of assignment 3 is " << maxScoreThree << endl;

	maxScoreFour = getAssignmentMaxScore(studentsGrades, assignmentFour );
	cout << "The max score of assignment 4 is " << maxScoreFour  << endl;

	maxScoreFive = getAssignmentMaxScore(studentsGrades, assignmentFive);
	cout << "The max score of assignment 5 is " << maxScoreFive << endl;
	
	//blank Line
	cout << endl;
	
	double minScoreOne = 0.0;
	double minScoreTwo = 0.0;
	double minScoreThree = 0.0;
	double minScoreFour = 0.0;
	double minScoreFive= 0.0;
	
	
	minScoreOne = getAssignmentMinScore(studentsGrades, assignmentOne);
	cout << "The lowest score on assignment 1 is " << minScoreOne << endl;
	
	minScoreTwo = getAssignmentMinScore(studentsGrades, assignmentTwo);
	cout << "The lowest score on assignment 2 is " << minScoreTwo << endl;
	
	minScoreThree = getAssignmentMinScore(studentsGrades, assignmentThree);
	cout << "The lowest score on assignment 3 is " << minScoreThree << endl;

	minScoreFour = getAssignmentMinScore(studentsGrades, assignmentFour);
	cout << "The lowest score on assignment 4 is " << minScoreFour << endl;

	minScoreFive = getAssignmentMinScore(studentsGrades, assignmentFive);
	cout << "The lowest score on assignment 5 is " << minScoreFive << endl;
	
	
	return 0;
	
	
}
