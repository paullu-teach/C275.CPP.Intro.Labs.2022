#include <iostream>
#include <stack>

using namespace std;

/**
 * @brief Checks if the character provided is an opening character. [, {, (
 * 
 * @param character the character
 * @return true if it is an opening character
 * @return false if it is not an opening character
 */
bool isOpeningCharacter(char character);

/**
 * @brief Checks if the closing character provided creates a pair with the opening character provided.
 * 
 * @param closingChar the closing character
 * @param openingChar the opening character
 * @return true if it forms a pair
 * @return false if it does not form a pair
 */
bool isCorrectClosingCharacter(char closingChar, char openingChar);

/**
 * @brief Print out a syntax error message given the character and index
 * 
 * @param character character causing the issue
 * @param index the index of the character
 */
void printErrorMessage(char character, int index);

int main() {
    // Take in the input
    int letters;
    cin >> letters;
    cin.ignore();   // getline does not take our expected input because of remaining input from (cin >> letters), so we can clear the queue with this.
    
    string input;
    getline(cin, input);

    stack<char> currentSyntaxStructure; // the top of the stack represents the last open character used. (e.g. (, [, { )
    for (int i = 0; i < letters; i++) {
        char character = input[i];

        if (character == ' ') { // we only want to parse the closing and opening characters!
            continue;
        }

        int structureSize = currentSyntaxStructure.size();
        if (structureSize == 0) {
            // ensure the next character is an open character
            if (!isOpeningCharacter(character)) {
                printErrorMessage(character, i);
                return 0;
            }
            currentSyntaxStructure.push(character);
        } else {
            // if the next character is a closing character, make sure it matches with the stack.
            // otherwise if it is an opening character, add it to the stack
            if (isOpeningCharacter(character)) {
                currentSyntaxStructure.push(character);
            } else {
                char latestOpenCharacter = currentSyntaxStructure.top();    // check if the latest opening character and the closing character match.
                if (!isCorrectClosingCharacter(character, latestOpenCharacter)) {
                    printErrorMessage(character, i);
                    return 0;
                }
                currentSyntaxStructure.pop();   // a pair has been made! Pop it from the stack.
            }
        }
    }

    cout << "ok so far" << endl;
    
    return 0;
}

bool isOpeningCharacter(char character) {
    return character == '[' || character == '{' || character == '(';
}

bool isCorrectClosingCharacter(char closingChar, char openingChar) {
    switch (closingChar) {
        case ']':
            return openingChar == '[';
        case '}':
            return openingChar == '{';
        case ')':
            return openingChar == '(';
        default:
            return false;
    }
}

void printErrorMessage(char character, int index) {
    cout << character << " " << index << endl;
}