// #18 Factorial of a Number in C++
// Here we will discuss how to find the factorial of a number in C++ programming language.
// Factorial of any number is the product of it and all the positive numbers below it for example factorial of 5 is 120

#include <iostream>
using namespace std;

int findFactorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return findFactorial(num - 1) * num;
    }
}

int main()
{
    int number;
    cout << "enter a number: ";
    cin >> number;

    cout << findFactorial(number);

    // 5! = 1 x 2 x 3 x 4 x 5 = 120

    return 0;
}