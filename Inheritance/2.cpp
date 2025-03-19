// Single Level Inheritance Example 2

#include <iostream>
using namespace std;

class Person
{
    protected:
    string name;
    int age;
};

class Student : private Person
{
    private:
    string course;

    public:
    void Set_S()
    {
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter Age : ";
        cin >> age;
        cout << "Enter Course : ";
        cin >> course;
    }

    void Put_S()
    {
        cout << "Name : " << name;
        cout << "\nAge : " << age;
        cout << "\nCourse : " << course;
    }

};

int main()
{
    Student s;
    s.Set_S();

    cout << "Student Information : \n";
    s.Put_S();
    return 0;
}