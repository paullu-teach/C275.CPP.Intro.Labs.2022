#include <iostream>

int main()
{   
    // problem instructions specify a
    // range of (-1000,1000) for input
    short int x, y;

    std::cin >> x;
    std::cin >> y;

    if (x>0)    // {Q1, Q4}
    {
        if (y>0)
            std::cout << 1 << std::endl;
        else
            std::cout << 4 << std::endl;
    }
    else    // {Q2, Q3}
    {
        if (y>0)
            std::cout << 2 <<std::endl;
        else
            std::cout << 3 << std::endl;
    }
    return 0;
}
