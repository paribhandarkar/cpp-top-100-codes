// #24 C++ program to check whether a number is a Harshad Number or not
// A Harshad number is a positive integer that is divisible by the sum of the digits of the integer. It is also called the Niven number.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int n, digit, sum = 0;
    cout << "enter a number: ";
    cin >> n;

    int temp = n;

    int length = floor(log10(n) + 1);

    for (int i = 1; i <= length; i++)
    {
        digit = n % 10;
        sum += digit;
        n = n / 10;
    }

    if (temp % sum == 0)
    {
        cout << "harshad";
    }
    else
    {
        cout << "not harshad";
    }

    // 153
    // Sum of digits = 1 + 5 + 3 = 9
    // 153 is divisible by 9 so 153 is a Harshad Number.
}