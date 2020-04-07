//*****************************************************************
// Author: Shawn Gibbons
// Class: CS206
// Instructor: Dr. Brian Ameling
// Date: March 15, 2020
// Week 2 Programming Exercise 1
//******************************************************************

using namespace std;

class studentType {
    public:
        string getLastName () const;
        void setLastName (string lastName);
        string getFirstName () const;
        void setFirstName (string firstName);
        int getTestScore () const;
        void setTestScore (int testScore);
        char getGrade ();
    
    studentType (string lastName, string firstName, int testScore);
    
    private:
        string studentFName;
        string studentLName;
        int testScore;
        char grade;

};

string studentType::getLastName() const {
    return studentLName;
}

void studentType::setLastName(string lastName) {
    studentLName = lastName;
}

string studentType::getFirstName() const {
    return studentFName;
}

void studentType::setFirstName(string firstName) {
    studentFName = firstName;
}

int studentType::getTestScore() const {
    return testScore;
}

void studentType::setTestScore(int _testScore) {
    testScore = _testScore;
}

char studentType::getGrade() {
    if(testScore >= 90) {
        grade = 'A';
    } else if (testScore >= 80) {
        grade = 'B';
    } else if (testScore >= 70) {
        grade = 'C';
    } else if (testScore >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    return grade;
}

studentType::studentType (string lastName = "", string firstName = "", int testScore = 0) {
    setFirstName(firstName);
    setLastName(lastName);
    setTestScore(testScore);
}
