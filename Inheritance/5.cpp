// Multi Level Inheritance with Private Mode Example 1

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

class B : private A
{
    public:
    void Set_YZ()
    {
        Set_X();
        cout << "Enter Value of y : ";
        cin >> y;
        cout << "Enter Value of z : ";
        cin >> z;
    }

    void Put_YZ()
    {
        Put_X();
        cout << "\ny : " << y;
        cout << "\nz : " << z;
    }
};

class C : protected B
{
    public:
    void Set_XYZ()
    {
        Set_YZ();
    }

    void Put_XYZ()
    {
        Put_YZ();
    }

};

int main()
{
    C obj;
    obj.Set_XYZ();

    cout << "Information :\n";
    obj.Put_XYZ();

    return 0;
}