// #11 Program to Find the Sum of Digits of a Number in C++
// Here we will discuss how to find the sum of digits of a number in C++ programming language.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;

    int sum = 0;

    while (num != 0)
    {
        sum += num % 10;
        num = num / 10;
    }

    cout << sum;

    return 0;
}