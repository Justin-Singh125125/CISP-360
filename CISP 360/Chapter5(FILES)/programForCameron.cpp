#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
	string words = "";
	//make a readPipe
	ifstream readPipe;
	//open the file
	readPipe.open("secretMessage.txt");
	while (readPipe >> words)
	{
		cout << words << " ";
	}
	
	
	
	
	
	return 0;
}
