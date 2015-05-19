#include <iostream>
#include <cmath>
#include "Utilities.h"
#include "Triangle.h"

using namespace std; 

//default constructor
Triangle::Triangle()
{
	cout << "Please enter the first side length." << endl;
	side1 = Utilities::getPositiveDouble();
	
	cout << "Please enter the second side length." << endl;
	side2 = Utilities::getPositiveDouble();
	
	cout << "Please enter the third side length." << endl;
	side3 = Utilities::getPositiveDouble();
	
	semiperimeter = (side1 + side2 + side3) / 2;
	
}

//dummy constructor- called when the other triangle classes
//don't want the Triangle default constructor to run.
Triangle::Triangle(bool ignore_me){}


//calculates the area
double Triangle::area()
{
	return sqrt(semiperimeter * (semiperimeter - side1) * (semiperimeter - side2) * (semiperimeter * side3));
}

//calculates the perimeter
double Triangle::perimeter()
{
	return side1 + side2 + side3;
}

//prints the area and perimeter
void Triangle::printSelf()
{
	cout << "Perimiter: " << perimeter() << endl << "Area: " << area() << endl;
}

