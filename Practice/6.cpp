// Practice for this pointer 

#include <iostream>
using namespace std;

class X
{
    private:
    int y;

    public:
    void Set_Y(int y)
    {
        this->y = y;
    }

    void Put_Y()
    {
        cout << "y = " << y;
    }
};

int main()
{
    X t, *ptr;
    ptr = &t;

    ptr->Set_Y(10);
    cout << "Value :\n";
    ptr->Put_Y();
}