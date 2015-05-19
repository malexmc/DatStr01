#include "Polygon.h"

#ifndef TRIANGLE_H
#define TRIANGLE_H
class Triangle : public Polygon
{
public:
	Triangle();

// <Alex>  Had to create this dummy constructor so that all of the inherited
// triangles don't call the default Triangle constructor and ask for information
// that they don't need. Inherited constructors call this dummy one instead before
// their own.
	Triangle(bool ignore_me);
	virtual ~Triangle() {};
	
	//prints the area and perimeter
	void printSelf(); 
	
	//calculates the area
	double area();
	
	//calculates the perimeter
	double perimeter();
	
private:
	double side1;
	double side2;
	double side3;
	double semiperimeter;
};

#endif //TRIANGLE_H
