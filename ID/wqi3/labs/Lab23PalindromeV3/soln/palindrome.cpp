#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * @brief Get the string inputted as an vector of chars
 * 
 * @return vector<char>
 */
vector<char> getInput();

/**
 * @brief Copies the contents of a char vector and returns the copy
 * 
 * @param charVector the vector to copy
 * @return vector<char> 
 */
vector<char> copy(vector<char> charVector);

vector<char> getInput() {
    string inputString;
    getline(cin, inputString);

    // Convert input from string to vector
    int inputSize = inputString.size();
    vector<char> input;
    for (int i = 0; i < inputSize; i++) {
        char letter = inputString[i];

        if (letter != ' ') {    // Spaces are not considered valid characters!
            input.push_back(inputString[i]);
        }
    }

    return input;
}

vector<char> copy(vector<char> charVector) {
    vector<char> copy;
    for (char c : charVector) {
        copy.push_back(c);
    }

    return copy;
}

int main() {
    // Take in the input and copy it's contents.
    vector<char> input = getInput();
    vector<char> inputCopy = copy(input);

    // reverse the contents of the copy
    reverse(inputCopy.begin(), inputCopy.end());

    int inputLength = inputCopy.size();
    for (auto i = 0; i < inputLength / 2; i++) {    // we only need to loop through half the vector because the input and inputCopy are reversed to one another.
        if (inputCopy[i] != input[i]) {
            cout << "Not a Palindrome" << endl;
            return 0;
        }
    }

    // This is a palindrome!
    cout << "Palindrome" << endl;
    return 0;
}