#include <iostream>

using namespace std;

/**
 * @brief Finds B in the equation (A + B) / 2 = R given a and r
 * 
 * @param a a variable
 * @param r r variable
 * @return the b variable
 */
int findB(int a, int r);

int main() {
    int a = 0;
    int result = 0;

    // The original formula is (A + B) / 2 = R
    // we are given A and R
    cin >> a >> result;

    // Print out the missing variable
    cout << findB(a, result) << endl;
    
    return 0;
}

int findB(int a, int r) {
    // Solving for B given the formula gives us (result * 2) - a
    return (r * 2) - a;
}