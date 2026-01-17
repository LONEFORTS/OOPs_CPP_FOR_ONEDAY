// Program to demonstrate the Logical Operators in C++

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "\nLogical Operator Results:\n";

    cout << "(a > b) && (a != b) : " << ((a > b) && (a != b)) << endl;
    cout << "(a < b) || (a == b) : " << ((a < b) || (a == b)) << endl;
    cout << "!(a == b)           : " << !(a == b) << endl;

    return 0;
}