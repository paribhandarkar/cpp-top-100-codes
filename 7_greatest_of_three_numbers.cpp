// #7 Program to find the Greatest of Three Numbers in C++
// Here we will discuss how to find the greatest of three numbers in C++ entered by the user in c++ programming language.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2 && num1 > num3)
    {
        cout << num1 << " is the greatest";
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << num2 << " is the greatest";
    }
    else
    {
        cout << num3 << " is the greatest";
    }
    return 0;
}