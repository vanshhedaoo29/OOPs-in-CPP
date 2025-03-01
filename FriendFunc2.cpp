// As a member function of one class and friend of another class

#include <iostream>
using namespace std;

class Y; // Forward Declaration
class X
{
    private:
    int x;

    public:
    X(int t)
    {
        x = t;
    }
    friend void Y::display(X);
};

class Y
{
    public:
    void display(X t)
    {
        cout << "x = " << t.x;
    }
};

int main()
{
    X x(10);
    Y y;
    y.display(x); // Pass the object of class X
}
