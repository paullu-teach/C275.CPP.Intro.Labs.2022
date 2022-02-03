#include <iostream>
#include <vector>

using namespace std;


int main()
{
    // Exercise: Palindrome Checking
    int n;
    cin >> n;
    char word[n]; // we initialize the array for the word itself
    char WordBackwards[n]; // we initialize the array for the backwards word for later 
    for (int i = 0; i < n; i ++) {
        cin >> word [ i ];
        // we get the user to input all the letters of the word
    }
    int j = 0;
    for (int i = n -1; i >= 0; i --) {
        WordBackwards [j] = word [ i ];
        j++;
        // we store all the characters of the word in reverse order
    }

    // we check if the word backwards is the same forwards
    if (WordBackwards == word) {
        cout << "Palindrome!";
    } else {
        cout << "Not Palindrome!";
    }
    return 0;
}