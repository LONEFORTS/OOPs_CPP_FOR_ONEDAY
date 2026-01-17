#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    int marks[3];
    int total = 0;
    float average;

    void getData()
    {
        cout << "Enter Roll Number: ";
        cin >> roll;

        // Array to store subject marks
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter marks " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void calculate()
    {
        for (int i = 0; i < 3; i++)
            total += marks[i];

        average = (float)total / 3;
    }

    void displayResult()
    {
        cout << "\nRoll Number: " << roll << endl;
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
    Student s1;

    s1.getData();
    s1.calculate();
    s1.displayResult();

    return 0;
}