#include "Triangle.h"

class EquilateralTriangle : public Triangle
{
public:
	EquilateralTriangle();
	virtual ~EquilateralTriangle() {}
	
	//prints the area and perimeter
	void printSelf();
	
	//calculates the area and perimeter
	double area();
	
	//calculates the perimeter
	double perimeter();
	
private:
	double side;
};
