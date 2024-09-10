#include <iostream>
using namespace std;

int main() {
    int i = 42;
    double d;

    // Implicit typecasting
    d = i;

    cout << "Integer value: " << i << endl;
    cout << "Double value: " << d << endl; // i is automatically converted to double

    double dd = 42.56;
    int ii;

    // Explicit typecasting
    ii = (int)dd;

    cout << "Double value: " << dd << endl;
    cout << "Integer value: " << ii << endl; // d is manually converted to int

    return 0;
}
