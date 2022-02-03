#include <iostream>

int main()
{
    int n, ans;

    std::cin >> n;
    ans = abs(n);

    // first we remove the first digit;
    // integer division always truncates down
    // so there wont be any rounding issues
    ans = ans/10;
    ans = ans%10;   // gets first digit of new `ans`

    std::cout << ans << std::endl;
    return 0;
}