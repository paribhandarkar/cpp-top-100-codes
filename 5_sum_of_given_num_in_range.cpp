// #5 Find the Sum of Numbers in a given range in C++
// Given two integer inputs num1 and num2, the objective is to write a code to Find the Sum of Numbers in a Given Range

#include <iostream>
using namespace std;

int main()
{

    int low, high;
    cout << "enter lower and higher range: ";
    cin >> low >> high;

    int sum = 0;

    for (int i = low; i <= high; i++)
    {
        sum += i;
    }

    cout << sum;

    return 0;
}