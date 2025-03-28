// Dynamic Polymorphism Function Overriding

#include <iostream>
using namespace std;

class A
{
    public:
    virtual void print()
    {
        cout << "Print of Class A : \n";
    }

    void print1()
    {
        cout << "Print 1 of Class A : \n";
    }
};

class B : public A
{
    public:
    void print()
    {
        cout << "Print of Class B : \n";
    }

    void print1()
    {
        cout << "Print 1 of Class B : \n";
    }
};

class C : public A
{
    public:
    void print()
    {
        cout << "Print of Class C : \n";
    }

    void print1()
    {
        cout << "Print 1 of Class C : \n";
    }
};


int main()
{
    A *bptr;        // Class A pointer declared
    
    B b;
    C c;
    bptr = &b;
    bptr->print();
    bptr->print1();

    bptr = &c;
    bptr->print();
    bptr->print1();

    return 0;

}

/*
Output:
Print of Class B : 
Print 1 of Class A :
Print of Class C :
Print 1 of Class A :
*/