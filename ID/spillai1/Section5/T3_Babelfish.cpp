#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

int main()
{
    std::unordered_map<std::string, std::string> dict;
    std::string dictEntry, eng, foreign;

    // first block of input (dictionary)
    while (true)
    {
        std::getline(std::cin, dictEntry);
        if (dictEntry.empty())
            break;

        int i = 0;
        while (dictEntry[i] != ' ') // splitting entry into 2 strings
        {
            i++;
        }
        eng = dictEntry.substr(0,i);
        foreign = dictEntry.substr(i+1,dictEntry.size() - (i+1));
        dict.insert({foreign, eng});    // add entry to hashmap as key, value pair

    }

    std::vector<std::string> translated;
    std::string tempString;  // untranslated line

    // second block of input ()
    while (std::getline(std::cin, tempString))
    {
        if (tempString.empty())
            break;

        if (dict.find(tempString) != dict.end())
            translated.push_back(dict[tempString]);
        else
            translated.push_back("eh");
    }

    // print output
    for (int i = 0; i<translated.size(); i++)
    {
        std::cout << translated[i] << std::endl;
    }
    return 0;
}