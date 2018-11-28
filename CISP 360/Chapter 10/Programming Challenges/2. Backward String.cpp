#include <iostream>
#include <cstring>
using namespace std;

void backwards(char *);

int main()
{
	//array size
	const int SIZE = 100;
	
	char sentence[SIZE];
	
	cout << "Enter something:\n";
	cin.getline(sentence, SIZE);
	
	backwards(sentence);
	
	return 0;
}
void backwards(char *ptr)
{
	//calculates the length of the ptr
	int length = strlen(ptr);
	
	for (int index = length; index >=0; index --)
	{
		cout << *(ptr + index);
	}
}
