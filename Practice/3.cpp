// Practice of function overriding / virtual function

#include <iostream>
using namespace std;

class Draw
{
    public:
    virtual void print()
    {
        cout << "I am drawing nothing";
    }
};

class Circle : public Draw
{
    public:
    void print()
    {
        cout << "I am drawing Circle";
    }
};

class Rectangle : public Draw
{
    public:
    void print()
    {
        cout << "I am drawing Rectangle";
    }
};

int main()
{
    Draw *ptr;   // Pointer Declaration of Base Class 

    Circle c;         // Object created of derived class Circle
    Rectangle r;      // Object created of derived class Rectangle

    ptr = &c;           // Pointer pointed towards object c
    ptr->print();       // M.F inside Circle class will be called due to use of virtual function in base class

    cout << '\n';

    ptr = &r;           // Pointer pointed towards object r
    ptr->print();       // M.F inside Rectangle class will be called due to use of virtual function in base class

}