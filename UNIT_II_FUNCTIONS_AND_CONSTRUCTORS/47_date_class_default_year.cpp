

#include <iostream>
using namespace std;

class Date
{
    int day, month, year;

public:
    Date(int d, int m, int y = 2009)   // default year
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
    Date d1(15, 8);          // year defaults to 2009
    Date d2(26, 1, 2025);    // year given explicitly

    d1.display();
    d2.display();

    return 0;
}