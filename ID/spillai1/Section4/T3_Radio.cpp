#include <iostream>

int main()
{
    int n, p, net_profit = 0, max_net_profit = 0;
    std::cin >> n >> p;

    int data[n];
    for (int i =0;i<n;i++)
        std::cin>>data[i];

    for (int i = 0; i<n; i++) //iterating through data
    {
        net_profit += (data[i] - p);

        // reset profit if it dips below 0 at any point
        // as the commercial breaks can just start from 
        // the next point and make higher potential profits
        if (net_profit<0)   
            net_profit = 0;

        // keep track of what the max possible profit is
        if (max_net_profit<net_profit)
            max_net_profit = net_profit;
    }
    std::cout << max_net_profit << std::endl;
    return 0;
}