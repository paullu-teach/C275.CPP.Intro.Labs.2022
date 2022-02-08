#include <algorithm>
#include <iostream>
#include <stack>

using namespace std;

/**
 * @brief Attempt an adventure with the given input
 * 
 * @param adventure the adventure input
 * @return true if the adventure was a success
 * @return false if the adventure was a failure
 */
bool tryAdventure(string adventure);

/**
 * @brief Checks if the character provided is a inventory character
 * 
 * @param letter the character
 * @return true if is a inventory character
 * @return false if it is not a inventory character
 */
bool isInventoryItem(char letter);

/**
 * @brief Checks if the inventory character provided matches what the trader character wants.
 * 
 * @param inventoryChar inventory character (|, *, $)
 * @param traderChar trader character (t, j, b)
 * @return true if it is the correct inventory item
 * @return false if it is the wrong inventory item
 */
bool isDesiredInventoryItem(char inventoryChar, char traderChar);

int main() {
    int adventures;
    cin >> adventures;  // how many adventures are there?

    // parse every adventure!
    for (int i = 0; i < adventures; i++) {
        string adventure;
        cin >> adventure;

        // see if the adventure was a success and output the result!
        bool canCompleteAdventure = tryAdventure(adventure);  
        if (canCompleteAdventure) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

bool tryAdventure(string adventure) {
    stack<char> inventory;

    // Parse the storyline!
    for (char letter : adventure) {
        if (letter == '.') {
            continue;   // useless character.
        }
        // Now only inventory or trader characters will show up...

        // If it's an inventory item... just add it to the top of our inventory!
        if (isInventoryItem(letter)) {
            inventory.push(letter);
        } else {
            // There's a trader who wants something...

            if (inventory.size() == 0) {
                return false;   // We have nothing to offer the trader!
            }

            // see if the latest item we picked up is useful to the trader
            char latestInventoryItem = inventory.top();
            if (!isDesiredInventoryItem(latestInventoryItem, letter)) {
                // the item was not useful
                return false;
            }

            // the trader accepted it! So we no longer have it.
            inventory.pop();
        }


    }
    
    // Successful adventures also require nothing in their inventory!
    int inventorySize = inventory.size();
    return inventorySize == 0;
}

bool isInventoryItem(char letter) {
    return letter == '|' || letter == '*' || letter == '$';
}

bool isDesiredInventoryItem(char inventoryChar, char traderChar) {
    switch (inventoryChar) {
        case '|':
            return traderChar == 't';
        case '*':
            return traderChar == 'j';
        case '$':
            return traderChar == 'b';
        default:
            return false;
    }
}