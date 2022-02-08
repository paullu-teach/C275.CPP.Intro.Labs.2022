#include <iostream>

using namespace std;

int main() {
    int lastInteger = 0;
    int currentInteger = 1;

    // The first fib number is 0.
    cout << 0 << endl;

    // Fib numbers are calculated by taking the last integer, and adding it to your current one. the process is repeated as many times as needed.
    for (int i = 0; i < 19; i++) {
        cout << currentInteger << endl;
        
        int temp = lastInteger; // temporarily store value so we can add it to currentInteger afterwards
        lastInteger = currentInteger;

        currentInteger += temp;
    }

    return 0;
}