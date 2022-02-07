#include <iostream>

using namespace std;

/**
 * @brief Shifts a lowercase letter up by 3 characters and wraps it from z-a if necessary.
 * 
 * @param letter the letter
 * @return shifted letter
 */
char shiftByThree(char letter);

int main() {
    string word;
    cin >> word;

    for (char character : word) {
        cout << shiftByThree(character);
    }
    cout << endl;

    return 0;
}

char shiftByThree(char letter) {
    char shiftedChar = (letter + 3);
    bool needsToWrap = shiftedChar > 'z';
    
    if (needsToWrap) {
        shiftedChar = 'a' + (shiftedChar - 'z' - 1);
    }

    return shiftedChar;
}
