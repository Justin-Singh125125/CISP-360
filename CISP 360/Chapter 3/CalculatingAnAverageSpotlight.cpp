#include <iostream>

using namespace std;

main()
{
	double testScoreOne = 0.0;
	double testScoreTwo = 0.0;
	double testScoreThree = 0.0;
	double average = 0.0;
	
	cout << "What is the first test score?\n";
	cin >> testScoreOne;
	
	cout <<"What is the second test score?\n";
	cin >> testScoreTwo;
	
	cout << "What is the third test score?\n";
	cin>> testScoreThree;
	
	average = ( testScoreOne + testScoreTwo + testScoreThree);
	average = (	average /3);
	
	cout << "\n";
	cout << "The average of the test scores is %"<< average;
	
}
