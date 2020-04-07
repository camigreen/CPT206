//*****************************************************************
// Author: Shawn Gibbons
// Class: CS206
// Instructor: Dr. Brian Ameling
// Date: March 15, 2020
// Week 1 Assignment 1 Programming Exercise 2
//******************************************************************

#include <iostream>
#include <fstream>
#include "week2ex1.h"

using namespace std;

studentType students[20];
int studentCount = 0;

void readIn (string inputFile) {
    ifstream inFile;
    int i = 0;
    
    inFile.open(inputFile.c_str());
    string lastName;
    string firstName;
    int testScore;
    while(!inFile.eof()) {
        if(i == 0) {
            inFile >> firstName;
            i++;
        }else if (i == 1) {
            inFile >> lastName;
            i++;
        } else {
            inFile >> testScore;
            i = 0;
            studentType newStudent(lastName, firstName, testScore);
            students[studentCount] = newStudent;
            studentCount++;
        }

        if(inFile.eof()) {
            break;
        }
        
        
    }

}

int getTopScore () {
    int i;
    int top;

    for(i=0; i <= studentCount; i++) {
        if(i == 0) {
            top = students[i].getTestScore();
        } else {
            if(top < students[i].getTestScore()) {
                top = students[i].getTestScore();
            } 
        }
    }
    return top;
}

void printTopScores(int topScore) {
    int i;
    cout << "The Student(s) with the Highest Score:" << endl;
    for(i=0; i <= studentCount; i++) {
        if(students[i].getTestScore() == topScore) {
            cout << students[i].getLastName() << ", " << students[i].getFirstName() << endl;
        }
    }
}

int main() { 

    string inputFile = "data.txt";

    readIn(inputFile);

    printTopScores(getTopScore());
   
}