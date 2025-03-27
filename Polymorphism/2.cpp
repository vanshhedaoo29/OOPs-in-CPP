// Static / Compile time Polymorphism

// Program for Static Operator Overloading for Complex Number

#include <iostream>
using namespace std;

class Complex
{
    private:
    int real;
    float img;

    public:
    void Set()
    {
        cout << "Enter Real Part : ";
        cin >> real;
        cout << "Enter Imaginary Part : ";
        cin >> img;
    }

    void Put()
    {
        cout << real << " + i" << img << endl;
    }

    Complex operator +(Complex t)
    {
        Complex a;
        a.real = real + t.real;
        a.img = img + t.img;
        return a;
    }
};

int main()
{
    Complex c1, c2, c3;

    cout << "Enter Data for c1 :\n";
    c1.Set();

    cout << "Enter Data for c2 :\n";
    c2.Set();

    c3 = c1 + c2;

    cout << "Results :\n";
    cout << "Data for c1 :";
    c1.Put();

    cout << "Data for c2 :";
    c2.Put();

    cout << "Data for c3 :";
    c3.Put();

    return 0;
}