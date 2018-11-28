#include <iostream>
using namespace std;



void showNum(int num);
int main()
{
	const int SIZE = 8;
	int array[]= {1,2,3,4,5,6,7,8};
	int counter;
	
	for(counter=0;counter <SIZE ; counter++)
	{

		showNum(array[counter]);
		
		
	}
	
	
	
	
	
	return 0;
}

void showNum( int num)
{
	cout << num << endl;
}
