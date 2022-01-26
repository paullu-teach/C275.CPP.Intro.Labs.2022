#include <iostream>
using namespace std;


int main()
{
    // Task 2 (Lab 1) - "Sum of Two Inputs"

    int number_1, number_2; // We can initialize as many variables of the
    // same type (ie. int) on the same time.
    // here we initialized the numbers we will be adding together

    cin >> number_1 >> number_2; // using cin, we ask the user to input two ints
    // in the terminal, one for each of the numbers we will be adding together

    cout << number_1 + number_2; // we output the two numbers added together
    
    return 0;
}
