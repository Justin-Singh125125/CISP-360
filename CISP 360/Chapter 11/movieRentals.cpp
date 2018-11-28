#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct movieInfo
{
	string name;
	int lengthOfMovie;
	string genre;
	double rentalPrice;
};

bool validation (int number)
{
	bool isValid;
	if (number >6 || number < 1)
	{
		isValid = false;
	}
	else
	{
		isValid = true;
	}
	
	return isValid;
}
void displayMenu()
{
		cout << "Please select one:\n";
		cout << "1) Enter all movie data into the array\n";
		cout << "2) Display all movie data currently stored in the array\n";
		cout << "3) Change the contents of any one array element\n";
 		cout << "4) Sort the array by movie name in ascending order\n";
		cout << "5) Sort the array by movie name in descending order\n";
		cout << "6) Quit the program\n";
		cout << endl;
		cout << "Selection: ";
}
int main()
{
	//number of movie rentals
	const int SIZE = 10;
	//create a variable array that will access the structure
	movieInfo movie[SIZE];
	int choice;
	int numOfMovies;
	int arraySize = 0;
	int index;
	int replaceElement = 0;
	bool isValid;
	cout << "Welcome to the movies!\n";
	displayMenu();
	cin>>choice;
	while (choice != 6)
	{
		if (validation(choice))
		{
			if (choice == 1)
			{
				//loop control variable 
	
				cout << "How many movies do you want to enter(up to 10)? ";
				cin >> numOfMovies;
		
				//a variable to step through the for loop
	
				for (index = 0; index <numOfMovies; index++)
				{
					cout << "Please enter the data for movie #" << (index + 1) << endl;
					cout << "Name: ";
					cin.ignore();
					getline (cin , movie[index].name);
					cout << "Length(in minutes): ";
					cin >> movie[index].lengthOfMovie;
					cout <<"Genre: ";
			
					//we gotta use cin.ignore to forget about the \n
					cin.ignore();
					getline(cin, movie[index].genre);
					cout << "Price(in dollars and cents format): ";
					cin>> movie[index].rentalPrice;
	
			
		
					cout << endl;
					
				}
	
			}
			if (choice ==2)
			{
				if (numOfMovies == 0)
				{
					cout<< "There are no movies found in the array\n";
				}
				else
				{
					
				
					for(index = 0; index < numOfMovies; index++)
					{
						cout << "MOVIE #" << (index + 1)<< endl;
						cout << "Name: " << movie[index].name << endl;
						cout << "Length: " << movie[index].lengthOfMovie<<endl;
						cout << "Genre: " << movie[index].genre << endl;
						cout << fixed << setprecision(2);
						cout << "Price: $" << movie[index].rentalPrice << endl;
						cout << endl;
					}
					cout << endl;
				}
			}
			if(choice == 3)
			{
				if (numOfMovies == 0)
				{
					cout << "There are no movies to replace.\n";
				}
				else
				{
					cout << "Enter an element number to replace: ";
					cin >> replaceElement;
					cout << "Please enter the data for movie #" << (replaceElement) << endl;
					cout << "Name: ";
					cin.ignore();
					getline (cin , movie[replaceElement-1].name);
					cout << "Length(in minutes): ";
					cin >> movie[replaceElement-1].lengthOfMovie;
					cout <<"Genre: ";
			
					//we gotta use cin.ignore to forget about the \n
					cin.ignore();
					getline(cin, movie[replaceElement-1].genre);
					cout << "Price(in dollars and cents format): ";
					cin>> movie[replaceElement-1].rentalPrice;
					cout << endl;
				}
			}
			if (choice == 4)
			{
				//sorts alphabetically
				int startScan, minIndex;
				string minValue;
				int minLength;
				double minRental = 0.0;
				string minGenre;

				for (startScan = 0; startScan < (numOfMovies-1);startScan++)
				{
					minIndex = startScan;
					minValue = movie[startScan].name;
					for (int index2 = startScan + 1; index2 <numOfMovies; index2++)
					{
						if (movie[index2].name< minValue)
						{
							minValue = movie[index2].name;
							minLength = movie[index2].lengthOfMovie;
							minGenre = movie[index2].genre;
							minRental = movie[index2].rentalPrice;
							minIndex = index2;
						}
						//switches first part
						movie[minIndex].name = movie[startScan].name;
						movie[minIndex].lengthOfMovie= movie[startScan].lengthOfMovie;
						movie[minIndex].genre = movie[startScan].genre;
						movie[minIndex].rentalPrice = movie[startScan].rentalPrice;
				
						//switches second part
						movie[startScan].name= minValue;
						movie[startScan].lengthOfMovie = minLength;
						movie[startScan].genre= minGenre;
						movie[startScan].rentalPrice = minRental;
					}
				}
				cout << "Ascending Sort Complete.\n";
			}
			if (choice == 5)
			{
				//sorts alphabetically
				int startScan, minIndex;
				string minValue;
				int minLength;
				double minRental = 0.0;
				string minGenre;

				for (startScan = 0; startScan < (numOfMovies-1);startScan++)
				{
					minIndex = startScan;
					minValue = movie[startScan].name;
					for (int index2 = startScan + 1; index2 <numOfMovies; index2++)
					{
						if (movie[index2].name> minValue)
						{
							minValue = movie[index2].name;
							minLength = movie[index2].lengthOfMovie;
							minGenre = movie[index2].genre;
							minRental = movie[index2].rentalPrice;
							minIndex = index2;
						}
						//switches first part
						movie[minIndex].name = movie[startScan].name;
						movie[minIndex].lengthOfMovie= movie[startScan].lengthOfMovie;
						movie[minIndex].genre = movie[startScan].genre;
						movie[minIndex].rentalPrice = movie[startScan].rentalPrice;
				
						//switches second part
						movie[startScan].name= minValue;
						movie[startScan].lengthOfMovie = minLength;
						movie[startScan].genre= minGenre;
						movie[startScan].rentalPrice = minRental;
			
					}
				}
				cout << "Descending Sort Complete\n";
			}
			
		}
		else
		{
			cout << "Error: please select one of your options.\n";
		}
		displayMenu();
		cin>>choice;
		
	}
cout << "Exiting...";
return 0;
	//no return 0 here because the only way to exit program is through choice 6
}
