//*****************************************************************
// Author: Shawn Gibbons
// Class: CS206
// Instructor: Dr. Brian Ameling
// Date: March 15, 2020
// Week 3 Programming Exercise 4
//******************************************************************

#include "circleType.h"

class cylinderType: public circleType
{
public:

    void setHeight(double);
    double getVolume();
    double getSurfaceArea();
	
    cylinderType();
	cylinderType(double, double h = 0);
		//Constructor with a default parameter.
		//Radius is set according to the parameter.
		//The default value of the radius is 0.0;
        //The default value of the height is 0.0
		//Postcondition: radius = r;
        //Postcondition: height = h;

private:
    double height;
};

void cylinderType::setHeight(double h) {
    height = h;
}

double cylinderType::getVolume() {
    return circleType::area() * height;
}

double cylinderType::getSurfaceArea() {
    return height * circleType::circumference();
}

cylinderType::cylinderType() : circleType() {

}

cylinderType::cylinderType(double r, double h) : circleType(r) {
    setHeight(h);
}