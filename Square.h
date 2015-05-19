#include "Quadrilateral.h"

class Square : Quadrilateral
{
public:
	Square();
	virtual ~Square() {}
	
	//prints the area and perimeter
	void printSelf();
	
	//calculates the area
	double area();
	
	//calculates the perimeter
	double perimeter();
	
private:
	double side;
};
