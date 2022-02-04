// Made by Isaac Joffe

#include <iostream>    // for cin and cout object
#include <string>    // to read in input
#include <vector>    // to be used for storing words
using namespace std;    // eliminate use of std:: prefix

// takes an input string from standard in and prints if it is a palindrome or
// not to standard out
int main() {
    vector<char> words;
    string inputline;
    getline(cin, inputline);    // read whole line of input at once
    for (long unsigned int i = 0; i < inputline.size(); i++) {
        if (inputline[i] != ' ') {
            words.push_back(inputline[i]);    // add non-spaces to the back
        }
    }

    bool flag = true;    // assume default is palindrome
    for (long unsigned int i = 0; i < words.size() / 2; i++) {
        if (words[i] != words[words.size() - i - 1]) {
            flag = false;    // if characters dont match, not a palindrome
            break;
        }
    }

    if (flag) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a Palindrome" << endl;
    }
    return 0;    // default return
}
