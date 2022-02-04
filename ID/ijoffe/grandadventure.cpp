// Made by Isaac Joffe

#include <iostream>    // for cin and cout object
#include <stack>    // used to represent the bag
#include <string>    // used to store input and output
using namespace std;    // eliminate use of std:: prefix

// solves kattis problem available at
// "https://open.kattis.com/problems/thegrandadventure"

// takes a string from standard in and returns whether or not Jim can make it
// through the adventure
string simulate_adventure() {
    string path;    // input representing path stored as a string
    cin >> path;
    stack<char> bag;    // bag is first-in = last-out, like a stack
    bag.push('\0');    // initialize bag so it is never empty

    bool flag = true;    // assume Jim can make it through
    for (long unsigned int i = 0; i < path.size(); i++) {
        if (path[i] == '$') {
            bag.push('$');    // add it to top of the bag
        } else if (path[i] == '|') {
            bag.push('|');    // add it to top of the bag
        } else if (path[i] == '*') {
            bag.push('*');    // add it to top of the bag

        } else if (path[i] == 'b') {
            if (bag.top() == '$') {
                bag.pop();    // give money to the banker
            } else {
                flag = false;    // Jim cant make it through
                break;
            }
        } else if (path[i] == 't') {
            if (bag.top() == '|') {
                bag.pop();    // give incense to the trader
            } else {
                flag = false;    // Jim cant make it through
                break;
            }
        } else if (path[i] == 'j') {
            if (bag.top() == '*') {
                bag.pop();    // give gems to the jeweler
            } else {
                flag = false;    // Jim cant make it through
                break;
            }
        }
    }

    if (bag.top() != '\0') {    // check if bag is empty
        flag = false;    // Jim failed his adventure
    }

    if (flag) {
        return("YES");
    } else {
        return("NO");
    }
}

// takes an integer from standard in and calls the simulation function to
// determine the adventure results, prints the results of teh adventure to
// standard out
int main() {
    int amount;
    cin >> amount;
    string output[5];    // at most 5 adventures

    for (int i = 0; i < amount; i++) {
        output[i] = simulate_adventure();    // process each string separately
    }

    for (int i = 0; i < amount; i++) {
        cout << output[i] << endl;
    }
    return 0;    // default return
}
