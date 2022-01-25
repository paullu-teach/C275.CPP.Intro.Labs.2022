#include <iostream>
using namespace std;


 int main() {
 	// Exercise: Quadrant Selection
    int x, y;

    cin >> x;
    cin >> y;

    // Quadrent 1:
    if (x > 0 && y > 0) {
        cout << 1 << endl;
    } 
 
    // Quadrent 2:
    else if (x < 0 && y > 0) {
        cout << 2 << endl;
    } 

    // Quadrent 3:
    else if (x < 0 && y < 0) {
        cout << 3 << endl;
    }
    
    // Quadrent 4:
    else if ( x > 0 && y < 0) {
            cout << 4 << endl;
    }

    return 0;

 }