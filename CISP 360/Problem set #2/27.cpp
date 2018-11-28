#include <iostream>
using namespace std;

int main()
{
	const double MAX = 3.0;
	double average;
	double score1;
	double score2;
	double score3;
	cout << "Enter score 1\n";
	cin >> score1;
	cout << "Enter score 2\n";
	cin >> score2;
	cout << "Enter score 3\n";
	cin>> score3;
	
	average = (score1 + score2 + score3);
	average /=MAX;
	cout << "The average of the " << MAX << " scores are " << average;
	
	
	
	
	
	
	return 0;
}
