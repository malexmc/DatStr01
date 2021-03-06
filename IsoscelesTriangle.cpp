#include <iostream>
#include <cmath>
#include "Utilities.h"
#include "IsoscelesTriangle.h"

using namespace std;

//constructor
//<Alex> the "Triangle(true)" bit specifically calls the dummy Triangle 
//constructor So that the verbose default Triangle constructor doesn't get 
//called
IsoscelesTriangle::IsoscelesTriangle() : Triangle(true)
{
	cout << "Please enter the length of the equal sides." << endl;
	double sides = Utilities::getPositiveDouble();

	cout << "Please enter the base length." << endl;
	base = Utilities::getPositiveDouble();
	height = sqrt(pow(sides,2) - (pow(base,2)/4));
}

//calculates the area
double IsoscelesTriangle::area()
{
	return 0.5 * base * height;
}

//calculates the perimeter
double IsoscelesTriangle::perimeter()
{
	return base + 2 * sqrt((base / 2) * (base / 2) + height * height);
}

//prints the area and perimeter
void IsoscelesTriangle::printSelf()
{
	cout << "Perimiter: " << perimeter() << endl << "Area: " << area() << endl;
}
