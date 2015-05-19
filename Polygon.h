#ifndef POLYGON_H
#define POLYGON_H

class Polygon
{
public:
    Polygon() {};
	virtual ~Polygon() {};
	
	//calculates the area
	virtual double area() = 0;
	
	//calculates the perimeter
	virtual double perimeter() = 0;
};

#endif //POLYGON_H
