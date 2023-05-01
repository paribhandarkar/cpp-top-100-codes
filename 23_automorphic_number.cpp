// #23 C++ Program to check whether a number is an Automorphic number or not
// An Automorphic number is a special number, whose’s square ends with the same digits as the number itself

#include <iostream>
using namespace std;

int isAutomorphic(int n)
{
    int square = n * n;

    while (n != 0)
    {
        if (n % 10 != square % 10)
        {
            return 0;
        }

        n /= 10;
        square /= 10;
    }

    return 1;
}

int main()
{

    int n, sq;

    cout << "enter a number: ";
    cin >> n;

    sq = n * n;
    if (isAutomorphic(n))
    {
        cout << "automorphic number as square is " << sq;
    }
    else
    {
        cout << "not automorphic as square is " << sq;
    }

    return 0;
}