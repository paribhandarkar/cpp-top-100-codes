// #14 Armstrong number in C++
// In this post, we will write a C++ Program to check a number is Armstrong or not. We will look at various ways to code Armstrong number in C++.

// Any number that satisfies the following format –

// abcd… = a^n + b^n + c^n + d^n + …
// Where n is the order(length/digits in number)

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int num, i, arm_no = 0;
    cout << "enter a number: ";
    cin >> num;

    int number = num;
    int digits = log10(num) + 1;

    while (num != 0)
    {
        i = num % 10;
        arm_no = arm_no + pow(i, digits);
        num = num / 10;
    }

    if (arm_no == number)
    {
        cout << "armstrong";
    }
    else
    {
        cout << "not armstrong";
    }

    return 0;
}