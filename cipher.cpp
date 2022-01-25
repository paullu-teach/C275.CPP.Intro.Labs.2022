#include <iostream>
#include <vector>

using namespace std;


int main()
{
	// Exercise: Cipher
    string word;

    getline(cin, word);

    int length = word.length();

    for (int i = 0; i < length; i++) {
    	// since we are shifting by 3 letters,
    	// if the word happens to contain a letter, that by adding 3 to it it will
    	// go past 'z', we will need to go back to 'a'
        if (int(word [i]) > 119) {
            int difference = 122 - int(word [i]); // takes into account the difference
            // so that we can start back at 'a'
            cout << char(('a') + difference);
        } else {
            cout << char((word [ i ]) + 3);
        }
    }
	return 0;
}