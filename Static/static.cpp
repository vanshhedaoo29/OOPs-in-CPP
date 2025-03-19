#include <iostream>
using namespace std;

class Counter
{
    private:
    static int count;        // Static Declaration

    public:
    static void showcount()       // Static Member Function
    {
        cout << count ;
    }

    Counter()
    {
        count = count + 1; 
    }
};

int Counter :: count ;        // Static Definition

int main()
{
    Counter c1, c2;

    cout << "\nNo. of oobject : ";

    Counter :: showcount();          // Static Member Function (Calling)
}