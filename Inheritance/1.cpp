// Single Level Inheritance

#include <iostream>
using namespace std;

class Person
{
    private:
    string name;
    int age;

    public:
    void Set_P()
    {
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter Age : ";
        cin >> age;
    }

    void Put_P()
    {
        cout << "Name : " << name;
        cout << "\nAge : " << age;
    }
};

class Student : private Person
{
        private:
        string course;

        public:
        void Set_S()
    {
        Set_P();
        cout << "Enter Course : ";
        cin >> course;
    }

    void Put_S()
    {
        Put_P();
        cout << "\nCourse : " << course;
    }

};

int main()
{
    Student s1;

    s1.Set_S();

    cout << "Student Information is : \n";

    s1.Put_S();
    return 0;
}