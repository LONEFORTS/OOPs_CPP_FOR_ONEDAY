
// Program to demonstrate the Relational Operators in C++
//Relations operators are shown in the following program relational operators returun true/1 if condition is true according to operator function and false 0 if the condition of operator does not met.


#include <iostream>
using namespace std;

int main()
{
    int a, b; 


    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "\nRelational Operator Results:\n"; 
    
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a > b  : " << (a > b) << endl;
    cout << "a < b  : " << (a < b) << endl;
    cout << "a >= b : " << (a >= b) << endl;
    cout << "a <= b : " << (a <= b) << endl;
 
    return 0;
}