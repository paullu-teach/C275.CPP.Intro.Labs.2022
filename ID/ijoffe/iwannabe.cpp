// Made by Isaac Joffe

#include <iostream>    // for cin and cout object
#include <unordered_set>    // to store which pokenoms used with no repeats
#include <algorithm>    // for quickselect
using namespace std;    // eliminate use of std:: prefix

// solves kattis problem available at
// "https://open.kattis.com/problems/iwannabe"

// takes two integers representing the number of pokenoms and number to be
// selected per stat as well as that number of pokenom stat sets from standard
// in and prints the number of pokenoms selected
int main() {
    int amount, number;    // given as n and k on kattis
    cin >> amount >> number;
    // initialize 2 arrays for each stat, one to be manipulated by quickselect
    unsigned int attacks[1000], defenses[1000], healths[1000];
    unsigned int attacks_n[1000], defenses_n[1000], healths_n[1000];
    unordered_set<int> indices;    // holds the indices of pokenoms used
    for (int i = 0; i < amount; i++) {
        // read in and assign next values into all arrays
        unsigned int attack, defense, health;
        cin >> attack >> defense >> health;
        attacks[i] = attack; attacks_n[i] = attack;
        defenses[i] = defense; defenses_n[i] = defense;
        healths[i] = health;  healths_n[i] = health;
    }

    nth_element(attacks_n, attacks_n + number, attacks_n + amount,
        greater<int>());    // find the top number attack values
    for (int i = 0; i < number; i++) {    // iterate over top number values
        for (int j = 0; j < amount; j++) {    // iterate over pokenom stats
            if (attacks_n[i] == attacks[j]) {
                // if the stats match, then note the index and stop looking
                indices.insert(j);
                break;
            }
        }
    }

    nth_element(defenses_n, defenses_n + number, defenses_n + amount,
        greater<int>());    // find the top number defense values
    for (int i = 0; i < number; i++) {    // iterate over top number values
        for (int j = 0; j < amount; j++) {    // iterate over pokenom stats
            if (defenses_n[i] == defenses[j]) {
                // if the stats match, then note the index and stop looking
                indices.insert(j);
                break;
            }
        }
    }

    nth_element(healths_n, healths_n + number, healths_n + amount,
        greater<int>());    // find the top number health values
    for (int i = 0; i < number; i++) {    // iterate over top number values
        for (int j = 0; j < amount; j++) {    // iterate over pokenom stats
            if (healths_n[i] == healths[j]) {
                // if the stats match, then note the index and stop looking
                indices.insert(j);
                break;
            }
        }
    }
    cout << indices.size() << endl;    // prints number of pokenoms used
    return 0;    // default return
}
