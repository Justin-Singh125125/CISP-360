#include <iostream>
using namespace std;
struct partData
{
	string partName;
	int idNumber;
};
int main()	
	
{

	partData inventory[100];
	cout << inventory[49].partName;
	
	return 0;
}
