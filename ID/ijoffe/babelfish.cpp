// Made by Isaac Joffe

#include <iostream>    // for cin and cout object
#include <string>    // to store dictionary entries
#include <unordered_map>    // used to form the dictionary
#include <queue>    // for holding outputs
using namespace std;    // eliminate use of std:: prefix

// solves kattis problem available at
// "https://open.kattis.com/problems/babelfish"

// takes lines of dictionary entries from standard in representing an english
// word and its translation in a different dialect followed by a list of words
// in that dialect and prints those words translated into english
int main() {
    unordered_map<string, string> dictionary;    // to translate language
    while (cin.peek() != '\n') {    // check if next line is blank
        string inputline;
        getline(cin, inputline);    // read whole line at once
        // locate the space separating the words in each language
        int space_index = inputline.find(' ');
        // first word goes from the start until the space
        string english = inputline.substr(0, space_index);
        // second word goes from space until the end
        string dialect = inputline.substr(space_index + 1);
        dictionary[dialect] = english;    // note pairing in dictionary
    }
    cin.ignore();    // skip the blank line

    queue<string> outputs;    // store outputs as first-in = first-out
    int length = 0;
    string word;
    while (getline(cin, word)) {
        if (word.empty()) {    // check if no more input is there
            break;
        }
        if (dictionary.find(word) != dictionary.end()) {
            // if word is in dictionary, translate directly
            outputs.push(dictionary[word]);
        } else {
            // if word is not in dictionary, simply translate to "eh"
            outputs.push("eh");
        }
        length++;
    }

    for (int i = 0; i < length; i++) {
        cout << outputs.front() << endl;    // print oldest element
        outputs.pop();    // remove oldest element
    }
    return 0;    // default return
}
