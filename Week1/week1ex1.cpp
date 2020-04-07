//*****************************************************************
// Author: Shawn Gibbons
// Class: CS206
// Instructor: Dr. Brian Ameling
// Date: March 15, 2020
// Week 1 Assignment 1 Programming Exercise 1
//******************************************************************

#include <iostream>

using namespace std;

struct computerType {
    string manufacturer;
    string model;
    string processor;
    int ram;
    int hard_drive_size;
    int year;
    double price;
};


int main() { 

   computerType computer;

    cin >> computer.manufacturer;
    cin >> computer.model;
    cin >> computer.processor;
    cin >> computer.ram;
    cin >> computer.hard_drive_size;
    cin >> computer.year;
    cin >> computer.price;

    cout << "Manufacturer: " << computer.manufacturer << endl;
    cout << "Model: " << computer.model << endl;
    cout << "Processor: " << computer.processor << endl;
    cout << "RAM: " << computer.ram << endl;
    cout << "Hard Drive Size: " << computer.hard_drive_size << endl;
    cout << "Year Built: " << computer.year << endl;
    cout << "Price: $" << computer.price << endl;
}