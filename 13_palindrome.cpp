// #13 Palindrome or not
// A number is a Palindrome number if the reverse of the number and the numbers itself are equal i.e. if the number and its reverse are the same then a number is a palindrome number.

#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "enter a number: ";
    cin >> num;
    int number = num;

    int rem, rev = 0;

    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    if (rev == number)
    {
        cout << "palindrome";
    }
    else
    {
        cout << "not palindrome";
    }
    return 0;
}