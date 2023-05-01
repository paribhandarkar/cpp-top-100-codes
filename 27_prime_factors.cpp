// #27 Finding Prime Factors of a Number
// For example, if the Input number is 12, then the Output should be [2, 2, 3]. And if the input number is 315, then the output should be [3, 3, 5, 7].

#include <iostream>
#include <cmath>
using namespace std;

void primeFactors(int n)
{
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n / 2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }

    if (n > 2)
    {
        cout << n << " ";
    }
}

int main()
{

    int n = 315;
    primeFactors(n);
    return 0;
}