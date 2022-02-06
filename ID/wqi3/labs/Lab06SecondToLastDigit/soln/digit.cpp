#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;

    number /= 10;           // get rid of the first digit.
    number = abs(number);   // get rid of the negative as % behaves slightly differently for negative numbers compared to positive numbers.

    int secondLastDigit = number % 10;  // modulus returns the remainder! this is what we need! (17 % 10 = 7 (the rightmost digit!))

    cout << secondLastDigit << endl;
    return 0;
}