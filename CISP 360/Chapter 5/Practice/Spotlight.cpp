#include <iostream>


using namespace std;

int main()
{
	
	//get substances temperature
	const double MAX = 102.5;
	cout << "What is the substance's temperature\n";
	double temp = 0.0;
	
	//L.C.V for the while loop
	cin >> temp;
	while (temp > MAX)
	{
		cout << "Turn down the thermostat, wait 5 minutes and check the temperature again\n";
		cout << "\n";
		cout << "Enter the substance's temperature\n";
		cin >> temp;
	}
	
	cout << "That temperature is acceptable, please check again in 15 minutes";
	
	
	
	return 0;
}
