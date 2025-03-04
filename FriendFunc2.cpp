// As a Member Function of one class and Friend of Another class

#include <iostream>
using namespace std;

class Y; // Forward Declaration
class X
{
    int x; // Member variable declaration

public:
    X(int val) : x(val) {} // Constructor
    friend class Y; // Declare Y as a friend
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
    X a(10);
    Y y;
    y.display(a); // Pass the object of class X
}
