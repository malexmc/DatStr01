#include <iostream>
#include "Utilities.h"
#include "Rectangle.h"

using namespace std;

//constructor
Rectangle::Rectangle()
{
	cout << "Please enter the length." << endl;
	length = Utilities::getPositiveDouble();
	
	cout << "Please enter the width." << endl;
	width = Utilities::getPositiveDouble();
}

//calculates the area
double Rectangle::area()
{
	return width * length;
}

//calculates the perimeter
double Rectangle::perimeter()
{
	return 2 * (width + length);
}

//prints the area and perimeter
void Rectangle::printSelf()
{
	cout << "Perimiter: " << perimeter() << endl << "Area: " << area() << endl;
}
