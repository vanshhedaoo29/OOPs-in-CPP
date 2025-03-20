// Multiple Inheritance Example 1

#include <iostream>
using namespace std;

class X
{
    protected:
    int x;
};

class Y
{
    protected:
    int y;
};

class Z : private X, protected Y
{
    private:
    int z;

    public:
    void Set_XY()
    {
        cout << "Enter Value of x : ";
        cin >> x;
        cout << "Enter Value of y : ";
        cin >> y;
    }

    void Put_XYZ()
    {
        z = x * y;
        cout << "x : " << x;
        cout << "\ny : " << y;
        cout << "\nz : " << z;
    }
};

int main()
{
    Z obj;
    obj.Set_XY();

    cout << "Multiplication : \n";
    obj.Put_XYZ();
    return 0;
}