// #17 Program to print Fibonacci series up to N  numbers
// Finding the Nth Term of the Fibonacci Series in C++

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

    cout << fib(number);

    // 0, 1, 1, 2, 3, 5, 8

    return 0;
}