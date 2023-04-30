// #9 C++ Program to Check Whether the Number is Prime or Not
// A prime number is a number that can be divided by 1 and itself i.e. a number that can not be divided by any other number other than 1 or itself is a prime number.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;

    if (num < 2)
    {
        cout << "not prime number";
    }
    else if (num == 2)
    {
        cout << "prime number";
    }
    else
    {

        int i;
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                cout << "not a prime";
                break;
            }
        }

        if (i == num)
        {
            cout << "prime number";
        }
    }

    return 0;
}