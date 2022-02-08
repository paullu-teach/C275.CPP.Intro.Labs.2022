#include <iostream>
#include <vector>

using namespace std;

/**
 * @brief Get the string inputted as an vector of chars
 * 
 * @return vector<char>
 */
vector<char> getInput();

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

int main() {
    // Take in the input
    vector<char> input = getInput();

    int inputSize = input.size();
    for (int i = 0; i < inputSize; i++) {
        // Get the value of the characters at beginning and ending indexes we are comparing.
        char letterAtBeginning = input[i];
        char letterAtEnding = input[inputSize - i - 1];

        // Check if they do not match
        if (letterAtBeginning != letterAtEnding) {
            // Not a palindrome. Do not process the rest of the string.
            cout << "Not a Palindrome" << endl;
            return 0;
        }
    }

    // This is a palindrome!
    cout << "Palindrome" << endl;
    
    return 0;
}