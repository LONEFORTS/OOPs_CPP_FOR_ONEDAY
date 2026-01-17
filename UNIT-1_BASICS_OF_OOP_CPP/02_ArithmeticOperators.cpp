#include <iostream>
using namespace std;

int main() {
    int number1, number2;

    cout << "Enter Number1: ";
    cin >> number1;

    cout << "Enter Number2: ";
    cin >> number2;

    cout << "Addition: " << (number1 + number2) << endl;
    cout << "Subtraction: " << (number1 - number2) << endl;
    cout << "Multiplication: " << (number1 * number2) << endl;

    if (number2 != 0) {
        cout << "Division: " << (number1 / number2) << endl;
        cout << "Remainder: " << (number1 % number2) << endl;
    } else {
        cout << "Division and remainder not possible (division by zero)" << endl;
    }

    return 0;
}