#include <iostream>
using namespace std;


 int main() {
    // Exercise: Fibonacci Numbers
    // The Fibonacci sequence begins at zero in our case.
    // This is the definition from Wikipedia:
    /*
    The sequence commonly starts from 0 and 1, 
    although some authors omit the initial terms and 
    start the sequence from 1 and 1 or from 1 and 2. 
    Starting from 0 and 1, the next few values in the sequence are:

    0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ...
    https://en.wikipedia.org/wiki/Fibonacci_number
    */

    int current1 =  0, current2 = 1, temporary; // We initialize the current 
    // starting number, which in our case is 0, and the next number will be 1.
    // we will use temporary to be able to add the current number to the current
    // second number.

    // we will iterate 20 times to get the 20 fibonacci numbers
    for (int i = 1; i <= 20; i ++) {
        if (i == 1){
            cout << 0 << endl;
        }

        temporary = current2;
        current2 = current1;
        // we add the two current numbers together (the past second current number is
        //stored in temporary )
        current1 = (current1 + temporary);
        cout << current1 << endl ;
    }
    return 0;
 }