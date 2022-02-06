#include <iostream>
#include <vector>

using namespace std;


int main()
{
    // Exercise: Palindrome Checking part 2
    string word;

    getline(cin, word); // we get a whole line of input rathe rthan one character at
    // a time.

    int length = word.length(); // we get the length of the word

    vector<char> vector_of_backwards_word; // The backwards word vector
    vector<char> vector_of_word; // The word vector

    int k = 0;
    for (int i = length - 1; i >= 0; i--) {
        if (word [i] != ' ') {
            vector_of_backwards_word.push_back(word [ i ]);
            // as long as the character is not a space, we will add it to 
            // the backwards word.
        }
        if (word [k] != ' ') {
            vector_of_word.push_back(word [ k ]);
        } // we will do the same to the normal word so that we can compare the two
        // incase the word had spaces in it. 
        k++;
    }

    if (vector_of_backwards_word == vector_of_word) {
        cout << "Palindrome!";
    } else {
        cout << "Not Palindrome!";
    }
    return 0;
}