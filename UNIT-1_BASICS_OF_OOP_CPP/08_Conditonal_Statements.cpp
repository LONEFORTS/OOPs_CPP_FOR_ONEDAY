#include <iostream>
using namespace std;

int main()
{
    int num, choice;

    cout << "Enter a number: ";
    cin >> num;

    // if statement
    if (num > 0)
        cout << "Number is Positive" << endl;

    // if-else statement
    if (num % 2 == 0)
        cout << "Number is Even" << endl;
    else
        cout << "Number is Odd" << endl;

    // else-if ladder
    if (num > 0)
        cout << "Positive" << endl;
    else if (num < 0)
        cout << "Negative" << endl;
    else
        cout << "Zero" << endl;

    // switch statement
    cout << "\nEnter choice (1–3): ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Choice is One";
            break;
        case 2:
            cout << "Choice is Two";
            break;
        case 3:
            cout << "Choice is Three";
            break;
        default:
            cout << "Invalid Choice";
    }

    return 0;
}