// Static / Compile time Polymorphism

// Program for Static Operator Overloading for Time 

#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    void Set()
    {
        cout << "Enter Hours: ";
        cin >> hours;
        cout << "Enter Minutes: ";
        cin >> minutes;
        cout << "Enter Seconds: ";
        cin >> seconds;
    }

    void Put()
    {
        cout << hours << " hours " << minutes << " minutes " << seconds << " seconds" << endl;
    }

    Time operator+(Time t)
    {
        Time a;
        a.hours = hours + t.hours;
        a.minutes = minutes + t.minutes;
        a.seconds = seconds + t.seconds;

        // Handle carry if seconds exceed 60
        if (a.seconds >= 60)
        {
            a.minutes = a.minutes + a.seconds / 60; // Convert extra seconds to minutes
            a.seconds = a.seconds % 60; // Get remaining seconds
        }

        // Handle carry if minutes exceed 60
        if (a.minutes >= 60)
        {
            a.hours = a.hours + a.minutes / 60; // Convert extra minutes to hours
            a.minutes = a.minutes % 60; // Get remaining minutes
        }

        return a;
    }
};

int main()
{
    Time t1, t2, t3;

    cout << "Enter Data for Time 1:\n";
    t1.Set();

    cout << "Enter Data for Time 2:\n";
    t2.Set();

    t3 = t1 + t2; // Adding time objects using overloaded operator

    cout << "Results:\n";
    cout << "Time 1: ";
    t1.Put();

    cout << "Time 2: ";
    t2.Put();

    cout << "Total Time : ";
    t3.Put();

    return 0;
}
