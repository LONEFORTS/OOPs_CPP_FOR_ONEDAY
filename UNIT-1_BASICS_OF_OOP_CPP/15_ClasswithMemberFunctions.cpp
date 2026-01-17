//follwing program Is to show how the member functions are used inside the class : 

#include <iostream>
using namespace std;

class Rectangle
{
public:
    // Data members
    int length, breadth;

    // Member function to take input - getData()
    void getData()
    {
        cout << "Enter Length: ";
        cin >> length;
        cout << "Enter Breadth: ";
        cin >> breadth;
    }

    // Member function to calculate and display area - calculateArea()
    void calculateArea()
    {
        int area = length * breadth;
        cout << "Area of Rectangle: " << area << endl;
    }
};

int main()
{
    // Object of class Rectangle
    Rectangle r1;

    r1.getData();
    r1.calculateArea();

    return 0;
}