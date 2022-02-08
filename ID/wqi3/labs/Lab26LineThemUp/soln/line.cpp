#include <iostream>

using namespace std;

int main() {
    int amountOfNames;
    cin >> amountOfNames;
    
    // There is guarenteed to be at least two names. Let's figure out the order from those two names
    string nameA;
    string nameB;
    cin >> nameA >> nameB;
    bool isIncreasing = nameB > nameA;

    // Now we can iterate through the remaining names and if any of them do not match isIncreasing, then we print "NEITHER"
    string previousName = nameB;
    for (int i = 2; i < amountOfNames; i++) {
        string currentName;
        cin >> currentName;

        bool isNeitherIncreasingOrDecreasing = (currentName > previousName && !isIncreasing) || (currentName < previousName && isIncreasing);
        if (isNeitherIncreasingOrDecreasing) {
            cout << "NEITHER" << endl;
            return 0;
        }
    }

    // all names followed 1 specific order. Success!
    if (isIncreasing) {
        cout << "INCREASING" << endl;
    } else {
        cout << "DECREASING" << endl;
    }
    return 0;
}