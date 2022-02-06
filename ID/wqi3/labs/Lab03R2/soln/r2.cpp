#include <iostream>

using namespace std;

/**
 * @brief Finds B in the equation (A + B) / 2 = S given a and s
 * 
 * @param a a variable
 * @param s s variable
 * @return the b variable
 */
int findB(int a, int s);

int main() {
    int a = 0;
    int result = 0;

    // The original formula is (A + B) / 2 = result
    // we are given A and result
    cin >> a >> result;

    // Print out the missing variable
    cout << findB(a, result) << endl;
    
    return 0;
}

int findB(int a, int s) {
    // Solving for B given the formula gives us (result * 2) - a
    return (s * 2) - a;
}