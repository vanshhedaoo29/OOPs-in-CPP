// Constructor in Derived Class

#include <iostream>
using namespace std;

class base
{
    int data;
    public:
    base(int i)
    {
        data = i;
        cout << "Base class constructor called" << endl;
    }

    void print()
    {
        cout << "The value of data is " << data << endl;
    }
};

class derived : public base
{
    int derive;
    public:
    derived(int a, int b) : base(a)
    {
        derive = b;
        cout << "Derived class constructor called" << endl;
    }

    void print1()
    {
        cout << "The value of derived is " << derive << endl;
    }
};


int main()
{
    derived obj(1,2);

    obj.print();
    obj.print1();
    return 0;
}
/*
Base class constructor called
Derived class constructor called
The value of data is 1
The value of derived is 2
*/