// #6 Find the Greatest of the Two Numbers in C++
// Given two integers as input, the objective is to check both numbers for the greatest and write a code to find the greatest of the two numbers in C++.

#include <iostream>
using namespace std;

int main()
{

    int num1, num2;
    cout << "enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 != num2)
    {
        (num1 > num2) ? cout << num1 << " is greater" : cout << num2 << " is greater";
    }
    else
    {
        cout << "both are equal";
    }
    return 0;
}