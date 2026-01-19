
// Program to create and destroy object using new and delete

#include <iostream>
using namespace std;

class Sample
{
    int x;

public:
    Sample(int a)
    {
        x = a;
        cout << "Constructor called. Value = " << x << endl;
    }

    void show()
    {
        cout << "Value of x = " << x << endl;
    }

    ~Sample()
    {
        cout << "Destructor called. Memory released." << endl;
    }
};

int main()
{
    // Creating object dynamically
    Sample *obj = new Sample(100);

    obj->show();

    // Destroying object
    delete obj;

    return 0;
}