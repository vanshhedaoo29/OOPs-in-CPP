/*Encapsulation Principle*/

#include <iostream>
using namespace std;

class student
{
    private:
    int roll_no;
    string name;

    public:
    int age;

    void display(void)
    {
        cout << "\nAge : " << age;
    }

    void getdata()
    {
        cout << "Enter Roll No. : ";
        cin >> roll_no;
        cout << "Enter Name : ";
        cin >> name;
    }

    void setdata()
    {
        cout << "\nName : " << name ;
        cout << "\nRoll No. : " << roll_no ;
    }
};

int main()
{
    student s;

    s.age = 19;

    s.getdata();
    s.setdata();
    s.display();
}