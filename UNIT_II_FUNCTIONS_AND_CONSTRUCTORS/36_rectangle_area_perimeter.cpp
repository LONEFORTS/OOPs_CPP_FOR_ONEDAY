
// Program to calculate area and perimeter of rectangle using class

#include <iostream>
using namespace std;

class Rectangle
{
    float length;
    float breadth;

public:
    void accept()
    {
        cout << "Enter Length of Rectangle: ";
        cin >> length;

        cout << "Enter Breadth of Rectangle: ";
        cin >> breadth;
    }

    void calculate()
    {
        float area, perimeter;

        area = length * breadth;
        perimeter = 2 * (length + breadth);

        cout << "Area of Rectangle = " << area << endl;
        cout << "Perimeter of Rectangle = " << perimeter << endl;
    }
};

int main()
{
    Rectangle rect;

    rect.accept();
    rect.calculate();

    return 0;
}