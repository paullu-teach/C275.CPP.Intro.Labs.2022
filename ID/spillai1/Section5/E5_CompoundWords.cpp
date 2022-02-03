#include <iostream>
#include <set>

int main()
{
    std::set<std::string> words;
    std::set<std::string> compoundWords;

    // input loop
    std::string temp;
    while (std::cin >> temp)
    {
        words.insert(temp);
    }

    // iterate through the set; iterating over std::set elements
    // will be done in a sorted order alphabetically
    for(auto iter = words.begin(); iter != words.end(); iter++)
    {
        // assigning temp value for iter to forward it for nested loop
        auto tempIter = iter;
        tempIter++;

        // nested loop that goes through every element after iter
        // and creates combination with element at iter
        for (auto iter2 = tempIter; iter2 != words.end(); iter2++)
        {
            compoundWords.insert(*iter+*iter2);
            compoundWords.insert(*iter2+*iter); // adding reverse to set
        }
    }

    // loop to print compound words
    for(auto iter = compoundWords.begin(); iter != compoundWords.end(); iter++)
    {
        std::cout << *iter << '\n';
    }
    std::cout << std::endl;
    return 0;
}