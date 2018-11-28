#include <iostream>
#include <string>
using namespace std;
//arraySize1 = 5 , arraySize2 = 4
void getTestScores(double studentscores[][4],int rows, int maxScores)
{
	int collums;
	for (collums = 0; collums <maxScores ; collums++)
	{
	cout << "Enter score #"<< collums+1<< endl;
	cin >> studentscores[rows][collums];
	}
}



void getNames(string studentsNames[], double scores[][4], int arraySize1, int arraySize2)
{
	int counter;
	
	for (counter=0; counter < arraySize1; counter++)
	{
		cout << "Enter your name\n";
		cin >> studentsNames[counter+1];
		cout << "Okay " << studentsNames[counter+1]<< ", Enter your 4 test scores!\n";
		int row = counter;
		getTestScores(scores,row, arraySize2);
	}
}




int main()
{
	//arrays that hold 5 elements
	const int SIZE = 5;
	//const to hold the number of tests
	const int TESTS = 4;
	//this array will hold 5 names
	string names[SIZE];
	//an array already filled with letter grades
	char letterGrades[SIZE]= {'A', 'B', 'C', 'D', 'F'};
	//2D array to hold the place of each students test scores
	double testScores[SIZE][TESTS];
	getNames(names,testScores,SIZE, TESTS);
	
	return 0;
}
