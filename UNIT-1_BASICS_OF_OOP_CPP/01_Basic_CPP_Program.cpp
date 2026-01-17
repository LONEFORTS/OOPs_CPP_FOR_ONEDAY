// Program to demonstrate basic input and output in C++
// Unit-I: Basics of OOP and C++

#include <iostream>
using namespace std;

int main()
{
    char name[20];

    cout<<"Enter Your Name: ";
    cin.getline(name, 20); //Here the getiline() reads the whole string including spaces
    

    cout << "Your Name is: " << name << endl;

    return 0;
}
