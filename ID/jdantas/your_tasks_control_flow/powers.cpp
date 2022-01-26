#include <iostream>
using namespace std;

int power (int a, int b); // Prototype of the power function.

 int main() {
    // Exercise: Powers
    int a, b;
    cin >> a >> b;

    cout << power(a, b);
    return 0;

 }

 // Exercise: Powers
int power (int a, int b) {
    int result = a;
    int i = 1;
    while (i < b) {
        result *= a; // We muliply a by itself b times
        i++;
    }
    return result; // return a^b
}