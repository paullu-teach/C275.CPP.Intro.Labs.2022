#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int l, h, v;
    std::cin >> l >> h >> v;

    std::vector<int> areas = {h*v, (l-h)*v, h*(l-v), (l-h)*(l-v)};
    int maxArea = areas[0]; //initialise to element in array

    // find largest area of possible square
    for(auto x : areas)
    {
        maxArea = std::max(maxArea, x);
    }

    std::cout << maxArea*4 << std::endl; // vol = baseArea*height
    return 0;
}