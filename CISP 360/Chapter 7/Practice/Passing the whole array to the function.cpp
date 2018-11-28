//I think this program executes wierdly because it was copied and pasted from a previous program
#include <iostream>

using namespace std;



void showNum(int num[],int size);
int main()
{
	const int SIZE = 8;
	int array[SIZE]= {1,2,3,4,5,6,7,8};
	int counter;
	
	for(counter= 0;counter <SIZE ; counter++)
	{
	// when passing arrays, in main you do not send over the brackets
		showNum(array, SIZE);
		
		
	}
	
	
	
	
	
	return 0;
}
// brackets you have to put here, not when passing
void showNum( int num[], int size)
{
	int index;
	for (index = 0; index < size; index++)
		{
		
			cout << num[index] << endl;
		}
}
