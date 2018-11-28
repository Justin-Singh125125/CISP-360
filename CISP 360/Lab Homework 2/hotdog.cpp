#include <iostream>

using namespace std;

int main()
{
	//constant hot dog variables
	const int HOT_DOG_PACKETS = 8;
	const int DOGS_PER_MINUTE = 3;
	const int COOKING_TIME = 60;
	
	//hot dog variables
	int numberOfDogsMade;
	int hotDogPackages;
	int remainder;
	
	//calculate the number of hotdogs made in 60 minutes
	numberOfDogsMade = (DOGS_PER_MINUTE * COOKING_TIME);
	
	//calculate the number of hotdog packages you can make and the remainder
	hotDogPackages = (numberOfDogsMade /HOT_DOG_PACKETS);
	
	//calcualte the remainder
	remainder = (numberOfDogsMade % HOT_DOG_PACKETS);
	
	//show the results
	cout << "The total amount of hotdogs made in " << COOKING_TIME << " minutes was " << numberOfDogsMade << "."<< endl<< endl;
	
	cout << "A total of " << hotDogPackages << " hot dog packages can be made.\n\n";
	
	cout << "Unfortunantly there are " << remainder << " leftover hot dogs that failed to fit into any hot dog packages.";	

	return 0;
}
