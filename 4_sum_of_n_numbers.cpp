// #4 Find the Sum of N Natural Numbers in C++
// Given an integer input the objective is to write a code to Find the Sum of N Natural Numbers in C++.

#include <iostream>
using namespace std;

int getSum(int n)
{
    if (n == 0)
    {
        return n;
    }
    return n + getSum(n - 1);
}

int main()
{

    int num;
    cout << "enter a number: ";
    cin >> num;

    cout << getSum(num);

    return 0;
}