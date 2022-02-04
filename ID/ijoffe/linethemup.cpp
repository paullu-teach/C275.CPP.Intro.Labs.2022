// Made by Isaac Joffe

#include <iostream>    // for cin and cout object
#include <string>    // to hold the names of the players
#include <vector>    // to hold and sort the names of the players
#include <algorithm>    // to sort the vector
using namespace std;    // eliminate use of std:: prefix

// solves kattis problem available at
// "https://open.kattis.com/problems/lineup"

// takes an integer and a list of names of that integers length and prints
// if the names are given in alphabetical, reverse alphabetical, or no
// particluar order
int main() {
    int amount;
    cin >> amount;
    // create three parallel vectors to hold the names
    vector<string> normal, flipped, sorted;
    for (int i = 0; i < amount; i++) {
        string name;
        cin >> name;
        // add the name to each of the vectors
        normal.push_back(name);
        flipped.push_back(name);
        sorted.push_back(name);
    }
    reverse(flipped.begin(), flipped.end());     // flip one of the vectors
    sort(sorted.begin(), sorted.end());    // sort one of the vectors

    if (normal == sorted) {
        // if original order is same as sorted order, it is increasing order
        cout << "INCREASING" << endl;
    } else if (flipped == sorted) {
        // if original order is opposite of sorted order, it is decreasing
        cout << "DECREASING" << endl;
    } else {
        // otherwise it is in no alphabetical order
        cout << "NEITHER" << endl;
    }
    return 0;    // default return
}
