// Made by Isaac Joffe

#include <iostream>    // for cin and cout object
#include <string>    // to represented the words inputted
#include <vector>    // to hold the words inputted
#include <algorithm>    // for sort and find function
using namespace std;    // eliminate use of std:: prefix

// takes an arbitrary number of strings from standard in and prints all
// possible combinations of them in alphabetical order to standard out
int main() {
    string word;
    vector<string> words;    // to store basic strings inputted
    while (cin >> word) {
        words.push_back(word);
    }

    vector<string> compounds;     // to store the compund words
    for (unsigned long int i = 0; i < words.size(); i++) {
        for (unsigned long int j = 0; j < words.size(); j++) {
            // look at each possible string combination from inputs
            string compound = words[i] + words[j];
            if (i != j && find(compounds.begin(), compounds.end(), compound)
                == compounds.end()) {
                // only strings from distinct input strings that have not
                // already been created are to be noted
                compounds.push_back(compound);
            }
        }
    }
    sort(compounds.begin(), compounds.end());    // put in alphabetical order

    for (unsigned long int i = 0; i < compounds.size(); i++) {
        cout << compounds[i] << endl;
    }
    return 0;    // default return
}
