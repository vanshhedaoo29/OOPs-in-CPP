// Program using this pointer but without pointer to object

#include <iostream>
using namespace std;

class X
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
    X t;

    t.Set_A(20);
    cout << "Value :\n";
    t.Put_A();

    return 0;
}