#include <iostream>
using namespace std;
int main()
{
    int a, b;

    cout << "Enter First Number : ";
    cin >> a;

    cout << "Enter Second Number : ";
    cin >> b;

    cout << "Arithmetic Operations are : \n";
    cout << "Addition : " << a+b << endl;
    cout << "Subtraction : " << a-b << endl;
    cout << "Multiplication : " << a*b << endl;
    cout << "Division : " << a/b << endl;
    cout << "Modulus : " << a%b << endl;
}