#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter value of a : ";
    cin >> a;
    cout << "Enter value of b : ";
    cin >> b;

    try
    {
        if (b == 0)
            throw 404;

        c = a / b;
        cout << "Division : " << c;
    }
    catch (...)
    {
        cout << "Invalid Input";
    }
    return 0;
}