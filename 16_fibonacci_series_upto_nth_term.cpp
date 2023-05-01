// #16 Program to print Fibonacci series up to N  numbers
// Here we will discuss how to find the Fibonacci Series upto n numbers using C++ Programming language.

#include <iostream>
using namespace std;

int fib(int num)
{
    if (num == 1)
    {
        return 0;
    }
    else if (num == 2)
    {
        return 1;
    }
    else
    {
        return fib(num - 1) + fib(num - 2);
    }
}

int main()
{
    int number;
    cout << "enter a number: ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        cout << fib(i) << " ";
    }

    // 0, 1, 1, 2, 3, 5, 8

    return 0;
}