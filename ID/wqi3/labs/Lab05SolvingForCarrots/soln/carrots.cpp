#include <iostream>

using namespace std;

// This lab is a trick question. The answer is given to us in the input.
int main() {
    int contestants;
    int problemsSolved;
    cin >> contestants >> problemsSolved;

    // There is no need to process the descriptions because they're pointless to the question.

    // the amount of carrots handed out is the amount of problems completed. (1 problem completion = 1 carrot)
    cout << problemsSolved << endl;
    return 0;
}