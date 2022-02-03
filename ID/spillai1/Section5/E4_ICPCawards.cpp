#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

int main()
{
    int n;
    std::cin >> n;

    std::unordered_set<std::string> dupUniSet;
    std::vector<std::string> winners;

    for (int i = 0; i<n; i++)
    {
        std::string uni, team;
        std::cin >> uni >> team;

        if (dupUniSet.find(uni) == dupUniSet.end() && winners.size()<12) // uni has not already won a prize  + there are prizes left
            winners.push_back(uni + " " + team);    // add to list of winners(in ascending order)
            dupUniSet.insert(uni);                  // add uni to set to check teams that follow
    }

    for (int i = 0; i<12; i++)
    {
        std::cout << winners[i] << std::endl;
    }
    return 0;
}