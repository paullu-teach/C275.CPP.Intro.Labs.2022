// Made by Isaac Joffe

#include <iostream>    // for cin and cout object
#include <string>    // to read in input
#include <vector>    // to hold and sort cup sizes
#include <unordered_map>    // to assocaite cup sizes and colours
#include <algorithm>    // to print radii in increasing order
using namespace std;    // eliminate use of std:: prefix

// solves kattis problem available at "https://open.kattis.com/problems/cups"

// takes an integer and a set of size-colour combinations of that integers
// length from standard in and prints each colour cup is ascending order
int main() {
    int number;
    cin >> number;
    cin.ignore();    // ignore extra newline character
    vector<int> radii;
    unordered_map<int, string> cups;    // to store colour-size relationships

    for (int i = 0; i < number; i++) {
        string inputline;
        getline(cin, inputline);    // read in line all at once
        // locate space character to break into substrings around the space
        int space_index = inputline.find(' ');
        string first = inputline.substr(0, space_index);
        string second = inputline.substr(space_index + 1);

        int radius;
        string colour;
        if (isdigit(first[0])) {    // check if number comes first
            radius = stoi(first) / 2;    // convert diameter to radius
            colour = second;
        } else {
            radius = stoi(second);    // keep as radius
            colour = first;
        }
        radii.push_back(radius);    // keep track of all radii seen
        cups[radius] = colour;    // store relationship of radius and colour
    }

    sort(radii.begin(), radii.end());    // put radii in ascending order
    for (unsigned long int i = 0; i < radii.size(); i++) {
        // print colour corresponding to each increasing radius value
        cout << cups[radii[i]] << endl;
    }
    return 0;    // default return
}
