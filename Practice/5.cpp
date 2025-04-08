// Practice for this pointer without pointer to object

#include <iostream>
using namespace std;

class A
{
private:
    int a;

public:
    void Set_A(int a)
    {
        this->a = a;
    }

    void Put_A()
    {
        cout << "a = " << a;
    }
};

int main()
{
    A t;

    t.Set_A(29);
    cout << "Value : \n";
    t.Put_A();
}