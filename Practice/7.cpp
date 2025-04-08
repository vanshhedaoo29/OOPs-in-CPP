// Function Overloading

#include <iostream>
using namespace std;

void display(); // Function Declaration
void display(int);
void display(float);
void display(int, float);

int main()
{
    cout << "Values : \n";
    display(); // Function calling
    display(20);
    display(30.52f);
    display(40, 50.523f);

    return 0;
}
//  Function Definition
void display()
{
    cout << "a = " << 10 << endl;
}

void display(int b)
{
    cout << "b = " << b << endl;
}

void display(float c)
{
    cout << "c = " << c << endl;
}

void display(int d, float e)
{
    cout << "d = " << d << endl;
    cout << "e = " << e << endl;
}

/*
Values : 
a = 10
b = 20
c = 30.52
d = 40
e = 50.523
*/