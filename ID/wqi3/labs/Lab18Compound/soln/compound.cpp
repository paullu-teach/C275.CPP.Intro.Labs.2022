#include <algorithm>
#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

/**
 * @brief Collect all unique compounds of the words in the set given and return it as a vector
 * 
 * @param words the words to compound
 * @return vector<string> vector containing all compound words 
 */
vector<string> getCompounds(unordered_set<string> words) {
    unordered_set<string> usedCompounds;    // ensure that we do not add any duplicates to compounds
    vector<string> compounds;               // returned vectory
    for (string word : words) {
        for (string otherWord : words) {
            if (word != otherWord) {    // the same word cannot be compounded with itself.
                string compound = word + otherWord;

                if (usedCompounds.find(compound) == usedCompounds.end()) { // prevent duplicate compounds!
                    compounds.push_back(compound);
                    usedCompounds.insert(compound);
                }
            }
        }
    }

    return compounds;
}

int main() {
    // Collect all unique words to combine
    unordered_set<string> words;
    string word;
    while (cin >> word) {
        words.insert(word);
    }

    vector<string> compounds = getCompounds(words);

    // print out all compounds in order!
    sort(compounds.begin(), compounds.end());
    for (string compound : compounds) {
        cout << compound << endl;
    }

    return 0;
}
