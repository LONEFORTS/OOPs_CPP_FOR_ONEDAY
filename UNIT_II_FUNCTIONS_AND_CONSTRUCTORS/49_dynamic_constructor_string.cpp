
// Program to demonstrate dynamic constructor and string combination

#include <iostream>
#include <cstring>
using namespace std;

class MyString
{
    char *name;
    int length;

public:
    // Dynamic constructor
    MyString(const char *str)
    {
        length = strlen(str);
        name = new char[length + 1];
        strcpy(name, str);
    }

    void display()
    {
        cout << name << endl;
    }

    // Function to combine two strings
    void combine(MyString s1, MyString s2)
    {
        length = s1.length + s2.length;
        name = new char[length + 1];
        strcpy(name, s1.name);
        strcat(name, s2.name);
    }

    // Destructor
    ~MyString()
    {
        delete[] name;
    }
};

int main()
{
    MyString s1("Hello ");
    MyString s2("World");

    MyString s3("");
    s3.combine(s1, s2);

    cout << "Combined String: ";
    s3.display();

    return 0;
}