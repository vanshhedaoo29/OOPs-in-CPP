// Program for implementing the concept of Encapsulation

#include <iostream>
using namespace std;

class Car
{
private:
    string name;
    string engine;
    int power;
    int torque;
    int topspeed;

public:
    void getdata()
    {
        cout << "Enter Car Name : ";
        getline(cin, name);
        cout << "Enter Engine Type : ";
        getline(cin, engine);
        cout << "Enter Power of Engine : ";
        cin >> power;
        cout << "Enter Torque of Engine : ";
        cin >> torque;
        cout << "Enter Top Speed : ";
        cin >> topspeed;
    }

    void putdata()
    {
        cout << "Car Name : " << name; 
        cout << "\nEngine Type : " << engine;
        cout << "\nPower and Torque : " << power << " hp , " << torque << " Nm";
        cout << "\nTop Speed : " << topspeed << " km/h";
    }
};

int main()
{
    Car c1;

    cout << "Enter Car Details :\n";
    c1.getdata();
    cout << "Car Details :\n";
    c1.putdata();

    return 0;
}