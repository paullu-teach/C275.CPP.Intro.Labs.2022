#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	// Exercise: Palindrome part 3
    string word;

    getline(cin, word); // We get a line of input (the word)

    int length = word.length(); // we get the length of the word for future use

    vector<char> vector_of_word_copy;
    vector<char> vector_of_word;

    for (int i = 0; i < length; i++) {
        if (word [i] != ' ') {
            vector_of_word.push_back(word [ i ]);
            vector_of_word_copy.push_back(word [ i ]);
        }
    }
    reverse( vector_of_word.begin() , vector_of_word.end()); // we reverse the word
    // to use as reference when checking if it is a Palindrome or not


    if (vector_of_word_copy == vector_of_word) {
        cout << "Palindrome!";
    } else {
        cout << "Not Palindrome!";
    }

	return 0;
}