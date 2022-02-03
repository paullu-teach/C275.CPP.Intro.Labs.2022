#include <iostream>

void fibonacci(int n)
{
    /*
    Description: Prints first `n` terms of the fibonacci sequence 

    Arguments:
    n(int): number of terms in sequence to print
    */

    int t1=0, t2=1, t3=1;

    for (int i = 0; i<n; i++)
    {   
        std::cout << t1 << std::endl;
        // shifting terms to the left to get rid off
        // printed term
        t1 = t2;
        t2 = t3;
        // new term becomes sum of previous terms
        t3 = t1+t2;
    }
    return;
}

int main()
{
    fibonacci(20);
    return 0;
}