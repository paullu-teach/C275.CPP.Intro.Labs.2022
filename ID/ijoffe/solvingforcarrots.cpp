// Made by Isaac Joffe

#include <iostream>    // for cin and cout object
#include <string>    // for contestant descriptions
using namespace std;    // eliminate use of std:: prefix

// solves kattis problem available at
// "https://open.kattis.com/problems/carrots"

// takes two integers representing the number of contestants and number of
// problems as well as descriptions for each candidate from standard in and
// prints the number of carrots to be awarded to standard out
int main() {
    int contestants, problems;    // int type satisfies kattis input gurantees
    cin >> contestants >> problems;
    for (int i = 0; i < contestants; i++) {
        string description;
        cin >> description;
        // contestant descriptions are inconsequential, no operations required
    }
    // number of carrots given out is just the number of problems solved
    cout << problems << endl;
    return 0;    // default return
}
