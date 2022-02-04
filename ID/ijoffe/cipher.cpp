// Made by Isaac Joffe

#include <iostream>    // for cin and cout object
#include <string>    // to hold the word
using namespace std;    // eliminate use of std:: prefix

// takes an input word from standard in and prints that word to standard out
// with each letter shifted 3 letters down the alphabet
int main() {
    string word;
    cin >> word;
    for (long unsigned int i = 0; i < word.length(); i++) {
        // shift each character in the word down the ASCII table by 3 spots
        word[i] += 3;
        if (!isalpha(word[i])) {
            // if shifted out of the alphabet, move back in to the start
            word[i] -= 26;
        }
    }
    cout << word << endl;
    return 0;    // default return
}
