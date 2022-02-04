// Made by Isaac Joffe

#include <iostream>    // for cin and cout object
#include <vector>    // to store winners
#include <string>    // to store team names
#include <unordered_set>    // to store university names
using namespace std;    // eliminate use of std:: prefix

// solves kattis problem available at
// "https://open.kattis.com/problems/icpcawards"

// takes an integer length and a ranked list of teams with their universities
// of that length from standard in and prints the top 12 teams from different
// universities to standard out
int main() {
    int amount;
    cin >> amount;
    vector<string> winners;    // used to store the 12 winners
    unordered_set<string> universities;    // used to store universities seen

    for (int i = 0; i < amount; i++) {
        string university, team;    // for the current team in the sequence
        cin >> university >> team;
        if (winners.size() < 12 &&
            universities.find(university) == universities.end()) {
            // only entered if in the top 12 and from a unique university
            universities.insert(university);
            winners.push_back(university + " " + team);
        }
    }

    for (int i = 0; i < 12; i++) {
        cout << winners[i] << endl;    // prints winners in order
    }
    return 0;    // default return
}
