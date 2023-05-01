// #26 C Program to check Friendly Pair or not
// Two numbers num1 & num2 are friendly pairs if the following holds true -
// (Sum of divisors of num1)/num1= (Sum of divisors of num2)/num2

#include <iostream>
using namespace std;

int findDivisors(int n)
{
    int sum = 0;

    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    return sum;
}

int main()
{

    int num1, num2;
    cout << "enter 2 numbers: ";
    cin >> num1 >> num2;

    if ((findDivisors(num1) / num1) == findDivisors(num2) / num2)
    {
        cout << "friendly pair";
    }
    else
    {
        cout << "not";
    }

    return 0;
}