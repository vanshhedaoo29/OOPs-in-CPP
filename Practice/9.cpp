// Abstract class with pure virtual function

#include <iostream>
using namespace std;

// Abstract class
class Shape
{
public:
    // Pure virtual function
    virtual void draw() = 0;
};

// Derived class
class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a Circle" << endl;
    }
};

// Derived class
class Square : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a Square" << endl;
    }
};

int main()
{
    Shape *s1 = new Circle();
    Shape *s2 = new Square();

    s1->draw(); // Output: Drawing a Circle
    s2->draw(); // Output: Drawing a Square

    delete s1;
    delete s2;

    return 0;
}

/*
Drawing a Circle
Drawing a Square

*/