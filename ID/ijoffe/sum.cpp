// Made by Isaac Joffe

#include <iostream>    // for cin and cout objects
using namespace std;    // eliminates use of std:: prefix

// takes two integers from standard in and prints their sum to standard out
int main() {
    int number1, number2, sum;
    cin >> number1 >> number2;
    sum = number1 + number2;
    cout << sum << endl;
    return 0;    // default return
}
