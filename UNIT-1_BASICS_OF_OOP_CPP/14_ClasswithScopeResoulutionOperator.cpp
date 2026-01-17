#include <iostream>
using namespace std;

class Circle
{
public:
    float radius;

    // Member function declarations
    void getData();
    void calculateArea();
};

// Member function definitions using scope resolution operator
void Circle::getData()
{
    cout << "Enter Radius: ";
    cin >> radius;
}

void Circle::calculateArea()
{
    float area = 3.14 * radius * radius;
    cout << "Area of Circle: " << area << endl;
}

int main()
{
    // Object of class Circle
    Circle c1;

    c1.getData();
    c1.calculateArea();

    return 0;
}