#include <iostream>
#include <string>
#include <map>

int main()
{
    int n;
    std::cin >> n;
    std::map<int, std::string> colorMap;

    for (int i = 0; i<n; i++)
    {
        std::string inp1, inp2;
        std::cin >> inp1 >> inp2;

        // finding whether inp1 is an int
        bool isDigit = true;
        for (auto x : inp1)
        {
            if (!std::isdigit(x))
            {
                isDigit = false;
                break;
            }
        }

        // adding key, values to hashmaps based on input structure
        if (isDigit)
        {
            colorMap.insert({std::stoi(inp1)/2, inp2}); // stoi(str) converts str to int
        }
        else
            colorMap.insert({std::stoi(inp2), inp1});
    }

    // print values of map; map keys are alphanumerically sorted by keys when iterating
    for (auto it = colorMap.begin(); it != colorMap.end(); ++it)
    {
        std::cout << (*it).first << (*it).second << '\n';
    }
    std::cout << std::flush;
    return 0;
}