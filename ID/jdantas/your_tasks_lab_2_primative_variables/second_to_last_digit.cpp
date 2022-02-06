#include <iostream>
using namespace std;


int main()
{
    // Task 3: Second to Last Digit
    int number;
    cin >> number;

    int second_to_last = (abs(number) / 10) % 10; // by dividing the number
    // by 10, we make the second last digit the one before the decimal now!
    // by getting the remainder after dividing by 10, we will get the second
    // last digit in the number!

    cout << second_to_last;
    return 0;
}