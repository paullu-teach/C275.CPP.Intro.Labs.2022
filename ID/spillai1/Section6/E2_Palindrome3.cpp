#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string word, reverseWord;
    std::getline(std::cin, word);

    word.erase(remove(word.begin(), word.end(), ' '), word.end());  // removes whitespaces 
    reverseWord = word;
    reverse(reverseWord.begin(), reverseWord.end());

    if (word == reverseWord)
        std::cout << "Palindrome" << std::endl;
    else
        std::cout << "Not a Palindrome" << std::endl;

    return 0;
}