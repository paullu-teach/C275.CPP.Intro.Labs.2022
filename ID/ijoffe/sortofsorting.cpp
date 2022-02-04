// Made by Isaac Joffe

#include <iostream>    // for cin and cout object
#include <string>    // to hold names to be sorted
#include <vector>    // to hold the sorted names
#include <queue>    // to hold outputs
#include <algorithm>    // for stable sort function
using namespace std;    // eliminate use of std:: prefix

// solves kattis problem available at
// "https://open.kattis.com/problems/sortofsorting"

// takes an integer length and that number of words from standard in and
// returns a vector of those words in a sorted order according to their
// first two letters
vector<string> sort_of_sorting(int number) {
    vector<string> sorted, names;
    for (int i = 0; i < number; i++) {
        string name;
        cin >> name;
        names.push_back(name);    // keep track of original orders of names
        sorted.push_back(name);    // vector to be sorted
    }

    stable_sort(sorted.begin(), sorted.end());    // sort words alphabetically
    // not ideal algorithm, only solution i could figure out
    // apply bubblesort algorithm to move any words beginning with the same
    // two letters so that they appear in their original order
    for (unsigned long int i = 0; i < sorted.size() - 1; i++) {
        for (unsigned long int j = 0; j < sorted.size() - i - 1; j++) {
            // check if the elements have identical beginnings and check if
            // they appear out of order according to their input order
            if (((sorted[j]).substr(0, 2) == (sorted[j + 1]).substr(0, 2)) &&
            find(names.begin(), names.end(), sorted[j]) >
            find(names.begin(), names.end(), sorted[j + 1])) {
                // swap elements using the temporary storage spot
                string temporary = sorted[j];
                sorted[j] = sorted[j + 1];
                sorted[j + 1] = temporary;
            }
        }
    }
    return sorted;
}

// takes an integer from standard in and prints each set of words in their
// sort-of-sorted order to standard out
int main() {
    int amount = 0;
    queue<vector<string>> sorted;    // for outputs
    while (true) {
        int number;
        cin >> number;
        if (number == 0) {
            break;    // no more tests to be read
        } else {
            // call function to sort input and save in the outputs variable
            vector<string> names = sort_of_sorting(number);
            sorted.push(names);
        }
        amount++;    // one more output set to print
    }

    for (int i = 0; i < amount; i++) {
        vector<string> names = sorted.front();
        for (unsigned long int j = 0; j < names.size(); j++) {
            cout << names[j] << endl;    // print words on separate lines
        }
        sorted.pop();    // get rid of words just printed
        if (!sorted.empty()) {
            cout << endl;    // only newline if more outputs remain
        }
    }
    return 0;    // default return
}
