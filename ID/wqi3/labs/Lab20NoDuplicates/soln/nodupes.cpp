#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    unordered_set<string> dictionary;   // stores every word used!

    string word;
    while (cin >> word) {
        // check to see if this word was already used
        if (dictionary.find(word) != dictionary.end()) {
            // the word was already used? it fails!
            cout << "no" << endl;
            return 0;
        }
        dictionary.insert(word);
    }

    // every word is unique!
    cout << "yes" << endl;
    return 0;
}