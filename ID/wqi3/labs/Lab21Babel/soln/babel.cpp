#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    // stores the translations for every word.
    // the key is the translation word, whereas the value is the english word
    unordered_map<string, string> dictionary;

    // First... let's construct the translation dictionary.
    string line;
    while (getline(cin, line)) {
        if (line == "") {
            break;  // an empty line divides the dictionary additions and the process of translating 
        }

        string englishWord = line.substr(0, line.find(" "));
        string foreignWord = line.substr(line.find(" ") + 1);
        
        dictionary[foreignWord] = englishWord;
    }

    // It's time to translate! Any lines from this point on should be looked up to get the translation.
    while (getline(cin, line)) {
        if (dictionary.find(line) != dictionary.end()) {
            // output the translation
            cout << dictionary.at(line) << endl;
        } else {
            // no translation found
            cout << "eh" << endl;
        }
    }

    return 0;
}