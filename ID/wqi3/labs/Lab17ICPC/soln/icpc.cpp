#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    // get contestants input
    int contestants;
    cin >> contestants;
    cin.ignore();

    unordered_set<string> winners;  // stores all universities that won

    for (int i = 0; i < contestants; i++) {
        string fullInput;
        getline(cin, fullInput);    // get university description

        string university = fullInput.substr(0, fullInput.find(" "));   // parsing the string to ONLY get the university code

        if (winners.find(university) == winners.end()) {    // if true, the university does not exist in the hashtable.
            winners.insert(university); // add it to the hashtable to not have duplicate university winners
            cout << fullInput << endl;  // print university description
        }

        // ensure that we only print out 12 lines.
        int currentWinnerCount = winners.size();
        if (currentWinnerCount == 12) { // if winners.size() is 12, that means we have 12 winners.
            break;  // ONLY 12 winners!
        }
    }

    return 0;
}
