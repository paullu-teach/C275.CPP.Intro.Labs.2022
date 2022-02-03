#include <iostream>
#include <string>
#include <algorithm>
#include <vector>    

int main()
{
    int n;
    std::vector<std::string> names;

    std::cin >> n;

    for (int i = 0; i<n; i++)
    {
        std::string tempName;
        std::cin >> tempName;

        names.push_back(tempName);
    }

    // check if sorted in ascending order
    if (std::is_sorted(names.begin(), names.end()))
        std::cout << "INCREASING" << std::endl;
    // check if sorted in descending order by iterating in reverse
    else if (std::is_sorted(names.rbegin(), names.rend()))
        std::cout << "DECREASING" << std::endl;
    else
        std::cout << "NEITHER" << std::endl;
    return 0;
}