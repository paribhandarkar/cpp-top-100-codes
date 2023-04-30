// #1 Check if a Number is Positive or Negative in C++

// Given an integer input, The objective is to write a code to Check if a Number is Positive or Negative in C++ Language.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    if (num > 0)
    {
        cout << "positive";
    }
    else if (num == 0)
    {
        cout << "zero";
    }
    else
    {
        cout << "negative";
    }

    return 0;
}


