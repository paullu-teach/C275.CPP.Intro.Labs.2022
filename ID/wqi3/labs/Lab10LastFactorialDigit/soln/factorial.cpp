#include <iostream>

using namespace std;

int main() {
    // get the amount of factorials to parse
    int factorials;
    cin >> factorials;

    for (int i = 0; i < factorials; i++) {
        int currentFactorialParsing;
        cin >> currentFactorialParsing;

        // After observing factorials, it can be seen that any factorial >= 5, has 0 as the last digit.
        int result = 0;
        if (currentFactorialParsing < 5) {
            switch (currentFactorialParsing) {
                case 1:
                    result = 1;
                break;
                case 2:
                    result = 2;
                break;
                case 3:
                    result = 6;
                break;
                case 4:
                    result = 4; // 24 is 4!, but we only want the last digit
                break;
            }
        }

        cout << result << endl;
    }
    return 0;
}