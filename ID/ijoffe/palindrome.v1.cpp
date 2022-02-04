// Made by Isaac Joffe

#include <iostream>    // for cin and cout object
using namespace std;    // eliminate use of std:: prefix

// takes a string and its length from standard in and prints if it is a
// palindrome or not to standard out
int main() {
    int length;
    cin >> length;
    char words[100];    // assume has at most 100 characters
    for (int i = 0; i < length; i++) {
        cin >> words[i];
    }

    bool flag = true;    // assume default is palindrome
    for (int i = 0; i < length / 2; i++) {
        if (words[i] != words[length - i - 1]) {
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
