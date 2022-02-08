#include <iostream>

using namespace std;

int main() {
    // Take in the input
    int base;
    int power;

    cin >> base >> power;

    int result = 1; // n ** 0 = 1
    for (int i = 0; i < power; i++) {   // multiply power times.
        result *= base; // multiply by base until we reach the power needed!
    }

    cout << result << endl;

    return 0;
}