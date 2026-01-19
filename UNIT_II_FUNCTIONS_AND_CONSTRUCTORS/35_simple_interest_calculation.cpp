
// Program to calculate Simple Interest using class

#include <iostream>
using namespace std;

class Account
{
    float principal;
    float rate;
    int years;

public:
    void accept()
    {
        cout << "Enter Principal Amount: ";
        cin >> principal;

        cout << "Enter Rate of Interest: ";
        cin >> rate;

        cout << "Enter Number of Years: ";
        cin >> years;
    }

    void calculate()
    {
        float simpleInterest;
        simpleInterest = (principal * rate * years) / 100;

        cout << "Simple Interest = " << simpleInterest << endl;
    }
};

int main()
{
    Account acc;

    acc.accept();
    acc.calculate();

    return 0;
}