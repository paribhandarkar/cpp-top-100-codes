// #19 Power of a number in C++
// In this post we will see various methods to calculate Power of a Number in C++.

#include <iostream>
using namespace std;

int main()
{
    int base, exponent;
    cout << "enter base and exponent: ";
    cin >> base >> exponent;

    int result = 1;

    for (int i = 1; i <= exponent; i++)
    {
        result *= base;
    }

    cout << result;

    // Base : 5
    // Exponent : 3
    // Power = 5^3 = 125

    return 0;
}