// Made by Isaac Joffe

#include <iostream>    // for cin and cout object
using namespace std;    // eliminate use of std:: prefix

// solves kattis problem available at
// "https://open.kattis.com/problems/harshadnumbers"

// takes an integer and returns the integer sum of its digits
int sum_digits(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;    // add least significant digit
        number /= 10;    // floor division to remove least significant digit
    }
    return sum;
}

// takes an integer from standard in and prints the smallest harshad number
// that is larger than the inputted integer to standard out
int main() {
    int number;
    cin >> number;
    while (true) {
        int sum = sum_digits(number);
        if (number % sum == 0) {
            break;    // exit if the sum is a factor of the number
        }
        number++;    // test next integer number
    }
    cout << number << endl;
    return 0;    // default return
}
