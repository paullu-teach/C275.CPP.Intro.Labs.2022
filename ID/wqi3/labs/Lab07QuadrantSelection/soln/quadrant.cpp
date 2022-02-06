#include <iostream>

using namespace std;

/**
 * @brief Retrieve the quadrant of the given coordinates
 * 
 * @param x x coordinate
 * @param y y coordinate
 * @return quadrant
 */
int getQuadrant(int x, int y);

int main() {
    int x;
    int y;

    cin >> x >> y;  // get coordinates

    int quadrant = getQuadrant(x, y);   // get quadrant

    cout << quadrant << endl;
    return 0;
}

int getQuadrant(int x, int y) {
    bool isYinPositiveQuad = y > 0;
    bool isXinPositiveQuad = x > 0;
    
    if (isYinPositiveQuad) {
        if (isXinPositiveQuad) {
            return 1;
        } else {
            return 2;
        }
    } else {
        // lower quadrants
        if (isXinPositiveQuad) {
            return 4;
        } else {
            return 3;
        }
    }
}