#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/**
 * @brief Compares the strings by just the first 2 characters in the string.
 * 
 * @param stringA the first string
 * @param strignB the second string
 * @return sort order
 */
bool compareByFirstTwoCharacters(string stringA, string strignB);

bool compareByFirstTwoCharacters(string stringA, string stringB) {
    return stringA.substr(0, 2) < stringB.substr(0, 2);
}

int main() {
    // since there is multiple possible groups of last names, we cannot assume there is only 1.
    int amountOfLastNames;
    bool pastFirstIteration = false;    // the output has a newline between each integer. We use this boolean to only print the new line at the beginning AFTER the first iteration.
    while (cin >> amountOfLastNames) {  
        if (pastFirstIteration) {
            cout << endl;
        }

        // First, collect all of the last names for this group of last names
        vector<string> lastNames;
        for (int i = 0; i < amountOfLastNames; i++) {
            string lastName;
            cin >> lastName;
            lastNames.push_back(lastName);
        }

        // sort only by the first 2 characters of each last name!
        stable_sort(lastNames.begin(), lastNames.end(), compareByFirstTwoCharacters);

        // output the sorted last names
        for (string lastName : lastNames) {
            cout << lastName << endl;
        }

        pastFirstIteration = true;  // every group following should print a newline at the start to match the desired output!
    }
    return 0;
}