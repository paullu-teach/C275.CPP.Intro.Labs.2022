// Made by Isaac Joffe

#include <iostream>    // for cin and cout object
#include <algorithm>    // for max function
using namespace std;    // eliminate use of std:: prefix

// takes an integers representing the number of commercial breaks, price per
// commericial break, and gain for each commercial break from standard in and
// print the highest possible profit
int main() {
    int amount, price;    // int type satisfies kattis input guarantees
    cin >> amount >> price;
    int breaks[100000];    // at most 100 000 commercial breaks
    for (int i = 0; i < amount; i++) {
        cin >> breaks[i];
        breaks[i] -= price;    // look at only net profit
    }

    // not ideal, brute force algorithm, slow but effective
    int best = 0;
    for (int i = 0; i < amount; i++) {
        for (int j = i; j < amount; j++) {
            // for every possible pair of bounds on the sequence, determine
            // the result and update if its the best one
            int sum = 0;
            for (int k = i; k < j; k++) {
                sum += breaks[k];
            }
            best = max(sum, best);
        }
    }
    cout << best << endl;
    return 0;    // default return
}
