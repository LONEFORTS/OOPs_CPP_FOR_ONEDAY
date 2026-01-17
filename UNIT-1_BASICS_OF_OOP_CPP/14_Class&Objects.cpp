//Program to Demonstrate the Classes and Objects basics 


#include <iostream>
using namespace std;

//class keyword to declare class.
class Student
{
public:
    int roll;
    char name[20];

    void getData()
    {
        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;
    }

    void displayData()
    {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s1;

    s1.getData();
    s1.displayData();

    return 0;
}