// 5l
// Program to demonstrate destructor

#include <iostream>
using namespace std;

class Test
{
public:
    Test()
    {
        cout << "Constructor called" << endl;
    }

    ~Test()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    Test obj;   // object created

    cout << "Inside main function" << endl;

    return 0;   // object destroyed automatically here
}