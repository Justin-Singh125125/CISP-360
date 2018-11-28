#include <iostream>
#include <cctype>  //for to lower
#include <cstring> //for strcmp
#include <cstdlib> //for atoi
using namespace std;
int main()
{
	//array size
	const int SIZE = 20;
	//holds user input
	char input[SIZE];
	//an accumulator
	int total = 0;
	//a loop counter
	int count = 0;
	//holds the average of the numbers
	double average = 0.0;
	//get the first numbers
	
	cout <<"This program will average a series of numbers.\n";
	cout << "Enter the first number[Q to quit]: ";
	cin.getline(input,SIZE);

	
	//if user enters q then we need to access element 0 to verify
	while (tolower(input[0]) != 'q')
	{
		total += atoi(input); //converts the numbers into integers
		count ++;  //count the numbers entered
		cout << "Enter the next number[Q to quit]: ";
		cin.getline(input, SIZE);
	}
	if (count != 0)
	{
		//convert numbers to doubles and get average
		average = static_cast<double>(total)/ count;
		cout << "Average: " << average <<endl;
	}
	
	
	return 0;
}
