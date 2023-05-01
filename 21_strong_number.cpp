// #21 Strong Number in C++
// Strong Numbers is a number in which the sum of the factorial of individual digits of the numbers is equal to the number itself.

#include <iostream>
#include <cmath>
using namespace std;

int findFactorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return num * findFactorial(num - 1);
    }
}

int main()
{

    int n, digit;
    cout << "enter a number: ";
    cin >> n;

    int length = floor(log10(n) + 1);

    int product = 0;

    for (int i = 1; i <= length; i++)
    {
        digit = n % 10;
        product += findFactorial(digit);
        n = n / 10;
    }

    cout << product;

    // 145
    // 145 = 1! + 4! + 5! =  145

    return 0;
}