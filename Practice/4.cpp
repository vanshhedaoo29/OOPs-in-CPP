// Practice of function overriding / virtual function

#include <iostream>
using namespace std;

class Animal
{
public:
    void print()
    {
        cout << "I am Animal 1" << endl;
    }

    virtual void print1()
    {
        cout << "I am Animal 2";
    }
};

class Lion : public Animal
{
public:
    void print()
    {
        cout << "I am Lion 1" << endl;
    }

    void print1()
    {
        cout << "I am Lion 2";
    }
};

class Tiger : public Animal
{
public:
    void print()
    {
        cout << "I am Tiger 1" << endl;
    }

    void print1()
    {
        cout << "I am Tiger 2";
    }
};

int main()
{
    Animal *ptr;
    Lion l;
    Tiger t;

    ptr = &l;
    ptr->print();
    ptr->print1();
    cout << endl;
    ptr = &t;
    ptr->print();
    ptr->print1();
}