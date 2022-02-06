#include <iostream>

using namespace std;

int main() {
    // Take in the input
    int characters;
    string strToCheck;
    cin >> characters >> strToCheck;

    // Create a pointer at the beginning and end of the string.
    char *beginning = &strToCheck[0];
    char *ending = &strToCheck[characters - 1];
    
    // Until the ending pointer passes the beginning pointer, (the mid point of the string) 
    // we will have to check that the letter at the beginning pointer and ending pointer match.
    while (ending >= beginning) {
        // Get the value of the characters at the pointers
        char letterAtBeginning = *beginning;
        char letterAtEnding = *ending;

        // Check if they do not match
        if (letterAtBeginning != letterAtEnding) {
            // Not a palindrome. Do not process the rest of the string.
            cout << "Not a Palindrome" << endl;
            return 0;
        }

        // Move pointers closer
        beginning += 1;
        ending -= 1;
    }

    // This is a palindrome!
    cout << "Palindrome" << endl;
    
    return 0;
}