#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int cups;
    cin >> cups;
    cin.ignore();   // clear out left over input in cin so getline can retrieve the actual line

    // sort the cups by radius.
    unordered_map<int, string> cupsByRadius;
    vector<int> cupSizes;

    // store all cups and their sizes
    for (int i = 0; i < cups; i++) {
        string input;
        getline(cin, input);
        
        bool isMalformedRequest = isdigit(input[0]);    // malformed requests are requests such that the radius is returned first and is doubled
        string leftPart = input.substr(0, input.find(" "));
        string rightPart = input.substr(input.find(" ") + 1);

        // determine which is the radius and colour
        int radius;
        string colour;
        if (isMalformedRequest) {
            radius = stoi(leftPart) / 2;
            colour = rightPart;
        } else {
            radius = stoi(rightPart);
            colour = leftPart;
        }

        // store cup sizes
        cupsByRadius[radius] = colour;
        cupSizes.push_back(radius);
    }

    // sort cupSizes
    sort(cupSizes.begin(), cupSizes.end());

    // output cup colours by cupSizes
    for (int cupSize : cupSizes) {
        cout << cupsByRadius[cupSize] << endl;
    }
    return 0;
}