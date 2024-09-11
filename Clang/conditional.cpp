#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Enter number: ";
    cin >> number;

    if (number == 0)
    {
        cout << "Number is zero" << endl;
    }
    else if (number % 2 == 1)
    {
        cout << "Odd Number" << endl;
    }
    else if (number % 2 == 0)
    {
        cout << "Even Number" << endl;
    }
    else
    {
        cout << "Invalid Input" << endl;
    }
}