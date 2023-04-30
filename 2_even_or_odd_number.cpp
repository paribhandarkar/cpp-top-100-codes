// #2 Check Whether a Number is Even or Odd in C++
// Given an integer input num, the objective is to write a code to Check Whether a Number is Even or Odd in C++.

#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "enter a number: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "even number";
    }
    else
    {
        cout << "odd number";
    }
    
    return 0;
}