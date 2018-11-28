#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {
	
	cout << "Swap Meet Report" << endl;
	cout << "Please enter an input filename: ";
	
	string file_name;
	cin >> file_name;
	
	ifstream input_file;
	input_file.open(file_name.c_str());
	
	if (!input_file) {
		cout << "Error opening filename: " << file_name << endl;
		return 1;
	}

	string lo_cost_name, hi_cost_name, alpha_first_name, alpha_last_name;
	float lo_cost_price, hi_cost_price, alpha_first_price, alpha_last_price;
	
	string current_item_name;
	float current_item_price;
	
	bool is_first = true;

	while (getline(input_file, current_item_name)) {
		input_file >> current_item_price;
		input_file.ignore();

		if (is_first) {
			// this is the first item, initialize everything to be the first item
			lo_cost_name = hi_cost_name = alpha_first_name = alpha_last_name = current_item_name;
			lo_cost_price = hi_cost_price = alpha_first_price = alpha_last_price = current_item_price;
			is_first = false;
		}
		if (alpha_last_name <current_item_name)
		{
			alpha_last_name = current_item_name;
		}
	}
	
	
	input_file.close();

	cout << fixed << setprecision(2);
	cout << "Alphabetically first: " << alpha_first_name << "($" << alpha_first_price << ")" << endl;
	cout << "Alphabetically last: " << alpha_last_name << "($" << alpha_last_price << ")" << endl;
	cout << "Most expensive: " << hi_cost_name << "($" << hi_cost_price << ")" << endl;
	cout << "Least expensive: " << lo_cost_name << "($" << lo_cost_price << ")" << endl;
	
	return 0;
}
