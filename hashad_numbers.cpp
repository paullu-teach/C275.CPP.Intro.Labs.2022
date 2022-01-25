#include <iostream>
using namespace std;

bool findIfDivisible ( int N ); // We set up a function protype of 
// findIfDivisible which we will be using to find 

 int main() {
    // Task 2: Hashard Numbers
    int N;
    cin >> N;

    while (findIfDivisible(N) == false) {
        // While we do not find a hashard number, we keep looping
        N++;
    }
    cout << N;
    return 0;
 }

 bool findIfDivisible ( int N ) {
    int temporary_N = N, temporary_N2 = N, i = 0;

    temporary_N = N;
    temporary_N2 = N;

    while (temporary_N > 1) {
        // we calculate the number of digits in N (stored in i)
        temporary_N /= 10;
        i++;
    }

    int number_of_digits = i;

    int list_of_digits[number_of_digits];

    int j = 0;
    while (j < i) {
        list_of_digits[j] = (temporary_N2 % 10); // we get the remainder by
        //dividing by ten to keep getting the last digit until we reach no 
        // longer have digits (the number of digits in N, is i)
        temporary_N2 /= 10;
        j++;
        // here is how we store all of the digits of N
    }

    int result = 0;
    // We will iterate through the list of digits and adding them up together
    for (int k : list_of_digits) {
        result += k;
    }

    if ((N % result) == 0) {
        // returns true if N divided by the addition of all the digits is
        // equal to 0 (it is divisible by the addition of its digits)
        return true;
    } else {
        // if N is not divisible by the addition of its digits, then we return false
        return false;
    }
}