// #20 C++ Program to Find the Factors of a Number
// Program to find Factors of a number

#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "enter a number: ";
    cin >> num;

    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            cout << i << ", ";
        }
    }
    cout << num;

    // 100
    // Factors are: 1, 2, 4, 5, 10, 20, 25, 50, 100

    return 0;
}