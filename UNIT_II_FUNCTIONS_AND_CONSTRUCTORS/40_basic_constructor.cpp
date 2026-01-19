
// Program to demonstrate a basic (default) constructor

#include <iostream>
using namespace std;

class Sample
{
    int x;

public:
    // constructor
    Sample()
    {
        x = 10;
    }

    void display()
    {
        cout << "Value of x = " << x << endl;
    }
};

int main()
{
    Sample obj;   // constructor is called automatically

    obj.display();

    return 0;
}