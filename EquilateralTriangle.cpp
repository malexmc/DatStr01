#include <iostream>
#include <cmath>
#include "Utilities.h"
#include "EquilateralTriangle.h"

using namespace std;

//constructor
//<Alex> the "Triangle(true)" bit calls the dummy Triangle constructor
// So that the verbose default Triangle constructor doesn't get called
EquilateralTriangle::EquilateralTriangle() : Triangle(true)
{
	cout << "Please enter the side length." << endl;
	side = Utilities::getPositiveDouble();
}

//calculates the area
double EquilateralTriangle::area()
{
	double pi = atan(1) * 4;
	double height = side * tan(pi / 3);
	return 0.5 * side * height;
}

//calculates the perimeter
double EquilateralTriangle::perimeter()
{
	return 3 * side;
}

//prints the area and perimeter
void EquilateralTriangle::printSelf()
{
	cout << "Perimiter: " << perimeter() << endl << "Area: " << area() << endl;
}
