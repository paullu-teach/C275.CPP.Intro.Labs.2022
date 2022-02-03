#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_set<std::string> dupCheck;
    std::string sentence;

    std::getline(std::cin, sentence);

    bool dupFound = false;
    std::string tempWord = " ";
    for (int i = 0; i<sentence.length(); i++)
    {
        if (sentence[i] == ' ') // complete word has been found
        {
            if (dupCheck.find(tempWord) != dupCheck.end())  //duplicate found
                dupFound = true;
            else    // add to set if not dup
                dupCheck.insert(tempWord);
                tempWord = " "; // reset word
        }
        else if (i == sentence.length()-1)  // last word
        {
            tempWord += sentence[i];
            if (dupCheck.find(tempWord) != dupCheck.end())  //duplicate found
                dupFound = true;
        }
        else    // keep adding letters till word is found
        {
            tempWord += sentence[i];
        }

        if (dupFound)
            break;
    }
    if (!dupFound)
        std::cout << "yes" << std::endl;
    else
        std::cout << "no" << std::endl;
}