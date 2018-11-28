#include "Rectangle.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Rectangle::Rectangle(double w, double len)
{
	width = w;
	length = len;
}
void Rectangle::setWidth(double w)
{
	if (w>0)
	{
		width = w;
		
	}
	else
	{
		cout << "Invalid Width\n";
		exit (EXIT_FAILURE);
		
	}
}

void Rectangle::setLength(double len)
{
	if (len>0)
	{
		length = len;
		
	}
	else
	{
		cout << "Invalid Length\n";
		exit (EXIT_FAILURE);
		
	}
	
}

