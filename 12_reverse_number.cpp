// #12 Program Reverse a Number in C++
// Here we will discuss how to find the reverse of a given number using C++ programming language.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;

    int rev = 0;
    int digits = log10(num); // for finding the no. of digits in the number

    for (int i = digits; i >= 0; i--)
    {
        rev = rev + (num % 10) * pow(10, i);
        num = num / 10;
    }

    cout << rev;

    // 1234
    // 4321
    // 4*1000 + 3*100 + 2*10 + 1

    return 0;
}