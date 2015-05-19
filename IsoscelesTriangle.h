#include "Triangle.h"

class IsoscelesTriangle : public Triangle
{
public:
	IsoscelesTriangle();
	virtual ~IsoscelesTriangle() {}
	
	//prints the area and perimeter
	void printSelf();
	
	//calculates the area
	double area();
	
	//calculates the perimeter
	double perimeter();
	
private:
	double height;
	double base;
};
