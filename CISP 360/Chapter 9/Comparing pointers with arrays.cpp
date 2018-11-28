//This program uses a pointer to displau the contents of an integer array
#include <iostream>
using namespace std;

int main()
{
	int set[8] = {5,10,15,20,25,30,35,40};
	//creates a pointer called nums
	int *nums = NULL;
	//makes the pointer point to the array sets, again does not need the & sign cuz array
	nums = set;
	//while the address inside of nums is less than the address of element 7
	while (nums< &set[7])
	{
		//numsPLUS is here cuz we already outputed one number
		
		cout << *nums << " ";
		nums++;
	}
	
	
	
	
	return 0;
}
