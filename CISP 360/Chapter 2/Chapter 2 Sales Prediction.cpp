#include <iostream> //to use cout and cin

using namespace std; //orgranizes everything in standard

main()
{
	//total number of people surveyed
	double people = 16500;
	const double PERCENT_SURVEYED = .15;
	double peopleThatBought = 0;
	const double PERFERED = .58;
	double peopleWanted = 0.0;
	
	peopleThatBought = (people * PERCENT_SURVEYED);
	people = (people - peopleThatBought);
	
	peopleWanted =(people * PERFERED);
	peopleWanted =(people - peopleWanted);
	
	cout << "Initally " <<  people << " bought the drinks\n";
	cout << peopleWanted << " Actually perfered citrus flavored drinks";
	
	
	
}
