#include <iostream>
using namespace std;

int last_Factorial_digit (int N); // A prototype of the last_Factorial_digit 
// function

 int main() {
    // Task 1
    int T; // the number of test cases
    cin >> T;


    int array_of_Ns[T];

    for (int i = 0; i < T; i++) {
        cin >> array_of_Ns[i];
        // we ask the user for input i in range T (one time for
        // each number we want the last factorial of)

    }

    for (int j = 0; j < T; j++) {
        int current_N = array_of_Ns[j];
        int last_Factorial = last_Factorial_digit(current_N);
        // we calculate and print out the last factorial digit of that
        // number
        cout << last_Factorial << endl;
    }
    return 0;
 }


int last_Factorial_digit (int N) {
    int result = 1;
    for (int i = 2; i <= N; i++) {
        result *= i; // We keep muliplying 1*2*3*...*N until we reach N
    }
    return result;
}