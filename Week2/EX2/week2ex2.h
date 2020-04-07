//*****************************************************************
// Author: Shawn Gibbons
// Class: CS206
// Instructor: Dr. Brian Ameling
// Date: March 15, 2020
// Week 2 Programming Exercise 2
//******************************************************************

#include <iostream>

using namespace std;

class counterType {
    public:
        int getCounter () const;
        void setCounter (int value);
        void increment ();
        void decrement();
    
    counterType (int value);
    
    private:
        int counter;

};

int counterType::getCounter() const {
    return counter;
}

void counterType::setCounter(int value) {
    if(value < 0) {
        value = 0;
    }
    counter = value;
}

void counterType::increment() {
    counter++;
}

void counterType::decrement() {
    if(counter > 0) {
        counter--;
    }
}

counterType::counterType (int value) {
    setCounter(value);
}
