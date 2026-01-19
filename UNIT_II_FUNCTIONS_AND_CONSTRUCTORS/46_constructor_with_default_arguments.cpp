
// Program to demonstrate constructor with default arguments

#include <iostream>
using namespace std;

class Date
{
    int day, month, year;

public:
    Date(int d, int m, int y = 2009)   // default value for year
    {
        day = d;
        month = m;
        year = y;
    }

    void display()
    {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main()
{
    Date d1(12, 8);           // year takes default value
    Date d2(5, 10, 2024);     // explicit year given

    d1.display();
    d2.display();

    return 0;
}