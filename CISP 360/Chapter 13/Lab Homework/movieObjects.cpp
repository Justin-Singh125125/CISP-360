#include <iostream>
#include <string>

using namespace std;
class Movie
{
	public:
	string name;
	string lengthOfMovie;
	string genre;
	double rentalPrice;
		
};
//this holds all of the movies data, meaning the functions that carries everything out
class MovieRentalDatabase
{
	private :
		//the pointer we are going to dynamically allocate
		Movie *database;
		//the size of the pointer array 
		int size;
		//to step through variables
	
	//get what is stored in name
		public:
			//default constructor
			MovieRentalDatabase()
			{
				
			}
			//an overloaded constructor
			MovieRentalDatabase(int s)
			{
				//assign the size variable to the private variable
				size = s;
				//dynamically allocate
				database = new Movie[s];
		
				
			}
		
			void enterMovieData()
			{
				int index = 0;
				while (index < size)
				{
					cout << "Please enter the data for movie #" << index+1<< endl;
					cout << "Name: ";
					
					cin.ignore();
					getline (cin,(database+index)->name);
					cout <<"Length (in minutes): ";
					getline (cin,(database+index)->lengthOfMovie);
					cout <<"Genre: ";
					getline (cin,(database + index)->genre);
					cout << "Price(in dollars and cents format): ";
					cin >> (database+index)->rentalPrice;
					index ++;
					cout << endl;
				}
			}
			void displayDatabase()
			{
				int index = 0;
				cout << "MOVIE #" << index +1<< endl;
				while (index < size)
				{	cout << "Name: ";
					cout << (database + index)->name << endl;
					
					cout << "Length: ";
					cout << (database + index)->lengthOfMovie << endl;
					
					cout << "Genre: ";
					cout << (database + index)->genre << endl;
					cout << "Price: ";
					cout << (database + index)->rentalPrice << endl;
					index++;
					cout << endl;
				}
			}
			void replaceElement(int replaceElement)
			{
				int index = replaceElement -1;
				cout << "Please enter the data for movie #" << (replaceElement) << endl;
				cout << "Name: ";
				cin.ignore();
				getline (cin , (database + index)->name);
				cout << "Length(in minutes): ";
				cin >> (database + index)->lengthOfMovie;
				cout <<"Genre: ";
			
			//we gotta use cin.ignore to forget about the \n
				cin.ignore();
				getline(cin, (database + index)->genre);
				cout << "Price(in dollars and cents format): ";
				cin>> (database + index)->rentalPrice;
				cout << endl;
			}
			void DescendingOrderByName()
			{
				//sorts alphabetically
				int startScan, minIndex;
				string minValue;
				string minLength;
				double minRental = 0.0;
				string minGenre;

				for (startScan = 0; startScan < (size-1);startScan++)
				{
					minIndex = startScan;
					minValue = (database+ startScan)->name;
					for (int index2 = startScan + 1; index2 <size; index2++)
					{
						if ((database+ index2)->name> minValue)
						{
							minValue = (database+ index2)->name;
							minLength = (database+ index2)->lengthOfMovie;
							minGenre = (database+ index2)->genre;
							minRental = (database+ index2)->rentalPrice;
							minIndex = index2;
						}
			
						//switches first part
						(database + minIndex)->name = (database + startScan)->name;
						(database + minIndex)->lengthOfMovie= (database + startScan)->lengthOfMovie;
						(database + minIndex)->genre = (database + startScan)->genre;
						(database + minIndex)->rentalPrice = (database + startScan)->rentalPrice;
				
						//switches second part
						(database + startScan)->name= minValue;
						(database + startScan)->lengthOfMovie = minLength;
						(database + startScan)->genre= minGenre;
						(database + startScan)->rentalPrice = minRental;
					}
				}
				cout << "Descending Sort Complete.\n";
			}

			void AscendingOrderByName()
			{
				//sorts alphabetically
				int startScan, minIndex;
				string minValue;
				string minLength;
				double minRental = 0.0;
				string minGenre;

				for (startScan = 0; startScan < (size-1);startScan++)
				{
					minIndex = startScan;
					minValue = (database+ startScan)->name;
					for (int index2 = startScan + 1; index2 <size; index2++)
					{
						if ((database+ index2)->name< minValue)
						{
							minValue = (database+ index2)->name;
							minLength = (database+ index2)->lengthOfMovie;
							minGenre = (database+ index2)->genre;
							minRental = (database+ index2)->rentalPrice;
							minIndex = index2;
						}
					
						//switches first part
						(database + minIndex)->name = (database + startScan)->name;
						(database + minIndex)->lengthOfMovie= (database + startScan)->lengthOfMovie;
						(database + minIndex)->genre = (database + startScan)->genre;
						(database + minIndex)->rentalPrice = (database + startScan)->rentalPrice;
				
						//switches second part
						(database + startScan)->name= minValue;
						(database + startScan)->lengthOfMovie = minLength;
						(database + startScan)->genre= minGenre;
						(database + startScan)->rentalPrice = minRental;
					}
				}
				cout << "Ascending Sort Complete.\n";
			}
		void 	displayMenu()
			{
				cout << "Please select one:\n" ;
    			cout << "1) Enter all movie data into the array\n";
				cout << "2) Display all movie data currently stored in the array\n";
				cout << "3) Change the contents of any one array element\n";
				cout << "4) Sort the array by movie name in ascending order\n";
				cout << "5) Sort the array by movie name in descending order\n";
				cout << "6) Quit the program\n\n";
				
			}
			
			
};

int main()
{	
	int replaceElement = 0;
	int choice= 0;
	int numOfMovies = 0;
	cout << "Welcome to the movies!"<< endl;
	MovieRentalDatabase object;
	while (choice != 6)
	{
		object.displayMenu();
		cout << "Selection: ";
		cin >> choice;
		if (choice == 1)
		{
			cout << "How many movies do you want to enter? ";
			cin >> numOfMovies;
			MovieRentalDatabase anotherObject(numOfMovies);
			anotherObject.enterMovieData();
			//object holds everything from anotherObject
			object = anotherObject;
		}
		else if (choice == 2)
		{
			object.displayDatabase();
		}
		else if (choice == 3)
		{
			cout << "Enter an element number to replace: ";
			cin >> replaceElement;
			
			object.replaceElement(replaceElement);
			
		}
		else if (choice == 4)
		{
			object.AscendingOrderByName();
		}
		else if (choice == 5)
		{
			object.DescendingOrderByName();
			
		}
		else if (choice == 6)
		{
			return 0;
		}
		else
		{
			cout << "Error: please select one of your options.\n";
		}
	}
	return 0;
}
