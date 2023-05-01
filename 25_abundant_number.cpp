// #25 C++ Program to check whether a number is an Abundant Number or not
// Abundant number is an number in which the sum of the proper divisors of the number is greater than the number itself.

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter a number: ";
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (sum > n)
    {
        cout << "abundant number ";
        cout << "the abundance is " << sum - n;
    }
    else
    {
        cout << "not";
    }

    // Abundant number 12 having a proper divisor is 1, 2, 3, 4, 6
    // The sum of these factors is 16 it is greater than 12 so it is an Abundant number

    return 0;
}