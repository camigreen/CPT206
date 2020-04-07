//*****************************************************************
// Author: Shawn Gibbons
// Class: CS206
// Instructor: Dr. Brian Ameling
// Date: March 15, 2020
// Week 4 Programming Exercise 3
//
// Write a program that allows the user to enter the last names of five candidates in a local election and the number of votes received by each candidate. The program should then output each candidate’s name, the number of votes received, and the percentage of the total votes received by the candidate. Your program should also output the win- ner of the election. A sample output is:
// 
// 
// Candidate	Votes Received	% of Total Votes
// Johnson		5000 			25.91
// Miller 		4000 			20.73
// Duffy 		6000 			31.09
// Robinson 	2500 			12.95
// Ashtony		1800 			9.33
// Total		19300
//      
// The Winner of the Election is Duffy.
//******************************************************************


#include <iostream>
#include <iomanip>

using namespace std;

struct candidate{
    string name;
    int votes = 0;
    double percentage;
};

candidate findWinner(candidate *table, int rowCount);
void printResults(candidate *table, int rowCount, int voteCount);
void calculatePercentages(candidate* &table, int rowCount, int voteCount);

int main()
{
	candidate *table;
	int CANDIDATE_COUNT;
    string candidateName;
    int candidateVotes;
	int voteCount = 0;
    
    cout << "Please input the number of candidates in the election: ";
	cin >> CANDIDATE_COUNT;
	table = new candidate [CANDIDATE_COUNT];

	cout << "Please input the candidate's name and the number of votes they received (Jones 1000): " << endl;
	for (int i = 0; i < CANDIDATE_COUNT; i++) 
	{
        cout << "Candidate " << i+1 << ": ";
		cin >> candidateName >> candidateVotes;
		candidate row;
		row.name = candidateName;
		row.votes = candidateVotes;
		table[i] = row;
		voteCount = voteCount + candidateVotes;
	}
	calculatePercentages(table, CANDIDATE_COUNT, voteCount);
    printResults(table, CANDIDATE_COUNT, voteCount);

    cout << "The winner of the election is: " << findWinner(table, CANDIDATE_COUNT).name << endl;
    return 0;
}

void calculatePercentages(candidate* &table, int rowCount, int voteCount){
    for (int i = 0; i < rowCount; i++) {
        table[i].percentage = (static_cast<double>(table[i].votes)/ voteCount)*100;
    }
}


void printResults(candidate *table, int rowCount, int voteCount){
    cout << "Name:" << setw(15) << "Votes:" << setw(15) << "Percentage:" << endl;
    
    for (int i = 0; i < rowCount; i++) {
		cout << table[i].name << setw(15) << table[i].votes << setw(15) << setprecision(2) << table[i].percentage << "%" << endl;
    }
    cout << "Total" << setw(15) << voteCount;
}

candidate findWinner(candidate *table, int rowCount){
	candidate winner;
    for (int i = 0; i < rowCount; i++) {
        if (table[i].votes > winner.votes)
            winner = table[i];
    }
    return winner;
}




