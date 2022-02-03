#include <iostream>

int powerOf(int a, int b)
{
	/*
    Description: Returns a raised to the power of b 

    Arguments:
    a(int): base
    b(int): exponent

    Returns:
    (int): a^b
    */

    int ans = 1;

    for (int i = 0; i<b; i++)
    {
    	ans = ans*a;
    }
    return ans;
}

int main()
{
	int x, y;

	std::cin >> x >> y;
	std::cout << powerOf(x, y) << std::endl;
	return 0;
}