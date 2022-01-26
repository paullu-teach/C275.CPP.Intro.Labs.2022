#include <iostream>
using namespace std;


int main()
{

    // Task 2: Solving for Carrots
    int number_of_contestants, problems_solved;

    cin >> number_of_contestants >> problems_solved;
    int lines_of_description = number_of_contestants;
    for (int i; i <= lines_of_description; i++) {
        // the user has to input a description lines_of_description times
        string description = "";
        cin >> description;
    }

    // we simply have to output the number of problems solved
    cout << problems_solved;
    return 0;
}