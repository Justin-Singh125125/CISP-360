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
void AscendingOrder(int numOfMovies, movieInfo movie[])
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
}
void descendingOrder(int numOfMovies, movieInfo movie[])
{
	int startScan, minIndex= 0;
	string minValue = "";
	int minLength=0;
	double minRental = 0.0;
	string minGenre= "";
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
	
}
bool isFilled(int numOfMovies)
{
	bool check;
	if (numOfMovies == 0)
	{
		check = true;
	}
	else
	{
		check = false;
	}
	return  check;
	
}
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
	//variables are created here so they do not have to keep getting recreated in the while loop
	int choice=0;
	int numOfMovies=0;
	int arraySize = 0;
	int index=0;
	int replaceElement = 0;
	bool isValid= true;
	bool isNotFilled= true;
	
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
				isNotFilled= isFilled(numOfMovies);
				if (isNotFilled)
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
				isNotFilled= isFilled(numOfMovies);
				if (isNotFilled)
				{
					cout<< "There are no movies found in the array\n";
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
				isNotFilled= isFilled(numOfMovies);
				if (isNotFilled)
				{
					cout<< "There are no movies found in the array\n";
				}
				else
				{
					AscendingOrder(numOfMovies, movie);
					cout << "Ascending Sort Complete.\n";
				}
			}
			if (choice == 5)
			{
				isNotFilled= isFilled(numOfMovies);
				if(isNotFilled)
				{
					cout<< "There are no movies found in the array\n";
				}
				else
				{
					descendingOrder(numOfMovies, movie);
					cout << "Descending Sort Complete\n";
				}
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
}
