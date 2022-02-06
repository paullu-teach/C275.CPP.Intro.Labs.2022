#include <iostream>
using namespace std;


int main()
{
    // Exercise "Overflow"

    unsigned short int x = 65535;
    x += 1;
    cout << x << endl;
    // Normally adding 1 to 65,635 would produce 65,636./n However, since x is an unsigned short int,/nits range ends at 65,535
    // Therefore it returns back to its minimum value: 0
    return 0;
    
}

