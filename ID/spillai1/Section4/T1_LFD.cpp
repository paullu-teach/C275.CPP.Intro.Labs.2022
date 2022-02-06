#include <iostream>

int lastFac(int num)
{
    /*
    Description: Returns the last digit of factorial of num

    Arguments:
    num(int): +ve integer to find factorial's last digit for 

    Returns:
    (int): last digit of factorial of num
    */

    int lastDigit = 1;
    for (int i = 1; i<num+1; i++)
    {
        lastDigit = lastDigit*i;    // multiplying natural numbers one by one
        lastDigit = lastDigit%10;   // only keeping last digit
    }
    return lastDigit;
}

int main()
{
    int t, n;

    std::cin >> t;
    for (int i = 0; i<t; i++)
    {
        std::cin >> n;
        std::cout << lastFac(n) << std::endl;
    }
    return 0;
}