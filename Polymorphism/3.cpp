// Static / Compile time Polymorphism

// Program for Static Operator Overloading for Distance 

#include <iostream>
using namespace std;

class Distanceop
{
private:
    int foot;
    int inch;

public:
    void Set()
    {
        cout << "Enter Foot Part: ";
        cin >> foot;
        cout << "Enter Inch Part: ";
        cin >> inch;
    }

    void Put()
    {
        cout << foot << " feet " << inch << " inches" << endl;
    }

    Distanceop operator+(Distanceop t)
    {
        Distanceop a;
        a.foot = foot + t.foot;
        a.inch = inch + t.inch;

        // Handle carry if inches exceed or equal 12
        if (a.inch >= 12)
        {
            a.foot = a.foot + (a.inch/12);  // Convert extra inches to feet
            a.inch = a.inch % 12 ;  // Get remaining inches
        }

        return a;
    }
};

int main()
{
    Distanceop c1, c2, c3;

    cout << "Enter Data for c1:\n";
    c1.Set();

    cout << "Enter Data for c2:\n";
    c2.Set();

    c3 = c1 + c2;

    cout << "Results:\n";
    cout << "Data for c1: ";
    c1.Put();

    cout << "Data for c2: ";
    c2.Put();

    cout << "Data for c3 : ";
    c3.Put();

    return 0;
}
