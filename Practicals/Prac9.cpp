// Inheritance

#include <iostream>
using namespace std;

class Hotel
{
    protected:
    string lastname = "Hotel";
};

class Hotel1 : protected Hotel
{
    protected:
    string fname = "Taj ";

    public:
    void show()
    {
        cout << fname << lastname << endl;
    }
};

class Hotel2 : protected Hotel
{
    protected:
    string fname = "Srikrupa ";

    public:
    void show()
    {
        cout << fname << lastname << endl;
    }
};

int main()
{
    Hotel1 h1;
    Hotel2 h2;

    cout << "First Name :\n";
    h1.show();

    cout << "Second Name :\n";
    h2.show();

    return 0;
}