#include <iostream>

using namespace std;

/**
 * @brief Retrieve the sum of the digits in the integer given
 * 
 * @param n the integer
 * @return sum of the integer's digits
 */
int getSum(int n);

int main() {
    int input;
    cin >> input;

    int currentGuess = input;
    while (true) {
        int sum = getSum(currentGuess);

        if (currentGuess % sum == 0) {
            // evenly divisible!
            cout << currentGuess << endl;
            break;
        }
        
        currentGuess++;
    }

    return 0;
}

int getSum(int n) {
    if (n == 0) {
        return 0;
    }
    return getSum(n / 10) + (n % 10);
}