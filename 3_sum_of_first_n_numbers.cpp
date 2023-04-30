// #3 Find the Sum of N Natural Numbers in C++
// Given an integer input the objective is to write a code to Find the Sum of N Natural Numbers in C++.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;

    int sum = 0;
    //  If we don't initialize the sum variable to 0 before the loop, it will contain some garbage value that might result in an incorrect sum.

    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }

    cout << "the sum is: " << sum;
}