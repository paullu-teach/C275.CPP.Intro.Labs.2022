// Made by Isaac Joffe

#include <iostream>    // for cin and cout object
using namespace std;    // eliminate use of std:: prefix

// prints the first 20 fibonacci numbers to standard out
int main() {
    int next, previous = 0, current = 1;
    // print out trivial beginning numbers
    cout << previous << endl;
    cout << current << endl;
    // print out the next numbers in the series
    for (int i = 3; i <= 20; i++) {
        next = current + previous;    // next number is sum of the last two
        cout << next << endl;
        // update leading and trailing number in the sequence
        previous = current;
        current = next;
    }
    return 0;    // default return
}
