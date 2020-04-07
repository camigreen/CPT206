//*****************************************************************
// Author: Shawn Gibbons
// Class: CS206
// Instructor: Dr. Brian Ameling
// Date: March 15, 2020
// Week 3 Programming Exercise 4
//******************************************************************

#include <iostream>
#include <iomanip>
#include "cylinderType.h"

using namespace std;

int main()
{
	cylinderType cylinder1;
	
	double radius;
    double height;
    double shipCost;
    double paintCost;
	
	cout << fixed << showpoint << setprecision(2);
		 
	cout << "Enter the radius of the container (in feet): ";
	cin >> radius;
	cout << endl;

    cout << "Enter the height of the container (in feet): ";
	cin >> height;
	cout << endl;

    cylinder1.setHeight(height);
    cylinder1.setRadius(radius);

    cout << "Enter the shipping cost per liter: $";
	cin >> shipCost;
	cout << endl;

    cout << "Enter the painting cost per square foot of the container: $";
	cin >> paintCost;
	cout << endl;

    cout << "The shipping cost of the container is: $" << (cylinder1.getVolume()*28.32)*shipCost << endl;
    cout << "The painting cost of the container is: $" << cylinder1.getSurfaceArea()*paintCost << endl;


	return 0;		 
}//end main