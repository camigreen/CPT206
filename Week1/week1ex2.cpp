//*****************************************************************
// Author: Shawn Gibbons
// Class: CS206
// Instructor: Dr. Brian Ameling
// Date: March 15, 2020
// Week 1 Assignment 1 Programming Exercise 2
//******************************************************************

#include <iostream>
#include <fstream>

using namespace std;

struct studentType {
    string studentFName;
    string studentLName;
    int testScore;
    char grade;
};

studentType students[20];
int studentCount = 0;

void getGrade(studentType& student) {
    if(student.testScore >= 90) {
        student.grade = 'A';
    } else if (student.testScore >= 80) {
        student.grade = 'B';
    } else if (student.testScore >= 70) {
        student.grade = 'C';
    } else if (student.testScore >= 60) {
        student.grade = 'D';
    } else {
        student.grade = 'F';
    }
    
}

void readIn (string inputFile) {
    ifstream inFile;
    int i = 0;
    
    inFile.open(inputFile.c_str());
    studentType newStudent;
    while(!inFile.eof()) {
        if(i == 0) {
            inFile >> newStudent.studentFName;
            i++;
        }else if (i == 1) {
            inFile >> newStudent.studentLName;
            i++;
        } else {
            inFile >> newStudent.testScore;
            i = 0;
            getGrade(newStudent);
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
            top = students[i].testScore;
        } else {
            if(top < students[i].testScore) {
                top = students[i].testScore;
            } 
        }
    }
    return top;
}

void printTopScores(int topScore) {
    int i;
    cout << "The Student(s) with the Highest Score:" << endl;
    for(i=0; i <= studentCount; i++) {
        if(students[i].testScore == topScore) {
            cout << students[i].studentLName << ", " << students[i].studentFName << endl;
        }
    }
}

int main() { 

    string inputFile = "data.txt";

    readIn(inputFile);

    printTopScores(getTopScore());
   
}