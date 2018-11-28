#include <iostream>
using namespace std;
struct Car
{
	string make;
	string model;
	int yearModel;
	double cost;
};
int main()
{
	Car info={"Ford","Mustang",1968,20000};
	cout <<"Ford: " << info.make << endl;
	cout << "Model: " << info.model<<endl;
	cout << "Year Model: " << info.yearModel << endl;
	cout << "Cost: " << info.cost;
	
}
