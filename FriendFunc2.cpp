// As a member function of one class and friend of another class

#include <iostream>
using namespace std;

class Y; // Forward Declaration
class X
{
    public:
    void 
};

class Y
{
    public:
    void display(X& t)
    {
        cout << "x = " << t.x;
    }
};

int main()
{
    X a(10);
    Y y;
    y.display(a); // Pass the object of class X
}
