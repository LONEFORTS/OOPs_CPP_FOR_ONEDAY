 // to add two complex numbers using object as function argument

#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    void accept()
    {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    // object passed as argument
    Complex add(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main()
{
    Complex c1, c2, c3;

    cout << "Enter first complex number\n";
    c1.accept();

    cout << "Enter second complex number\n";
    c2.accept();

    c3 = c1.add(c2);

    cout << "Sum of complex numbers: ";
    c3.display();

    return 0;
}