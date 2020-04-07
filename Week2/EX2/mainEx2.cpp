//*****************************************************************
// Author: Shawn Gibbons
// Class: CS206
// Instructor: Dr. Brian Ameling
// Date: March 15, 2020
// Week 1 Assignment 1 Programming Exercise 2
//******************************************************************

#include <iostream>
#include <conio.h>
#include "week2ex2.h"

using namespace std;    

#define KEY_UP 72
#define KEY_DOWN 80
counterType counter(0);

int main() { 

    cout << "Your counter is initialized." << endl;
    cout << "Press Up Arrow to Increment. Press Down Arrow to Decrement." << endl;

    int c = 0;
    while(1)
    {
        c = 0;
        switch((c=getch())) {
        case KEY_UP:
            counter.increment();
            break;
        case KEY_DOWN:
            counter.decrement();
            break;
        default:
            continue;
            break;
        }
        cout << "Counter: " << counter.getCounter() << endl;
    }
   
}