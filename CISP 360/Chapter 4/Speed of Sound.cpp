//The speed of sound

#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
	
	int choice = 0;
	double time = 0.0;
	const double AIR = 1100.0;
	const double WATER = 4900.0;
	const double STEEL = 16400.0;
	double distance = 0.0;
	
	cout << "Make a selection\n";
	cout << "1: Air\n";
	cout << "2: Water\n";
	cout << "3: Steel\n";
	cin>> choice;
	
	switch(choice)
	
	case 1: 
	{
		cout<< "What is the distance the sound will travel\n";
		cin >> 	distance;
		time = (distance/AIR);
			cout<< fixed<< showpoint<< setprecision(4)<<"It will take "<< time << " seconds to travel "<<distance << " feet";
			
		break;
	
	case 2:
	
		cout<< "What is the distance the sound will travel\n";
		cin >> 	distance;
		time = (distance/WATER);
			 cout << fixed<< showpoint<< setprecision(4)<<"It will take "<< time << " seconds to travel "<<distance << " feet";		break;
	
	case 3:
		
		cout<< "What is the distance the sound will travel\n";
		cin >> 	distance;
		time = (distance/STEEL);
	 cout << fixed<< showpoint<< setprecision(4)<<"It will take "<< time << " seconds to travel "<<distance << " feet";
		break;





	}
	

	
	
	return 0;
}
