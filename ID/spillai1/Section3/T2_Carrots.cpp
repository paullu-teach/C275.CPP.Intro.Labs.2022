#include <iostream>

int main()
{
    int n, p;

    std::cin >> n >> p;  // initial inputs

    // we do not actually need the string
    // input, so we can assign any type.
    char temp;
    for (int i = 0; i<n; i++)
    {   
        std::cin >> temp;
    }

    std::cout << p << std::endl;
    return 0;
}