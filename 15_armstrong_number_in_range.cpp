// #15 Find the Armstrong Numbers in a given Range in C++
// Given two integers high and low for limits as inputs, the objective is to write a code to Find the Armstrong Numbers in a given Interval in C++.

#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num)
{
    int number = num;
    int digits = log10(num) + 1;
    int arm_no = 0;
    int digit;

    for (int i = digits; i >= 0; i--)
    {
        digit = num % 10;
        arm_no = arm_no + pow(digit, digits);
        num = num / 10;
    }

    if (arm_no == number)
    {
        return true;
        // cout << "armstrong";
    }
    else
    {
        return false;
        // cout << "not armstrong";
    }
}

int main()
{
    int lower, upper;
    cout << "enter lower and upper range: ";
    cin >> lower >> upper;

    for (int i = lower; i <= upper; i++)
    {
        if (isArmstrong(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}