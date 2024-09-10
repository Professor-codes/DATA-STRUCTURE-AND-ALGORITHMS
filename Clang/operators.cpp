#include <iostream>
using namespace std;

int main()
{
    // Arithmetic
    int a = 10, b = 5;
    cout << "Arithmetic" << endl;
    cout << "a + b = " << a + b << endl; // Addition
    cout << "a - b = " << a - b << endl; // Subtraction
    cout << "a * b = " << a * b << endl; // Multiplication
    cout << "a / b = " << a / b << endl; // Division
    cout << "a % b = " << a % b << endl; // Modulus (remainder)
    cout << endl;

    // Relational
    cout << "Relational" << endl;
    cout << (a > b) << endl;  // Greater than
    cout << (a < b) << endl;  // Less than
    cout << (a == b) << endl; // Equal to
    cout << (a != b) << endl; // Not equal to
    cout << (a >= b) << endl; // Greater than or equal to
    cout << (a <= b) << endl; // Less than or equal to
    cout << endl;

    // Logical
    cout << "Logical" << endl;
    bool x = true, y = false;
    cout << (x && y) << endl; // Logical AND
    cout << (x || y) << endl; // Logical OR
    cout << (!x) << endl;     // Logical NOT
    cout << endl;

    // Bitwise
    a = 5, b = 3;         // a = 0101, b = 0011 in binary
    cout << "Bitwise" << endl;
    cout << (a & b) << endl;  // Bitwise AND
    cout << (a | b) << endl;  // Bitwise OR
    cout << (a ^ b) << endl;  // Bitwise XOR
    cout << (~a) << endl;     // Bitwise NOT
    cout << (a << 1) << endl; // Left shift
    cout << (a >> 1) << endl; // Right shift
    cout << endl;

    // Assignment
    cout << "Assignment" << endl;
    a += b; // Equivalent to a = a + b
    cout << "a += b: " << a << endl;
    a -= b; // Equivalent to a = a - b
    cout << "a -= b: " << a << endl;
    a *= b; // Equivalent to a = a * b
    cout << "a *= b: " << a << endl;
    a /= b; // Equivalent to a = a / b
    cout << "a /= b: " << a << endl;
    a %= b; // Equivalent to a = a % b
    cout << "a %= b: " << a << endl;
    cout << endl;

    // Increment Decrement
    cout << "Increment Decrement" << endl;
    cout << "a++: " << a++ << endl; // Post-increment
    cout << "++a: " << ++a << endl; // Pre-increment
    cout << "a--: " << a-- << endl; // Post-decrement
    cout << "--a: " << --a << endl; // Pre-decrement
    cout << endl;

    // Ternary
    a = 10, b = 20;
    cout << "Ternary" << endl;
    int max = (a > b) ? a : b;
    cout << "Max value: " << max << endl;
    cout << endl;

    return 0;
}