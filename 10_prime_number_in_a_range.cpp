// #10 Program to find Prime Numbers in a given range in C++
// Here we will discuss how to find prime numbers in the range specified by the user using C++ programming language.

#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    else if (n == 2)
    {
        return true;
    }
    else if (n % 2 == 0)
    {
        return false;
    }
    else
    {
        for (int i = 3; i < sqrt(n); i = i + 2)
        {
            if (n % i == 0)
            {
                return false;
            }
        }

        return true;
    }
}

int main()
{

    int lower, upper;
    cout << "enter lower and upper range: ";
    cin >> lower >> upper;

    for (int num = lower; num <= upper; num++)
    {
        if (isPrime(num))
        {
            cout << num << " ";
        }
    }

    return 0;
}