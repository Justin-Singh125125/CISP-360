#include <iostream>

using namespace std;

int main()
{
	const int SIZE = 10;
	
	int lotteryNumbers[SIZE]= {13579, 62483,26791,77777,26792,79422,33445,85647,55555,93121};
	
	bool isWin = false;
	
	int number=0;
	int winningNumber=0;
	
	cout << "Enter the winning lottery number\n";
	cin >> number;
	
	int count;
	for(count = 0; count < SIZE; count++)
	{
		if (number == lotteryNumbers[count])
		{
			winningNumber = lotteryNumbers[count];
			isWin = true;
		}
	}
	
	
	if (isWin)
	{
		cout << "YOU WON! THE WINNING NUMBER IS " << winningNumber<< endl;
	}
	else
	{
		cout << "SORRY TRY AGAIN!";
	}
	
	
	return 0;
}
