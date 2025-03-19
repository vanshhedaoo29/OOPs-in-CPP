// Friend Function as a Global Declaration

#include <iostream>
using namespace std;

class Test
{
    private:
    int x;

    public:
    Test (int t)
    {
        x = t;
    }
    friend void display(Test);
};

void display(Test t)
{
    cout << "x = " << t.x;
}

int main()
{
    Test a(10);

    display(a);
}