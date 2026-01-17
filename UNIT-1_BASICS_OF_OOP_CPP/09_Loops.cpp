#include <iostream>
using namespace std;

int main()
{
    int i;

    // for loop
    cout << "For Loop:" << endl;
    for (i = 1; i <= 5; i++)
        cout << i << " ";
    
    // while loop
    cout << "\n\nWhile Loop:" << endl;
    i = 1;
    while (i <= 5)
    {
        cout << i << " ";
        i++;
    }

    // do-while loop
    cout << "\n\nDo-While Loop:" << endl;
    i = 1;
    do
    {
        cout << i << " ";
        i++;
    } while (i <= 5);

    return 0;
}