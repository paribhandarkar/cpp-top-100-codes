// #28 Program to Check for Perfect Square in C++
// the program to check for perfect square in C++ programming language. We are given with an integer number and need to print “True” if it is, otherwise “False”.

#include <iostream>
#include <cmath>
using namespace std;

void checkSquare(int n)
{
    if (ceil(sqrt(n)) == floor(sqrt(n)))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}

int main()
{
    int num1;
    cout << "enter a number: ";
    cin >> num1;

    checkSquare(num1);
    return 0;
}