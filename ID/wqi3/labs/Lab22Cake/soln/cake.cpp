#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    // Gather input
    int cakeLength;
    int horizontalCutPosition;
    int verticalCutPosition;
    cin >> cakeLength >> horizontalCutPosition >> verticalCutPosition;

    // Figure out which side is longer. The side of the cut? or the side that was not cut?
    int largerHorizontalCutLength = max(cakeLength - horizontalCutPosition, horizontalCutPosition);
    int largerVerticalCutLength = max(cakeLength - verticalCutPosition, verticalCutPosition);

    // All cakes have a height of 4. Therefore we just multiple the 2 variables and 4.
    int volume = largerHorizontalCutLength * largerVerticalCutLength * 4;

    // output cake volume!
    cout << volume << endl;
    return 0;
}