#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    char word[n];
    for (int i = 0; i<n; i++)
        std::cin >> word[i];

    // only need to check if letters in first half 
    // match those in second half flipped

    bool isPal = true;
    for (int i = 0; i<n/2; i++)
    {
        // used int div for n/2 because we dont need to check
        // the middle letter for odd `n`

        if (word[i] != word[(n-1)-i])
            isPal = false;
    }

    if (isPal)
        std::cout << "Palindrome" << std::endl;
    else
        std::cout << "Not a Palindrome" << std::endl;
    return 0;
}