#include <iostream>
#include <string>

int main()
{
    std::string word;
    std::cin >> word;

    for (int i = 0; i<word.length(); i++)
    {
        word[i] += 3;    // shifts each letter by 3

        if (word[i] > 'z')
            word[i] -= ('z' - 'a' + 1); // makes it loopback through 'a'
    }

    std::cout << word << std::endl;
    return 0;
}