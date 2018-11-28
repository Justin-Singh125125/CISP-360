#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

typedef struct {
	string name;
	int length;
	string genre;
	float price;
} Movie;

void enterMovieData(Movie *movie, int movieNumber);
int enterAllMovieData(Movie *movie);
void displayMovieData(Movie movie);
void displayAllMovieData(Movie *movieArray, int size);
void selectionSortMoviesByTitle(Movie *movieArray, int size, bool isDescending);

void enterMovieData(Movie *movie, int movieNumber) {
  if (movieNumber <= 0) {
    return;
  }
	cout << "Please enter the data for movie #" << movieNumber << endl;
	cout << "Name: ";
	getline(cin, movie->name);
	cout << "Length(in minutes): ";
	cin >> movie->length;
	cin.ignore();
	cout << "Genre: ";
	getline(cin, movie->genre);
	cout << "Price(in dollars and cents format): ";
	cin >> movie->price;
	cin.ignore();
}

int enterAllMovieData(Movie *movie) {
  int movieCount;
  cout << "How many movies do want to enter(up to 10)?";
  cin >> movieCount;
  cin.ignore();
  int index = 0;
  while (index < movieCount) {
    enterMovieData((movie + index), index + 1);
    index++;
  }
  return movieCount;
}

void selectionSortMoviesByName(Movie *movieArray, int size, bool isDescending) {
  int startScan, compIndex;
  Movie compare;

  for (startScan = 0; startScan < (size - 1); startScan++) {
    compIndex = startScan;
    compare = movieArray[startScan];
    for(int index = startScan + 1; index < size; index++) {
      if ((!isDescending && movieArray[index].name < compare.name) ||
          (isDescending && movieArray[index].name > compare.name)) {
        compare = movieArray[index];
        compIndex = index;
      }
    }
    movieArray[compIndex] = movieArray[startScan];
    movieArray[startScan] = compare;
  }
}

void displayMovieData(Movie movie) {
	cout << "Name: " << movie.name << endl;
	cout << "Length: " << movie.length << endl;
	cout << "Genre: " << movie.genre << endl;
	cout << fixed << setprecision(2);
	cout << "Price: " << movie.price << endl;	
}
void displayAllMovieData(Movie *movieArray, int length) {
  if (length <= 0) {
    cout << "No movie data to display";
  }
	for(int i=0; i<length; i++) {
		cout << "MOVIE #" << i+1 << endl;
		displayMovieData(*(movieArray + i));
	}
	cout << endl;
}

int main() {
	Movie *movieArray = new Movie[10];
	// movieArrayLength keeps track of the number of movies that are actually defined
	int movieArrayLength = 0;
	cout << "Welcome to the movies!" << endl;
	
	while (true) {
		int selection;
		cout << "Please select one:\n" ;
    	cout << "1) Enter all movie data into the array\n";
		cout << "2) Display all movie data currently stored in the array\n";
		cout << "3) Change the contents of any one array element\n";
		cout << "4) Sort the array by movie name in ascending order\n";
		cout << "5) Sort the array by movie name in descending order\n";
		cout << "6) Quit the program\n\n";
		
		cout << "Selection: ";
		cin >> selection;
		cin.ignore();
		if (selection == 1) {
			movieArrayLength = enterAllMovieData(movieArray);
		}
		else if (selection == 2) {
			displayAllMovieData(movieArray, movieArrayLength);
		}
		else if (selection == 3) {
			int elementNumber;
			cout << "Enter an element number to replace: ";
			cin >> elementNumber;
			cin.ignore();
			enterMovieData(movieArray + (elementNumber - 1), elementNumber);
		}
		else if (selection == 4) {
			selectionSortMoviesByName(movieArray, movieArrayLength, false);
			cout << "Ascending sort complete.\n";
		}
		else if (selection == 5) {
			selectionSortMoviesByName(movieArray, movieArrayLength, true);
			cout << "Decending sort complete.\n";
		}
		else if (selection == 6) {
			cout << "Exiting...\n";
			break;
		}
		else {
			cout << "Try again.\n";
		}
	}
	return 0;
}
