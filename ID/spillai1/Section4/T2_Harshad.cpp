#include <iostream>

bool isHarshad(int n)
{
    /*
    Description: Finds if number `n` is a Harshad number

    Arguments:
    n(int): number that is checked for being harshad

    Returns:
    (bool): true if `n` is harshad and false if not
    */

    int temp_n = n;
    int digitSum = 0;
    while (temp_n != 0) // loop to add digits till last digit is reached

    {
        digitSum += (temp_n%10); // add digit
        temp_n = temp_n/10;      // remove digit
    }

    if (n%digitSum==0)
        return true;
    else
        return false;
}

int main()
{
    int num;

    std::cin >> num;
    // increments num by 1 till harshad number is found
    while (!isHarshad(num))
        num++;

    std::cout << num << std::endl;
    return 0;
}