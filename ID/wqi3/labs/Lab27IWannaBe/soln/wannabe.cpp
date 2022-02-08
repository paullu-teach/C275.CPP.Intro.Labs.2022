#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

// Used to sort descending instead of ascending
bool sortDesc(unsigned int a, unsigned int b) {
    return a > b;
}

int main() {
    // retrieve the amount of pokenoms and how many pokenoms to retrieve per stat category
    int pokenoms;
    int limitPerCategory;
    cin >> pokenoms >> limitPerCategory;

    // the pokenoms chosen
    unordered_set<unsigned int> chosenPokenoms;

    // pokenoms will be sorted by their stat and mapped to the index of when they appeared in the input
    unordered_map<unsigned int, int> pokenomsByAttack;
    unordered_map<unsigned int, int> pokenomsByDefense;
    unordered_map<unsigned int, int> pokenomsByHealth;
    vector<unsigned int> pokenomAttackStats;
    vector<unsigned int> pokenomDefenseStats;
    vector<unsigned int> pokenomHealthStats;

    // Take in all the pokenom input and put it inside our variables!
    for (int i = 0; i < pokenoms; i++) {
        // It is CRUCIAL that these are unsigned as the problem says these stats are unsigned. Failure to do so results in failed tests when run on Kattis
        unsigned int attack;
        unsigned int defense;
        unsigned int health;
        cin >> attack >> defense >> health;

        // pokenomsBy* stores the stat as an index (since they're unique!) and the value is the pokenom id
        pokenomsByAttack[attack] = i;
        pokenomsByDefense[defense] = i;
        pokenomsByHealth[health] = i;

        // pokenom*Stats will be sorted in descending order so that we can find the strongest pokenom stats (and therefore look up their pokenom id)
        pokenomAttackStats.push_back(attack);
        pokenomDefenseStats.push_back(defense);
        pokenomHealthStats.push_back(health);
    }

    // Sort the stats in descending order
    sort(pokenomAttackStats.begin(), pokenomAttackStats.end(), sortDesc);
    sort(pokenomDefenseStats.begin(), pokenomDefenseStats.end(), sortDesc);
    sort(pokenomHealthStats.begin(), pokenomHealthStats.end(), sortDesc);


    // Pick the top pokemon in each category and add them to our chosen pokenoms!
    // However, we do not want duplicates.
    for (int i = 0; i < limitPerCategory; i++) {
        unsigned int bestAttackAtCurrentTier = pokenomAttackStats[i];
        unsigned int bestDefenseAtCurrentTier = pokenomDefenseStats[i];
        unsigned int bestHealthAtCurrentTier = pokenomHealthStats[i];
        
        // Inserting into an unordered set guarentees that they will be unique. (no duplicates!)
        chosenPokenoms.insert(pokenomsByAttack[bestAttackAtCurrentTier]);
        chosenPokenoms.insert(pokenomsByDefense[bestDefenseAtCurrentTier]);
        chosenPokenoms.insert(pokenomsByHealth[bestHealthAtCurrentTier]);
    }

    // print out the amount of uniquely chosen pokenoms
    cout << chosenPokenoms.size() << endl;
    return 0;
}