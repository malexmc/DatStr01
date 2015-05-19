/*

Authors: William Hauber
         John Mikolay
         Matthew McClellan
Course Title: Data Structures
Course Number: CS2028
Instructor: Anca Ralescu
TA: Suryadip Chakraborty
Abstract: Assignment 1 main.cpp uses the abstract interface Polygon and 
abstract functions area() and perimeter() to implement classes for 
Triangles, Squares, rectangles, pentagons, hexagons, and octagons  
and to compute their respective areas and perimeters
Preconditions: 
Postconditions:
Credits:
	Dr. Paul Talaga for his life-saving Makefile
*/

#include <iostream>
#include "Triangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Square.h"
#include "Rectangle.h"

using namespace std;


//Have the user choose between different types of polygons to generate
//via menu prompt. Once all information is gathered from th user, will
//output the area and perimeter of the polygon.
int main(){
    // Makes some white space
	for (unsigned int i = 0 ; i < 100; i++){
		cout << "\n";
	}
	
	//First menu prompt where the user chooses how many sides they
	//Want in their Polygon
	cout << "Choose the number of sides for your polygon:\nTriangle[3]"
	<< "\nQuadrilateral[4]\nPentagon[5]\nHexagon[6]\nOctagon[8]\n :";
	unsigned short sides = 0;
	cin >> sides;
	
    // If the user asked for a three-sided polygon, Have them choose between
    // Scalene, Isosceles, and Equilateral Triangles.
	if(sides == 3){
	    cout << "\nEnter the number for the type of triangle would you like to"
	            << " create\nScalene[1]\nIsoceles[2]\nEquilateral[3]\n :";
        unsigned short tri_type = 0;
        cin >> tri_type;
        
        //Do Scalene (Default) calculations
        if(tri_type == 1){
            Triangle* our_triangle = new Triangle();
			our_triangle->printSelf();
			delete our_triangle;
        }
        
        //Do Isosceles calculations
        else if(tri_type == 2){
            IsoscelesTriangle* our_triangle = new IsoscelesTriangle();
			our_triangle->printSelf();
			delete our_triangle;
        }
        
        //Do Equilateral calculations
        else if(tri_type == 3){
            EquilateralTriangle* our_triangle = new EquilateralTriangle();
			our_triangle->printSelf();
			delete our_triangle;
        }
	}


    // If the user asked for a four-sided polygon, Have them choose between
    //Square and rectangle
    if(sides == 4){
        cout <<"\nEnter the number for the type of quadrilateral you would like"
                << " to create:\nRectangle[1]\nSquare[2]\n :";
        unsigned short quad_type = 0;
        cin >> quad_type;
        
        //Do rectangle calculations
        if(quad_type == 1){
            Rectangle* our_rectangle = new Rectangle();
			our_rectangle->printSelf();
			delete our_rectangle;
        }
        //Do rectangle calculations
        else if(quad_type == 2){
            Square* our_square = new Square();
			our_square->printSelf();
			delete our_square;
        }
    }

//    if(sides == 5){
//        Pentagon* our_pentagon = new Pentagon();
//        our_pentagon->printSelf();
//        delete our_pentagon ;           
//    }
//    else if(sides == 6){
//        Hexagon* our_hexagon = new Hexagon();
//        our_hexagon->printSelf();
//        delete our_hexagon;
//    }
//    else if(sides == 8){
//        Octagon* our_octagon = new Octagon();
//        our_octagon->printSelf();
//        delete our_octagon;
//    }
	return 0;
}
