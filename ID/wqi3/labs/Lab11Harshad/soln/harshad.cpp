#include <iostream>

using namespace std;

/**
 * @brief Retrieve the sum of the digits in the integer given
 * 
 * @param n the integer
 * @return sum of the integer's digits
 */
int getSum(int n) {
    if (n == 0) {
        return 0;
    }
    return getSum(n / 10) + (n % 10);   // recursive loop to get the last digit and get the last digit of the number without the last digit.
                                        // this process is repeated until n == 0 (no more digits)
}

int main() {
    int input;
    cin >> input;

    // a harshad is a number such that it is evenly divisible by the usm of it's digits.
    
    int currentGuess = input;
    while (true) {  // We keep going until we find an answer!
        int sum = getSum(currentGuess); // get the sum of the digits

        if (currentGuess % sum == 0) {
            // evenly divisible!
            cout << currentGuess << endl;
            break;
        }
        
        currentGuess++; // go to the next number and try it!
    }

    return 0;
}