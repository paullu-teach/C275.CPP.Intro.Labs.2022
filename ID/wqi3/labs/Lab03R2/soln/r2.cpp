/**
 * Lab 3 - R2
 * The purpose of this lab is to find the variable B in the equation (A + B) / 2 = S, given S and A
 * This can be found via: B = (S * 2) - A
*/

#include <iostream>

using namespace std;

int main() {
    int a = 0;
    int b = 0;
    int result = 0;

    // The original formula is (A + B) / 2 = result
    // we are given A and result
    cin >> a >> result;

    // Solving for B given the formula gives us (result * 2) - a
    b = (result * 2) - a;

    // Print out the missing variable
    cout << b << endl;
    return 0;
}