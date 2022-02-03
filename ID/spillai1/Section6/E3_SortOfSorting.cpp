#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool compareStrings(std::string a, std::string b)
{   
    /*
    Description: Comparator to sort strings in alphabetical order
    of first two letters 

    Arguments:
    a(string)
    b(string)

    Returns:
    (bool): true if a should be placed first alphabetically and
    true if a comes before b; false if b should be placed first
    */

    if(a.substr(0,2) < b.substr(0,2))
        return true;
    else
        return false;
}

int main()
{
    int n;
    std::vector<std::vector<std::string>> sortedLists;  // list of sorted lists

    while(true)
    {
        std::cin >> n;

        std::vector<std::string> unsortedList;  // single unsorted list

        if (n==0)
            break;
        else    // gets input for list
        {
            for (int i = 0; i<n; i++)
            {
                std::string name;
                std::cin >> name;
                unsortedList.push_back(name);
            } 
        }

        // sorts the unsorted list according to specifications
        std::sort(unsortedList.begin(), unsortedList.end(), compareStrings);
        sortedLists.push_back(unsortedList); //append list after sorting to list of lists
    }

    // print all the sorted lists
    for (auto x : sortedLists)
    {
        for (auto i : x) std::cout << i << '\n';
        std::cout << std::endl;
    }
    return 0;
}