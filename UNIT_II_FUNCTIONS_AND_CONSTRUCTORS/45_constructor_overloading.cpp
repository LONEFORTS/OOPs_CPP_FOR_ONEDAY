
// Program to demonstrate constructor overloading

#include <iostream>
using namespace std;

class Box
{
    int length, breadth, height;

public:
    // Default constructor
    Box()
    {
        length = breadth = height = 0;
    }

    // Constructor with two parameters
    Box(int l, int b)
    {
        length = l;
        breadth = b;
        height = 0;
    }

    // Constructor with three parameters
    Box(int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
    }

    void display()
    {
        cout << "L=" << length
             << " B=" << breadth
             << " H=" << height << endl;
    }
};

int main()
{
    Box b1;              // default constructor
    Box b2(10, 20);      // two-parameter constructor
    Box b3(10, 20, 30);  // three-parameter constructor

    b1.display();
    b2.display();
    b3.display();

    return 0;
}