#include <iostream>
using namespace std;

class Student
{
public:
    int marks1, marks2, total;
    float average;

    // Member function to take marks input
    void getMarks()
    {
        cout << "Enter Marks 1: ";
        cin >> marks1;
        cout << "Enter Marks 2: ";
        cin >> marks2;
    }

    // Member function to calculate total and average
    void calculate()
    {
        total = marks1 + marks2;
        average = (float)total / 2;
    }

    // Member function to display result using condition
    void displayResult()
    {
        cout << "Total Marks: " << total << endl;
        cout << "Average: " << average << endl;

        if (average >= 40)
            cout << "Result: Pass" << endl;
        else
            cout << "Result: Fail" << endl;
    }
};

int main()
{
    // Object of class Student
    Student s1;

    s1.getMarks();
    s1.calculate();
    s1.displayResult();

    return 0;
}