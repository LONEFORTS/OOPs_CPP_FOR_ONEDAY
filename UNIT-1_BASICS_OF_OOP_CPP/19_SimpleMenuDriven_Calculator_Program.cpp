#include <iostream>
using namespace std;

class Calculator
{
public:
    int a, b;

    void getData()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void add()
    {
        cout << "Addition: " << a + b << endl;
    }

    void subtract()
    {
        cout << "Subtraction: " << a - b << endl;
    }

    void multiply()
    {
        cout << "Multiplication: " << a * b << endl;
    }
};

int main()
{
    Calculator c1;
    int choice;

    c1.getData();

    // Menu driven logic using switch
    cout << "\n1. Add\n2. Subtract\n3. Multiply\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1: c1.add(); break;
        case 2: c1.subtract(); break;
        case 3: c1.multiply(); break;
        default: cout << "Invalid choice";
    }

    return 0;
}