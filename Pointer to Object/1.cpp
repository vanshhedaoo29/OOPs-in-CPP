// OOP using pointers

#include <iostream>
using namespace std;

class X
{
    private:
    int a;

    public:
    void Set_A()
    {
        cout << "Enter a : ";
        cin >> a;
    }

    void Put_A()
    {
        cout << "a = " << a;
    }
};

int main()
{
    X t, *optr;
    optr = &t;

    optr->Set_A();
    cout << "Value : \n";
    optr->Put_A();

    return 0;
}