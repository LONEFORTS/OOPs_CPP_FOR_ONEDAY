

#include <iostream>
using namespace std;

class Fibonacci
{
    int n;

public:
    Fibonacci();          // default constructor declaration
    void generate();      // member function declaration
};

// default constructor definition
Fibonacci::Fibonacci()
{
    n = 10;   // number of terms
}

// member function definition using scope resolution operator
void Fibonacci::generate()
{
    int a = 0, b = 1, c;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
}

int main()
{
    Fibonacci obj;   // default constructor called automatically
    obj.generate();
    return 0;
}