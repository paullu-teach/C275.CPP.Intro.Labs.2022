#include <iostream>

using namespace std;

// This lab is a trick question. The answer is given to us in the input.
int main() {
    int contestants;
    int problemsSolved;
    cin >> contestants >> problemsSolved;

    for (int i = 0; i < contestants; i++) {
        string description;
        cin >> description;
    }

    // the amount of carrots handed out is the amount of problems completed. (1 problem completion = 1 carrot)
    cout << problemsSolved << endl;
    return 0;
}