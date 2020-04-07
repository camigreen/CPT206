//*****************************************************************
// Author: Shawn Gibbons
// Class: CS206
// Instructor: Dr. Brian Ameling
// Date: March 15, 2020
// Week 3 Programming Exercise 1
//******************************************************************

class extClockType: public clockType
{
public:
    void getTime(int&, int&, int&, string&) const;
    void setTime(int, int, int, string);
	void printTime() const;
    extClockType();
    extClockType(int, int, int, string);

private:
    string tZ;
};

void extClockType::getTime(int& hours, int& minutes, int& seconds, string& timeZone) const
{
	clockType::getTime(hours, minutes, seconds);
    timeZone = tZ;
}

void extClockType::setTime(int hours, int minutes, int seconds, string timeZone)
{
	clockType::setTime(hours, minutes, seconds);
    if(timeZone == "EST" || timeZone == "CST" || timeZone == "MT" || timeZone == "PST") {
        tZ = timeZone;
    } else {
        tZ = "";
    }
}

void extClockType::printTime() const
{
    clockType::printTime();
	cout << " " << tZ;
}

extClockType::extClockType() : clockType()
{

}

extClockType::extClockType(int hours, int minutes, int seconds, string timeZone) : clockType(hours, minutes, seconds)
{
    tZ = timeZone;
}
