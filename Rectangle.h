#include "Quadrilateral.h"

class Rectangle : Quadrilateral
{
public:
	Rectangle();
	virtual ~Rectangle() {}
	
	//prints the area and perimeter
	void printSelf();
	
	//calculates the area
	double area();
	
	//calculates the area
	double perimeter();
	
private:
	double length;
	double width;
};
