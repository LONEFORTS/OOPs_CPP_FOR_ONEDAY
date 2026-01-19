
// Program to display book information using class object

#include <iostream>
using namespace std;

class Book
{
    char title[30];
    char author[30];
    float price;

public:
    void accept()
    {
        cout << "Enter Book Title: ";
        cin >> title;

        cout << "Enter Author Name: ";
        cin >> author;

        cout << "Enter Book Price: ";
        cin >> price;
    }

    void display()
    {
        cout << "\nBook Title: " << title;
        cout << "\nAuthor: " << author;
        cout << "\nPrice: " << price << endl;
    }
};

int main()
{
    Book b;

    b.accept();
    b.display();

    return 0;
}