#include <iostream>
using namespace std;
struct TempScale
{
	double fahrenheit;
	double centigrade;	
};
struct Reading
{
	int windSpeed;
	double humidity;
	TempScale temperature;
		
};
int main()
{
	
	Reading temp;
	Reading *rptr;
	
	temp.windSpeed = 25;
	cout << temp.windSpeed << endl;
	rptr = &temp;
	(*rptr).windSpeed = 50;
	cout << rptr->windSpeed << endl;
	
	
	
	return 0;
}
