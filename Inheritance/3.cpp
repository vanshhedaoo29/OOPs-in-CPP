// Multi Level Inheritance Example 1

#include <iostream>
using namespace std;

class A
{
    private:
    int x;

    protected:
    int y;

    public:
    int z;

    void Set_X()
    {
        cout << "Enter Value of x : ";
        cin >> x;
    }

    void Put_X()
    {
        cout << "x : " << x;
    }
};

class B : public A
{
    
};

class C : public B
{
    public:
    void Set_XYZ()
    {
        Set_X();
        cout << "Enter Value of y : ";
        cin >> y;
        cout << "Enter Value of z : ";
        cin >> z;
    }

    void Put_XYZ()
    {
        Put_X();
        cout << "\ny : " << y;
        cout << "\nz : " << z;
    }

};

int main()
{
    C s;
    s.Set_XYZ();
    s.Put_XYZ();
}