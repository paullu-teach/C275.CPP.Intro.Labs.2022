#include <iostream>

using namespace std;

/**
 * @brief Retrieve the quadrant of the given coordinates
 * 
 * @param x x coordinate
 * @param y y coordinate
 * @return quadrant
 */
int getQuadrant(int x, int y) {
    bool yPositiveQuad = y > 0;
    bool xPositiveQuad = x > 0;
    
    if (yPositiveQuad) {
        // upper quadrants
        if (xPositiveQuad) {
            // right quad
            return 1;
        } else {
            // left quad
            return 2;
        }
    } else {
        // lower quadrants
        if (xPositiveQuad) {
            // bottom right quad
            return 4;
        } else {
            // bottom left quad
            return 3;
        }
    }
}

int main() {
    int x;
    int y;

    cin >> x >> y;  // get coordinates

    int quadrant = getQuadrant(x, y);   // get quadrant

    // output quadrant
    cout << quadrant << endl;
    return 0;
}