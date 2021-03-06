#include "Utilities.h"
#include <iostream>
#include "Square.h"

using namespace std;

//constructor
Square::Square()
{
	cout << "Please enter the side length." << endl;
	side = Utilities::getPositiveDouble();
}

//calculates the area
double Square::area()
{
	return side * side;
}

//calculates the perimeter
double Square::perimeter()
{
	return 4 * side;
}

//prints the area and perimeter
void Square::printSelf()
{
	cout << "Perimiter: " << perimeter() << endl << "Area: " << area() << endl;
}
