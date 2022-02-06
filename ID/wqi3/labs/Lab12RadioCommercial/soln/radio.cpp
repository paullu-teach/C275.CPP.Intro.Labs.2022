#include <iostream>

using namespace std;

int main() {
    // get the amount of commercial breaks and the cost per commercial break!
    int commercials;
    int costPerCommercial;
    cin >> commercials >> costPerCommercial;

    // take in revenue we earned each commercial break
    int revenue[commercials];
    for (int i = 0; i < commercials; i++) {
        cin >> revenue[i];
    }

    // Now our goal is to find the maximum revenue in a sequence, 
    // Using Kadane's algorithm, we can make quick work of this.
    int maxProfit = INT32_MIN;
    int contendingMaxProfit = 0;
    for (int i = 0; i < commercials; i++) {
        int commercialValue = revenue[i] - costPerCommercial;  // each commercial break costs 20 dollars to run

        contendingMaxProfit = max(commercialValue, commercialValue + contendingMaxProfit);  // is it better to start a new chain or add this to our existing chain?
        if (contendingMaxProfit > maxProfit) {
            // the current chain is the most profitable.
            maxProfit = contendingMaxProfit;
        }
    }

    // output the max profit found
    cout << maxProfit << endl;


    return 0;
}