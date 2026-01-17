#include <iostream>
#include <iomanip>   // for manipulators
using namespace std;

int main()
{
    int a = 10, b = 20;
    float c = 12.34567;

    cout << "Without manipulators:" << endl;
    cout << a << b << endl;

    cout << "\nUsing endl:" << endl;
    cout << a << endl << b << endl;

    cout << "\nUsing setw():" << endl;
    cout << setw(5) << a << setw(5) << b << endl;

    cout << "\nUsing fixed and setprecision():" << endl