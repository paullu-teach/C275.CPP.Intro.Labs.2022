// Made by Isaac Joffe

#include <iostream>    // for cin and cout object
using namespace std;    // eliminate use of std:: prefix

// solves kattis problem available at
// "https://open.kattis.com/problems/lastfactorialdigit"

// takes an integer and recurively determines its factorial
int factorial(int number) {
    int result;
    if (number > 1) {
        // recurse down into a simpler factorial
        result = number * factorial(number - 1);
    } else {
        result = 1;    // base case for 0 or 1 factorial
    }
    return result;
}

// takes an integer representing the number of integers to take in from
// standard in and prints the last digit in each of the input integers
// factorial to standard out
int main() {
    // integer type satisfies kattis input gurantees, at most 10 test cases
    int amount, digit[10];
    cin >> amount;
    for (int i = 0; i < amount; i++) {
        int number;
        cin >> number;
        digit[i] = factorial(number) % 10;    // last digit is modulus over 10
    }

    for (int i = 0; i < amount; i++) {
        cout << digit[i] << endl;    // print all together
    }
    return 0;    // default return
}
