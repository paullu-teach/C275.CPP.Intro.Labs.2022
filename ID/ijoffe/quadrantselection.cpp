// Made by Isaac Joffe

#include <iostream>    // for cin and cout object
using namespace std;    // eliminate use of std:: prefix

// solves kattis problem available at
// "https://open.kattis.com/problems/quadrant"

// takes two integers from standard in representing a point in R^2 and prints
// the integer quadrant number to standard out
int main() {
    int x, y;    // int type satisfies the kattis input gurantees
    cin >> x >> y;
    // quadrants are numbered 1-4 moving counterclockwise starting from x+/y+
    if (x > 0 && y > 0) {
        cout << 1 << endl;
    } else if (x < 0 && y > 0) {
        cout << 2 << endl;
    } else if (x < 0 && y < 0) {
        cout << 3 << endl;
    } else if (x > 0 && y < 0) {
        cout << 4 << endl;
    } else {
        cout << "origin" << endl;    // extra functionality for (0,0) case
    }
    return 0;    // default return
}
