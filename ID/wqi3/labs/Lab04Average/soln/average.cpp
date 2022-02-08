#include <iostream>

using namespace std;

int main() {
    int a;
    int b;
    int c;

    cin >> a >> b >> c; // take the 3 integers to get the average of...
    
    float average = (a + b + c) / 3.0;  // and divide them by 3 to get the average! 

    cout << average << endl;
    
    return 0;
}