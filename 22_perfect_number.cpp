// #22 Perfect Number in C++
// A perfect number is a number in which the sum of the proper positive divisors of the number is equal to the number itself.

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter a number: ";
    cin >> n;

    int divisors = 0;

    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            divisors += i;
        }
    }
    cout << divisors;
    // 28
    // Divisors : 1 + 2 + 4 + 7 + 14 = 28

    return 0;
}