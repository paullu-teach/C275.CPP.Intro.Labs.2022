// Made by Isaac Joffe

#include <iostream>    // for cin and cout object
using namespace std;    // eliminate use of std:: prefix

// takes two integers from standard in and prints the value of the first
// integer to the power of the second to standard out
int main() {
    int base, exponent, result = 1;
    cin >> base >> exponent;
    for (int i = 0; i < exponent; i++) {
        result *= base;    // multiply base with itself exponent times
    }
    cout << result << endl;
    return 0;    // default return
}
